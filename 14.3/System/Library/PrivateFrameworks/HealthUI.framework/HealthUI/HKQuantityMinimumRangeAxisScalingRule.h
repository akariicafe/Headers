@class HKUnit, NSDictionary, HKQuantity;

@interface HKQuantityMinimumRangeAxisScalingRule : HKAbstractMinimumRangeScalingRule {
    HKQuantity *_defaultYAxisRangeQuantity;
    HKQuantity *_minimumQuantity;
    HKQuantity *_maximumQuantity;
    NSDictionary *_axisRangeQuantityOverrides;
}

@property (retain, nonatomic) HKUnit *unit;

+ (id)ruleWithDefaultYAxisRange:(id)a0 minimumValue:(id)a1 maximumValue:(id)a2 axisRangeOverrides:(id)a3;
+ (id)ruleWithDefaultYAxisRange:(id)a0 axisRangeOverrides:(id)a1;

- (void).cxx_destruct;
- (BOOL)isCompatibleWithQuantityType:(id)a0;
- (void)_convertQuantities;

@end
