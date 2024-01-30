@class NSString;

@interface STAskToManageContactsNotApprovedResponseReceivedUserNotificationContext : STUserNotificationContext

@property (copy, nonatomic) NSString *childName;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)initWithChildName:(id)a0;

@end
