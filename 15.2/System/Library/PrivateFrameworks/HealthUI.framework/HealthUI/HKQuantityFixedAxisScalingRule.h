@class HKQuantity, NSDictionary, HKUnit, HKValueRange;

@interface HKQuantityFixedAxisScalingRule : HKAbstractFixedAxisScalingRule <HKInteractiveChartQuantityDefaultAxisBoundsProvider> {
    HKValueRange *_defaultQuantityBounds;
    NSDictionary *_quantityBoundsOverrides;
    HKQuantity *_minimumQuantity;
    HKQuantity *_maximumQuantity;
}

@property (retain, nonatomic) HKValueRange *noDataAxisBounds;
@property (retain, nonatomic) HKUnit *unit;

+ (id)ruleWithDefaultAxisBounds:(id)a0 axisBoundsOverrides:(id)a1;
+ (id)ruleWithDefaultAxisBounds:(id)a0 axisBoundsOverrides:(id)a1 minimumValue:(id)a2 maximumValue:(id)a3;

- (BOOL)isCompatibleWithQuantityType:(id)a0;
- (id)noDataStartingRange;
- (void).cxx_destruct;
- (void)_convertQuantityRanges;
- (id)_numberRangeFromQuantityRangeForUnit:(id)a0 quantityRange:(id)a1;

@end
