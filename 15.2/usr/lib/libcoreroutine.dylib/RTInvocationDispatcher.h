@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface RTInvocationDispatcher : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *pendingInvocations;
@property (nonatomic) BOOL valid;

- (void)enqueueBlock:(id /* block */)a0 description:(id)a1;
- (BOOL)invocationsPending;
- (id)initWithQueue:(id)a0;
- (unsigned long long)countOfPendingInvocations;
- (BOOL)dispatchPendingInvocations;
- (void)_enqueueBlock:(id /* block */)a0 failureBlock:(id /* block */)a1 description:(id)a2;
- (void)shutdown;
- (void)enqueueBlock:(id /* block */)a0 failureBlock:(id /* block */)a1 description:(id)a2;
- (void).cxx_destruct;
- (void)removeAllPendingInvocations;
- (id)init;

@end
