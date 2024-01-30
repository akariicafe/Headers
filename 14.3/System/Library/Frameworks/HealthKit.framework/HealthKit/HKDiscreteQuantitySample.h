@class NSDateInterval, HKQuantity;

@interface HKDiscreteQuantitySample : HKQuantitySample

@property (copy, nonatomic, setter=_setMinimumQuantity:) HKQuantity *minimumQuantity;
@property (copy, nonatomic, setter=_setAverageQuantity:) HKQuantity *averageQuantity;
@property (copy, nonatomic, setter=_setMaximumQuantity:) HKQuantity *maximumQuantity;
@property (copy, nonatomic, setter=_setMostRecentQuantity:) HKQuantity *mostRecentQuantity;
@property (copy, nonatomic, setter=_setMostRecentQuantityDateInterval:) NSDateInterval *mostRecentQuantityDateInterval;
@property (nonatomic) BOOL _hasMinimumQuantity;
@property (nonatomic) BOOL _hasMaximumQuantity;
@property (nonatomic) BOOL _hasMostRecentQuantity;
@property (nonatomic) BOOL _hasMostRecentQuantityDateInterval;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isConcreteObjectClass;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)encodeWithCoder:(id)a0;

@end
