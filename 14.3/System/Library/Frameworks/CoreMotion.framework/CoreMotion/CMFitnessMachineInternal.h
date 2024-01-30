@class NSObject;
@protocol OS_dispatch_queue;

@interface CMFitnessMachineInternal : NSObject {
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
}

- (void)_teardown;
- (id)init;
- (void)dealloc;
- (void)_feedFitnessMachineData:(id)a0;

@end
