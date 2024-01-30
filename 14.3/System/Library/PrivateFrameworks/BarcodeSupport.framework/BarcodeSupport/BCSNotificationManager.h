@class NSString, UNUserNotificationCenter, NSMutableSet;

@interface BCSNotificationManager : NSObject <UNUserNotificationCenterDelegate> {
    UNUserNotificationCenter *_qrCodeUserNotificationCenter;
    UNUserNotificationCenter *_nfcUserNotificationCenter;
    NSMutableSet *_notifications;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)didReceiveNotificationResponse:(id)a0;
- (void)_configureUserNotificationCenter;
- (void)_addRequestForNotification:(id)a0 codeType:(long long)a1;
- (id)_userNotificationCenterForCodeType:(long long)a0;
- (id)_notificationWithIdentifier:(id)a0;
- (void)scheduleNotification:(id)a0 codeType:(long long)a1;
- (void)withdrawNotificationsWithProcessID:(int)a0 codeType:(long long)a1;

@end
