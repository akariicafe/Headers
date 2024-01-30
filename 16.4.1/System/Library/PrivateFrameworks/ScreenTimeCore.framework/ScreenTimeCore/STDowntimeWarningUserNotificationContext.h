@interface STDowntimeWarningUserNotificationContext : STUserNotificationContext

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)setTimeLeft:(double)a0;

@end
