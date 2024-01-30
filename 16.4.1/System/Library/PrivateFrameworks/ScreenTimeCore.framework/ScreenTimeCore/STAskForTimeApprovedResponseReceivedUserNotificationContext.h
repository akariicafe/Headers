@class NSString;

@interface STAskForTimeApprovedResponseReceivedUserNotificationContext : STUserNotificationContext

@property (copy, nonatomic) NSString *parentName;
@property (copy, nonatomic) NSString *requestedResourceName;
@property (nonatomic) double amountGranted;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)initWithAskForTimeRequestIdentifier:(id)a0 parentName:(id)a1 requestedResourceName:(id)a2 amountGranted:(double)a3;

@end
