@interface CRKPostUserNotificationRequest : CATTaskRequest

@property (nonatomic) long long notificationType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
