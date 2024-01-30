@class NSString;

@interface STAskForTimeApprovedResponseReceivedUserNotificationContext : STUserNotificationContext

@property (copy, nonatomic) NSString *parentName;
@property (copy, nonatomic) NSString *requestedResourceName;
@property (nonatomic) double amountGranted;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)initWithAskForTimeRequestIdentifier:(id)a0 parentName:(id)a1 requestedResourceName:(id)a2 amountGranted:(double)a3;

@end
