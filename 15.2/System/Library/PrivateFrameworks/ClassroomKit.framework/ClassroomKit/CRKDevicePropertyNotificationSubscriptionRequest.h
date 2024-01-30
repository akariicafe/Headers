@class NSArray;

@interface CRKDevicePropertyNotificationSubscriptionRequest : CATTaskRequest

@property (copy, nonatomic) NSArray *propertyKeys;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
