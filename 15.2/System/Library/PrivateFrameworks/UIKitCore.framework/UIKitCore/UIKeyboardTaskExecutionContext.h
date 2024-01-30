@class UIKeyboardTaskQueue;

@interface UIKeyboardTaskExecutionContext : NSObject {
    UIKeyboardTaskExecutionContext *_parentExecutionContext;
    id /* block */ _continuation;
}

@property (readonly, nonatomic) UIKeyboardTaskQueue *executionQueue;
@property (retain, nonatomic) id info;
@property (copy, nonatomic) id /* block */ pendingCompletionBlock;

- (void)transferExecutionToMainThreadWithTask:(id /* block */)a0;
- (void)returnExecutionToParent;
- (id)childWithContinuation:(id /* block */)a0;
- (id)initWithExecutionQueue:(id)a0;
- (id)init;
- (id)initWithParentContext:(id)a0 continuation:(id /* block */)a1;
- (void)dealloc;
- (void)returnExecutionToParentWithInfo:(id)a0;

@end
