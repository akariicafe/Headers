@class ATXOnboardingStackResult;

@interface ATXOnboardingStackResultCache : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) ATXOnboardingStackResult *unknownBatteryDrainResult;
@property (copy, nonatomic) ATXOnboardingStackResult *lightBatteryDrainResult;
@property (copy, nonatomic) ATXOnboardingStackResult *mediumBatteryDrainResult;
@property (copy, nonatomic) ATXOnboardingStackResult *heavyBatteryDrainResult;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithUnknownBatteryDrainResult:(id)a0 lightBatteryDrainResult:(id)a1 mediumBatteryDrainResult:(id)a2 heavyBatteryDrainResult:(id)a3;
- (id)resultForClassification:(unsigned long long)a0;

@end
