#include <stack>
#include <iostream>
using namespace std;

//����ջʵ�ֶ���
class CQueue
{
public:
    CQueue(){
        cout << "����";
    };

    ~CQueue(){
//        while(!stack1.empty()){
//            stack1.pop();
//        }
//        while(!stack2.empty()){
//            stack2.pop();
//        }

        cout<< "����";
    };
    void appendTail(const int& node);
    int deleteHead();
    int _top();

private:
    stack<int> stack1;
    stack<int> stack2;

};
