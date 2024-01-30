@interface HKHRCardioFitnessNotificationStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long notificationUnavailableReasons;
@property (readonly, nonatomic) BOOL wristDetectEnabled;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithState:(long long)a0 unavailableReasons:(long long)a1 wristDetectEnabled:(BOOL)a2;

@end
