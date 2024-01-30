@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CMMotionActivityManager : NSObject {
    void *fLocationConnection;
    NSObject<OS_dispatch_queue> *fQueue;
    id /* block */ fHandler;
    NSOperationQueue *fHandlerQueue;
}

+ (BOOL)isActivityLiteAvailable;
+ (BOOL)isActivityAvailable;
+ (long long)authorizationStatus;

- (void)stopActivityUpdates;
- (void)_handleQueryResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0 onQueue:(id)a1 withHandler:(id /* block */)a2;
- (void)stopActivityLiteUpdates;
- (id)init;
- (void)queryActivityStartingFromDate:(id)a0 toDate:(id)a1 toQueue:(id)a2 withHandler:(id /* block */)a3;
- (void)startActivityUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)dealloc;
- (void)startActivityLiteUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;

@end
