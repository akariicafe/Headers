@class NSNumber, NSMutableDictionary, NSDictionary;
@protocol HKInteractiveChartsAxisScalingRule, HKDecimalPrecisionRule;

@interface HKDisplayTypeChartingRules : NSObject {
    long long _defaultStyle;
    NSMutableDictionary *_rulesByTimeScope;
    id<HKDecimalPrecisionRule> _allowedDecimalPrecisionRule;
    NSDictionary *_perUnitDecimalPrecision;
}

@property (readonly, nonatomic) BOOL shouldDisplayUnitForAxisLabels;
@property (readonly, nonatomic) BOOL shouldShowInitialLollipop;
@property (readonly, nonatomic) BOOL shouldInvertYAxis;
@property (readonly, nonatomic) BOOL shouldConnectSamplesWithLines;
@property (readonly, nonatomic) BOOL shouldRoundYAxisDuringExpansion;
@property (retain, nonatomic) NSNumber *maximumYAxisLabelCount;
@property (retain, nonatomic) NSNumber *maximumYAxisLabelWidth;
@property (readonly, nonatomic) long long defaultChartStyle;
@property (retain, nonatomic) id<HKInteractiveChartsAxisScalingRule> axisScalingRule;
@property (retain, nonatomic) id<HKInteractiveChartsAxisScalingRule> compactChartAxisScalingRule;
@property (nonatomic) long long preferredTimeScope;

+ (id)basalBodyTemperatureChartingRules;
+ (id)bloodGlucoseChartingRules;
+ (id)charonDepthChartingRules;
+ (id)charonTemperatureChartingRules;
+ (BOOL)chartStyleContainsHorizontalGridlines:(long long)a0;
+ (id)chartingRulesWithDefaultChartStyle:(long long)a0 axisScalingRule:(id)a1;
+ (id)chartingRulesWithDefaultChartStyle:(long long)a0 chartStyleForTimeScopes:(id)a1 axisScalingRule:(id)a2 compactAxisScalingRule:(id)a3 preferredTimeScope:(long long)a4 chartingOptions:(unsigned long long)a5;
+ (id)chartingRulesWithDefaultChartStyle:(long long)a0 chartStyleForTimeScopes:(id)a1 axisScalingRule:(id)a2 preferredTimeScope:(long long)a3 chartingOptions:(unsigned long long)a4;
+ (id)levelCategoryChartingRules;
+ (id)levelCategorySpanningChartingRules;
+ (id)restingAndWalkingHeartRateChartingRules;
+ (id)sleepingWristTemperatureChartingRules;
+ (id)standHourChartingRulesWithDayChartStyle:(long long)a0;
+ (id)timePeriodChartingRulesWithDayChartStyle:(long long)a0 minimumYAxisSpacingPerDay:(double)a1 startOfDayTransform:(id /* block */)a2 noDataAxisRange:(id)a3;
+ (id)walkingSteadinessChartingRules;

- (void).cxx_destruct;
- (id)allowedDecimalPrecisionRuleForUnit:(id)a0;
- (id)intervalComponentsForTimeScope:(long long)a0;
- (id)_ruleForKey:(id)a0 timeScope:(long long)a1;
- (void)_setRule:(id)a0 forKey:(id)a1 timeScope:(long long)a2;
- (double)chartPointLineWidthForTimeScope:(long long)a0;
- (double)chartPointRadiusForTimeScope:(long long)a0;
- (long long)chartStyleForTimeScope:(long long)a0;
- (id)initWithDefaultChartStyle:(long long)a0;
- (id)initWithDefaultChartStyle:(long long)a0 chartingOptions:(unsigned long long)a1;
- (BOOL)lineChartExtendFirstValueForTimeScope:(long long)a0;
- (BOOL)lineChartExtendLastValueForTimeScope:(long long)a0;
- (BOOL)lineChartFlatLastValueForTimeScope:(long long)a0;
- (BOOL)lineChartUsesPointMarkerImageForTimeScope:(long long)a0;
- (BOOL)lineChartUsesValueAxisAnnotationForTimeScope:(long long)a0;
- (void)setAllowedDecimalPrecisionRule:(id)a0 perUnitPrecisionRules:(id)a1;
- (void)setChartPointLineWidth:(double)a0 forTimeScope:(long long)a1;
- (void)setChartPointRadius:(double)a0 forTimeScope:(long long)a1;
- (void)setChartStyle:(long long)a0 forTimeScope:(long long)a1;
- (void)setIntervalComponents:(id)a0 forTimeScope:(long long)a1;
- (void)setLineChartExtendFirstValue:(BOOL)a0 forTimeScope:(long long)a1;
- (void)setLineChartExtendLastValue:(BOOL)a0 forTimeScope:(long long)a1;
- (void)setLineChartFlatLastValue:(BOOL)a0 forTimeScope:(long long)a1;
- (void)setLineChartUsesPointMarkerImage:(BOOL)a0 forTimeScope:(long long)a1;
- (void)setLineChartUsesValueAxisAnnotation:(BOOL)a0 forTimeScope:(long long)a1;

@end
