@interface STScreenTimeEnabledUserNotificationContext : STUserNotificationContext

+ (BOOL)supportsSecureCoding;

- (id)notificationBundleIdentifier;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
