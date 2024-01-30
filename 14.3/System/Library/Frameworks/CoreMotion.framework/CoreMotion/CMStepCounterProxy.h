@class NSObject;
@protocol OS_dispatch_queue;

@interface CMStepCounterProxy : NSObject {
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationdConnection;
    BOOL fStartedUpdates;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    long long fStepCountFromStart;
    long long fPrevStepCount;
}

- (void)_teardown;
- (id)init;
- (void)dealloc;
- (void)_queryStepCountStartingFromInternal:(id)a0 to:(id)a1 toQueue:(id)a2 withHandler:(id /* block */)a3;
- (void)_startStepCountingUpdatesToQueue:(id)a0 updateOn:(long long)a1 withHandler:(id /* block */)a2;
- (void)_handleQueryResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0 onQueue:(id)a1 withHandler:(id /* block */)a2;

@end
