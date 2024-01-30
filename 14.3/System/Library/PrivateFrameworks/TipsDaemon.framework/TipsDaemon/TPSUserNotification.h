@class UNUserNotificationCenter;

@interface TPSUserNotification : NSObject {
    UNUserNotificationCenter *_userNotificationCenter;
}

+ (id)sharedInstance;

- (void)remove;
- (id)init;
- (void).cxx_destruct;
- (id)notificationSettings;
- (void)removeAllDeliveredNotifications;
- (void)showNotificationForNotificationCache:(id)a0 attachmentURL:(id)a1;

@end
