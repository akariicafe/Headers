@class NSInvocation, NSObject;
@protocol OS_dispatch_group, PHAServiceOperationListener;

@interface PHAServiceCancelableOperation : NSObject {
    long long _operationId;
    BOOL _cancelRequested;
    id /* block */ _cancellationBlock;
    NSObject<OS_dispatch_group> *_completionGroup;
}

@property (readonly) NSInvocation *invocation;
@property (readonly) long long operationId;
@property (readonly) BOOL isCancelled;
@property (weak) id<PHAServiceOperationListener> delegate;

+ (id)operationNotFoundError:(long long)a0;

- (void)waitForCompletion;
- (void)addCompletionBlock:(id /* block */)a0;
- (void)setCancellationBlock:(id /* block */)a0;
- (id)initWithOperationId:(long long)a0 invocation:(id)a1;
- (id)operationCanceledError:(BOOL)a0;
- (void)_startWork;
- (id)description;
- (void).cxx_destruct;
- (void)runOperation;
- (void)enqueueOnQueue:(id)a0;
- (BOOL)cancel;

@end
