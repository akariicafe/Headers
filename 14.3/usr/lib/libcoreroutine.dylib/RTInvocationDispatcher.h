@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface RTInvocationDispatcher : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *pendingInvocations;
@property (nonatomic) BOOL valid;

- (unsigned long long)countOfPendingInvocations;
- (BOOL)invocationsPending;
- (void)shutdown;
- (id)initWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeAllPendingInvocations;
- (void)enqueueBlock:(id /* block */)a0 failureBlock:(id /* block */)a1 description:(id)a2;
- (BOOL)dispatchPendingInvocations;
- (void)_enqueueBlock:(id /* block */)a0 failureBlock:(id /* block */)a1 description:(id)a2;
- (void)enqueueBlock:(id /* block */)a0 description:(id)a1;

@end
