@class HKUnit, HKValueRange, NSDictionary;

@interface HKQuantityFixedAxisScalingRule : HKAbstractFixedAxisScalingRule {
    HKValueRange *_defaultQuantityBounds;
    NSDictionary *_quantityBoundsOverrides;
}

@property (retain, nonatomic) HKUnit *unit;

+ (id)ruleWithDefaultAxisBounds:(id)a0 axisBoundsOverrides:(id)a1;

- (void).cxx_destruct;
- (BOOL)isCompatibleWithQuantityType:(id)a0;
- (void)_convertQuantityRanges;
- (id)_numberRangeFromQuantityRangeForUnit:(id)a0 quantityRange:(id)a1;

@end
