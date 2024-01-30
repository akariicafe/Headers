@class HKValueRange;

@interface HKNumericFixedAxisScalingRule : HKAbstractFixedAxisScalingRule <HKInteractiveChartNumericDefaultAxisBoundsProvider>

@property (retain, nonatomic) HKValueRange *noDataAxisBounds;

+ (id)ruleWithDefaultAxisBounds:(id)a0 axisBoundsOverrides:(id)a1;

- (id)noDataStartingRange;
- (void).cxx_destruct;

@end
