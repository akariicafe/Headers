@class NSDictionary, NSMutableDictionary;
@protocol HKInteractiveChartsAxisScalingRule, HKDecimalPrecisionRule;

@interface HKDisplayTypeChartingRules : NSObject {
    long long _defaultStyle;
    NSMutableDictionary *_rulesByTimeScope;
    id<HKDecimalPrecisionRule> _allowedDecimalPrecisionRule;
    NSDictionary *_perUnitDecimalPrecision;
}

@property (readonly, nonatomic) long long defaultChartStyle;
@property (nonatomic) BOOL shouldHideAverageLine;
@property (nonatomic) BOOL shouldDisplayUnitForAxisLabels;
@property (nonatomic) BOOL shouldShowInitialLollipop;
@property (retain, nonatomic) id<HKInteractiveChartsAxisScalingRule> axisScalingRule;
@property (nonatomic) BOOL shouldConnectSamplesWithLines;
@property (nonatomic) long long preferredTimeScope;
@property (nonatomic) BOOL shouldRoundYAxisDuringExpansion;

+ (BOOL)chartStyleContainsHorizontalGridlines:(long long)a0;

- (id)initWithDefaultChartStyle:(long long)a0;
- (void)setChartStyle:(long long)a0 forTimeScope:(long long)a1;
- (double)chartPointLineWidthForTimeScope:(long long)a0;
- (BOOL)lineChartExtendFirstValueForTimeScope:(long long)a0;
- (void)setAllowedDecimalPrecisionRule:(id)a0 perUnitPrecisionRules:(id)a1;
- (void)setLineChartUsesValueAxisAnnotation:(BOOL)a0 forTimeScope:(long long)a1;
- (BOOL)lineChartFlatLastValueForTimeScope:(long long)a0;
- (void)adjustedBoundsForPortraitChartWithMin:(double)a0 max:(double)a1 minOut:(double *)a2 maxOut:(double *)a3 decimalPrecision:(long long *)a4 unit:(id)a5 timeScope:(long long)a6;
- (void)_setRule:(id)a0 forKey:(id)a1 timeScope:(long long)a2;
- (id)_ruleForKey:(id)a0 timeScope:(long long)a1;
- (void)setLineChartUsesPointMarkerImage:(BOOL)a0 forTimeScope:(long long)a1;
- (void)setIntervalComponents:(id)a0 forTimeScope:(long long)a1;
- (long long)chartStyleForTimeScope:(long long)a0;
- (void).cxx_destruct;
- (id)allowedDecimalPrecisionRuleForUnit:(id)a0;
- (BOOL)lineChartUsesValueAxisAnnotationForTimeScope:(long long)a0;
- (void)setLineChartFlatLastValue:(BOOL)a0 forTimeScope:(long long)a1;
- (void)setChartPointLineWidth:(double)a0 forTimeScope:(long long)a1;
- (BOOL)lineChartExtendLastValueForTimeScope:(long long)a0;
- (BOOL)lineChartUsesPointMarkerImageForTimeScope:(long long)a0;
- (void)setChartPointRadius:(double)a0 forTimeScope:(long long)a1;
- (double)chartPointRadiusForTimeScope:(long long)a0;
- (id)intervalComponentsForTimeScope:(long long)a0;
- (void)setLineChartExtendLastValue:(BOOL)a0 forTimeScope:(long long)a1;
- (void)setLineChartExtendFirstValue:(BOOL)a0 forTimeScope:(long long)a1;

@end
