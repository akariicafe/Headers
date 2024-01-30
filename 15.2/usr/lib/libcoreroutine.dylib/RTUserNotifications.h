@class UNUserNotificationCenter;

@interface RTUserNotifications : NSObject

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;

- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)postNotificationWithTitle:(id)a0 message:(id)a1;

@end
