@interface STScreenTimeEnabledUserNotificationContext : STUserNotificationContext

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)notificationBundleIdentifier;

@end
