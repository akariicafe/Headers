@class NSString, NSDictionary, NSNumber, HKValueRange;

@interface HKAbstractFixedAxisScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}

@property (nonatomic) BOOL shouldExpandBoundsForOutliers;
@property (nonatomic) long long portraitPrettyNumberRule;
@property (readonly, nonatomic) HKValueRange *defaultAxisBounds;
@property (readonly, nonatomic) NSDictionary *axisBoundsOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)portraitYValueRangeForRange:(id)a0 zoomLevel:(long long)a1 allowedDecimalPrecision:(long long)a2;
- (id)yValueRangeForRange:(id)a0 zoomLevel:(long long)a1;
- (id)yAxisBounds;
- (id)_valueRangeForZoomLevel:(long long)a0;

@end
