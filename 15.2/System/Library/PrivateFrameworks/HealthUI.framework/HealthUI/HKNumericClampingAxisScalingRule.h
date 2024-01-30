@class NSString, NSArray;

@interface HKNumericClampingAxisScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {
    NSArray *_chartBoundsRuleChoices;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleWithChartBoundsRuleChoices:(id)a0;

- (void).cxx_destruct;
- (id)portraitYValueRangeForRange:(id)a0 zoomLevel:(long long)a1 allowedDecimalPrecision:(long long)a2;
- (id)yValueRangeForRange:(id)a0 zoomLevel:(long long)a1;

@end
