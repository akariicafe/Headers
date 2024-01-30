@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CMMotionAlarmManagerInternal : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSMutableDictionary *fAlarms;
    BOOL fListening;
}

+ (id)instance;

- (void)_teardown;
- (void)dealloc;
- (id)init;
- (void)_startListeners;
- (BOOL)_acknowledgeAlarm:(id)a0 error:(id *)a1;
- (void)_handleAlarmFire:(id)a0;
- (BOOL)_launchRemoteAppWithError:(id *)a0 delegate:(id)a1;
- (BOOL)_registerAlarm:(id)a0 error:(id *)a1;
- (void)_stopListeners;
- (BOOL)_unregisterAlarm:(id)a0 error:(id *)a1;

@end
