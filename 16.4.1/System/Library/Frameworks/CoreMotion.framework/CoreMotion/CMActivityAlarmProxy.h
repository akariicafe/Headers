@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CMActivityAlarmProxy : NSObject {
    id _internal;
    void *fLocationdConnection;
    int fAlarmCounter;
    NSMutableDictionary *fAlarms;
    NSObject<OS_dispatch_queue> *fReplyQueue;
    BOOL fAlarmAvailable;
}

+ (id)sharedInstance;

- (void)listenForActivityAlarm:(id)a0;
- (void)stopListeningForActivityAlarm:(id)a0;
- (BOOL)activityAlarmAvailable;
- (void)dealloc;
- (id)init;

@end
