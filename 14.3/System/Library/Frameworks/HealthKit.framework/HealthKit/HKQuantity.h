@class HKUnit;

@interface HKQuantity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_unit) HKUnit *unit;
@property (readonly, nonatomic, getter=_value) double value;

+ (id)quantityWithUnit:(id)a0 doubleValue:(double)a1;
+ (id)hk_quantityWithSeconds:(id)a0;
+ (id)hk_quantityWithMinutes:(id)a0;
+ (id)_quantityWithBeatsPerMinute:(double)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isZero;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (double)doubleValueForUnit:(id)a0;
- (id)hk_secondsNumber;
- (id)hk_minutesNumber;
- (id)_initWithUnit:(id)a0 doubleValue:(double)a1;
- (double)_valueScaledForDisplay;
- (id)_quantityByAddingQuantity:(id)a0;
- (id)_foundationMeasurement;
- (BOOL)hk_isLessThanQuantity:(id)a0;
- (double)_beatsPerMinute;
- (BOOL)isEqual:(id)a0;
- (BOOL)hk_isGreaterThanQuantity:(id)a0;
- (BOOL)isCompatibleWithUnit:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
