@class HKQuantity, NSDictionary, HKUnit, HKValueRange;

@interface HKQuantityMinimumRangeAxisScalingRule : HKAbstractMinimumRangeScalingRule <HKInteractiveChartQuantityDefaultAxisBoundsProvider> {
    HKQuantity *_defaultYAxisRangeQuantity;
    HKQuantity *_minimumQuantity;
    HKQuantity *_maximumQuantity;
    HKQuantity *_anchorQuantity;
    NSDictionary *_axisRangeQuantityOverrides;
}

@property (retain, nonatomic) HKValueRange *noDataAxisBounds;
@property (retain, nonatomic) HKUnit *unit;

+ (id)ruleWithDefaultYAxisRange:(id)a0 anchorValue:(id)a1;
+ (id)ruleWithDefaultYAxisRange:(id)a0 axisRangeOverrides:(id)a1;
+ (id)ruleWithDefaultYAxisRange:(id)a0 minimumValue:(id)a1 maximumValue:(id)a2 axisRangeOverrides:(id)a3;
+ (id)ruleWithDefaultYAxisRange:(id)a0 minimumValue:(id)a1 maximumValue:(id)a2 axisRangeOverrides:(id)a3 noDataAxisBounds:(id)a4;

- (void).cxx_destruct;
- (void)_convertQuantities;
- (BOOL)isCompatibleWithQuantityType:(id)a0;
- (id)noDataStartingRange;

@end
