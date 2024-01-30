@class NSObject;
@protocol OS_dispatch_queue;

@interface CMGestureManagerInternal : NSObject {
    int fPriority;
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationdConnection;
    id /* block */ fGestureHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
}

- (id)initWithPriority:(int)a0;
- (void)dealloc;
- (void)stopGestureUpdatesPrivate;
- (void)startGestureUpdatesWithHandlerPrivate:(id /* block */)a0;

@end
