@class NSInvocation, NSObject;
@protocol OS_dispatch_group;

@interface PHAServiceCancelableOperation : NSObject {
    NSInvocation *_invocation;
    long long _operationId;
    BOOL _cancelRequested;
    id /* block */ _cancellationBlock;
    NSObject<OS_dispatch_group> *_completionGroup;
}

+ (id)currentOperation;
+ (id)operationNotFoundError:(long long)a0;

- (BOOL)cancel;
- (void)setCancellationBlock:(id /* block */)a0;
- (void)endAsyncWork;
- (long long)operationId;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)addCompletionBlock:(id /* block */)a0;
- (id)initWithOperationId:(long long)a0 invocation:(id)a1;
- (id)description;
- (void)_startWork;
- (id)operationCanceledError:(BOOL)a0;
- (void)beginAsyncWork;
- (void)enqueueOnQueue:(id)a0;

@end
