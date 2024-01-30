@class NSObject;
@protocol OS_dispatch_queue;

@interface CMCatherineFeederInternal : NSObject {
    NSObject<OS_dispatch_queue> *fInternalQueue;
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationdConnection;
}

- (void)_teardown;
- (id)init;
- (void)_startDaemonConnection;
- (void)dealloc;
- (void)_feedCatherine:(double)a0 confidence:(double)a1 timestamp:(double)a2;

@end
