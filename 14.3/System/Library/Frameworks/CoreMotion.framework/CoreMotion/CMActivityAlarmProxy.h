@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CMActivityAlarmProxy : NSObject {
    id _internal;
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationdConnection;
    int fAlarmCounter;
    NSMutableDictionary *fAlarms;
    NSObject<OS_dispatch_queue> *fReplyQueue;
    BOOL fAlarmAvailable;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)listenForActivityAlarm:(id)a0;
- (BOOL)activityAlarmAvailable;
- (void)stopListeningForActivityAlarm:(id)a0;

@end
