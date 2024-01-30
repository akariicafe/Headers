@class NSDictionary, HKValueRange, NSString;

@interface HKAbstractFixedAxisScalingRule : NSObject <HKInteractiveChartsAxisScalingRule>

@property (nonatomic) BOOL shouldExpandBoundsForOutliers;
@property (nonatomic) long long portraitPrettyNumberRule;
@property (readonly, nonatomic) HKValueRange *defaultAxisBounds;
@property (readonly, nonatomic) NSDictionary *axisBoundsOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)portraitYValueRangeForRange:(id)a0 zoomLevel:(long long)a1 allowedDecimalPrecision:(long long)a2;
- (id)yValueRangeForRange:(id)a0 zoomLevel:(long long)a1;
- (id)_valueRangeForZoomLevel:(long long)a0;

@end
