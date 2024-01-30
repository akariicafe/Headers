@class NSString;
@protocol HKInteractiveChartsAxisScalingRule;

@interface HKPortraitLandscapeCompoundScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {
    id<HKInteractiveChartsAxisScalingRule> _portraitScalingRule;
    id<HKInteractiveChartsAxisScalingRule> _landscapeScalingRule;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleWithPortraitRule:(id)a0 landscapeRule:(id)a1;

- (void).cxx_destruct;
- (id)portraitYValueRangeForRange:(id)a0 zoomLevel:(long long)a1 allowedDecimalPrecision:(long long)a2;
- (id)yValueRangeForRange:(id)a0 zoomLevel:(long long)a1;

@end
