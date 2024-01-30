@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CMMotionAlarmManagerInternal : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSMutableDictionary *fAlarms;
    BOOL fListening;
}

+ (id)instance;

- (id)init;
- (void)_teardown;
- (void)dealloc;
- (void)_startListeners;
- (void)_stopListeners;
- (void)_handleAlarmFire:(id)a0;
- (BOOL)_registerAlarm:(id)a0 error:(id *)a1;
- (BOOL)_unregisterAlarm:(id)a0 error:(id *)a1;
- (BOOL)_acknowledgeAlarm:(id)a0 error:(id *)a1;
- (BOOL)_launchRemoteAppWithError:(id *)a0 delegate:(id)a1;

@end
