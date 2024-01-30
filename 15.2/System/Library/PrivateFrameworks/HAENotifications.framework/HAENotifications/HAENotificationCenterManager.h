@class NotificationCenter, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface HAENotificationCenterManager : NSObject {
    NotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_eventQueue;
    double _liveThresholdInDBA;
    NSObject<OS_dispatch_semaphore> *_sem;
}

+ (id)sharedInstance;

- (id)addHAENotificationEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)sendBannerNotificationWithEvent:(id)a0 volumeLoweringAction:(unsigned int)a1;
- (void)donateSignalToTipsKit:(id)a0;
- (id)sendLiveExposureEvent:(id)a0 volumeLoweringAction:(unsigned int)a1;
- (id)sendWeeklyExposureEvent:(id)a0 volumeLoweringAction:(unsigned int)a1;

@end
