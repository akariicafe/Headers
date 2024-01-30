@interface HKMobilityWalkingSteadinessNotificationStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long notificationUnavailableReasons;
@property (readonly, nonatomic) BOOL fitnessTrackingEnabled;

- (void)encodeWithCoder:(id)a0;
- (id)initWithState:(long long)a0 unavailableReasons:(long long)a1 fitnessTrackingEnabled:(BOOL)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
