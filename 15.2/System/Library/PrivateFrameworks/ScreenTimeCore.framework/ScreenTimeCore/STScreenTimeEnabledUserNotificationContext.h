@interface STScreenTimeEnabledUserNotificationContext : STUserNotificationContext

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)notificationBundleIdentifier;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
