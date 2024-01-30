@class NSObject;
@protocol OS_dispatch_queue;

@interface CMHealthTrackerInternal : NSObject {
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
}

- (void)_teardown;
- (id)init;
- (void)dealloc;
- (void)_queryMetMinutesFromDate:(id)a0 toDate:(id)a1 handler:(id /* block */)a2;
- (void)_queryVO2MaxInputsFromRecord:(id)a0 handler:(id /* block */)a1;

@end
