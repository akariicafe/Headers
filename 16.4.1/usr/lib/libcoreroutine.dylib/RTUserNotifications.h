@class UNUserNotificationCenter;

@interface RTUserNotifications : NSObject

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;

- (id)init;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)postNotificationWithTitle:(id)a0 message:(id)a1;

@end
