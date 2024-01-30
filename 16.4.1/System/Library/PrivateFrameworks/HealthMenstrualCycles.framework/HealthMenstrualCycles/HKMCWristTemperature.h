@class NSString, HKQuantity;

@interface HKMCWristTemperature : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKQuantity *quantity;
@property (readonly, nonatomic) NSString *watchBundleIdentifier;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)wristTemperatureFromWristTemperatureSample:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithQuantity:(id)a0 watchBundleIdentifier:(id)a1;

@end
