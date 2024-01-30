@class UNUserNotificationCenter;

@interface RTUserNotifications : NSObject

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)postNotificationWithTitle:(id)a0 message:(id)a1;

@end
