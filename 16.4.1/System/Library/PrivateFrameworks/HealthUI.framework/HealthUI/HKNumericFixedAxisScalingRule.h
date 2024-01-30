@class HKValueRange;

@interface HKNumericFixedAxisScalingRule : HKAbstractFixedAxisScalingRule <HKInteractiveChartNumericDefaultAxisBoundsProvider>

@property (retain, nonatomic) HKValueRange *noDataAxisBounds;

+ (id)ruleWithDefaultAxisBounds:(id)a0 axisBoundsOverrides:(id)a1;
+ (id)ruleWithDefaultAxisBounds:(id)a0 axisBoundsOverrides:(id)a1 noDataAxisBounds:(id)a2;

- (void).cxx_destruct;
- (id)noDataStartingRange;

@end
