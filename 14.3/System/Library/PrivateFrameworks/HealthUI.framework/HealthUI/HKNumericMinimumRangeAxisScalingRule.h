@class NSNumber;

@interface HKNumericMinimumRangeAxisScalingRule : HKAbstractMinimumRangeScalingRule {
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}

+ (id)ruleWithDefaultYAxisRange:(double)a0 minimumValue:(id)a1 maximumValue:(id)a2 axisRangeOverrides:(id)a3;
+ (id)ruleWithDefaultYAxisRange:(double)a0 axisRangeOverrides:(id)a1;

- (void).cxx_destruct;

@end
