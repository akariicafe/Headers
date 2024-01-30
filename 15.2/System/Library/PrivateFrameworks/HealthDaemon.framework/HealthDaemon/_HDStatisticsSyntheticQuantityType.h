@class HKUnit, HKSampleType;

@interface _HDStatisticsSyntheticQuantityType : HKQuantityType <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKSampleType *underlyingSampleType;
@property (readonly, nonatomic) long long overriddenAggregationStyle;
@property (readonly, copy, nonatomic) HKUnit *overriddenCanonicalUnit;

+ (id)syntheticQuantityTypeWithUnderlyingSampleType:(id)a0 aggregationStyle:(long long)a1 canonicalUnit:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (long long)aggregationStyle;
- (Class)dataObjectClass;
- (id)canonicalUnit;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
