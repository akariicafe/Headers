@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CMMotionActivityManager : NSObject {
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationConnection;
    NSObject<OS_dispatch_queue> *fQueue;
    id /* block */ fHandler;
    NSOperationQueue *fHandlerQueue;
}

+ (long long)authorizationStatus;
+ (BOOL)isActivityAvailable;

- (id)init;
- (void)dealloc;
- (void)stopActivityUpdates;
- (void)queryActivityStartingFromDate:(id)a0 toDate:(id)a1 toQueue:(id)a2 withHandler:(id /* block */)a3;
- (void)_handleQueryResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0 onQueue:(id)a1 withHandler:(id /* block */)a2;
- (void)startActivityUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;

@end
