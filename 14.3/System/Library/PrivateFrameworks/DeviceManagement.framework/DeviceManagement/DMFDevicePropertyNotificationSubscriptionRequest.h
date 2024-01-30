@class NSArray;

@interface DMFDevicePropertyNotificationSubscriptionRequest : DMFTaskRequest

@property (copy, nonatomic) NSArray *propertyKeys;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
