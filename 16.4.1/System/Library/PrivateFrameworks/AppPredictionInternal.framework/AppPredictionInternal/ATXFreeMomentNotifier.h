@class NSString, UNUserNotificationCenter, ATXFreeMomentDetector;

@interface ATXFreeMomentNotifier : NSObject <ATXFreeMomentDetectorDelegate, UNUserNotificationCenterDelegate> {
    ATXFreeMomentDetector *_freeMomentDetector;
    UNUserNotificationCenter *_notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)didDetectFreeMomentEnded;
- (void)didDetectFreeMomentStart:(int)a0 withFeatureVector:(id)a1;
- (id)getFreeMomentReason:(int)a0;
- (void)sendFreeMomentDebugNotification:(int)a0 withFeatureVector:(id)a1;

@end
