@class NSObject;
@protocol OS_dispatch_queue;

@interface CMSpringTrackerInternal : NSObject {
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    BOOL fTrackingStarted;
    id /* block */ fHandler;
}

- (BOOL)_isTracking;
- (void)_teardown;
- (id)init;
- (void)dealloc;
- (void)_startWithHandler:(id /* block */)a0;
- (void)_handleStartStopResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0 handler:(id /* block */)a1;
- (void)_stopWithHandler:(id /* block */)a0;
- (void)_querySpringDataFromRecord:(id)a0 handler:(id /* block */)a1;

@end
