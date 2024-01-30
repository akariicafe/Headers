@class HKQuantity, NSDictionary, HKUnit, HKValueRange;

@interface HKQuantityMinimumRangeAxisScalingRule : HKAbstractMinimumRangeScalingRule <HKInteractiveChartQuantityDefaultAxisBoundsProvider> {
    HKQuantity *_defaultYAxisRangeQuantity;
    HKQuantity *_minimumQuantity;
    HKQuantity *_maximumQuantity;
    NSDictionary *_axisRangeQuantityOverrides;
}

@property (retain, nonatomic) HKValueRange *noDataAxisBounds;
@property (retain, nonatomic) HKUnit *unit;

+ (id)ruleWithDefaultYAxisRange:(id)a0 minimumValue:(id)a1 maximumValue:(id)a2 axisRangeOverrides:(id)a3;
+ (id)ruleWithDefaultYAxisRange:(id)a0 axisRangeOverrides:(id)a1;

- (BOOL)isCompatibleWithQuantityType:(id)a0;
- (id)noDataStartingRange;
- (void).cxx_destruct;
- (void)_convertQuantities;

@end
