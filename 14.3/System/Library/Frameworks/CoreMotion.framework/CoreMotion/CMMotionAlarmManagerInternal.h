@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CMMotionAlarmManagerInternal : NSObject {
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSMutableDictionary *fAlarms;
    BOOL fListening;
}

+ (id)instance;

- (void)_teardown;
- (id)init;
- (void)dealloc;
- (void)_startListeners;
- (void)_stopListeners;
- (void)_handleAlarmFire:(id)a0;
- (BOOL)_registerAlarm:(id)a0 error:(id *)a1;
- (BOOL)_unregisterAlarm:(id)a0 error:(id *)a1;
- (BOOL)_acknowledgeAlarm:(id)a0 error:(id *)a1;
- (BOOL)_launchRemoteAppWithError:(id *)a0 delegate:(id)a1;

@end
