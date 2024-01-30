@class UIKeyboardTaskQueue;

@interface UIKeyboardTaskExecutionContext : NSObject {
    UIKeyboardTaskExecutionContext *_parentExecutionContext;
    id /* block */ _continuation;
    id /* block */ _pendingCompletionBlock;
}

@property (readonly, nonatomic) UIKeyboardTaskQueue *executionQueue;
@property (retain, nonatomic) id info;

- (id)childWithContinuation:(id /* block */)a0;
- (id)initWithParentContext:(id)a0 continuation:(id /* block */)a1;
- (id /* block */)takeOwnershipOfPendingCompletionBlock;
- (void)transferExecutionToMainThreadWithTask:(id /* block */)a0;
- (void)setPendingCompletionBlock:(id /* block */)a0;
- (void)returnExecutionToParent;
- (id)initWithExecutionQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)returnExecutionToParentWithInfo:(id)a0;

@end
