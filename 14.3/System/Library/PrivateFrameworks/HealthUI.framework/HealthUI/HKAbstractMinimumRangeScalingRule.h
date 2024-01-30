@class NSDictionary, HKValueRange, NSString;

@interface HKAbstractMinimumRangeScalingRule : NSObject <HKInteractiveChartsAxisScalingRule>

@property (readonly, nonatomic) double defaultYAxisRange;
@property (nonatomic) long long portraitPrettyNumberRule;
@property (retain, nonatomic) HKValueRange *axisBounds;
@property (readonly, nonatomic) NSDictionary *axisRangeOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)portraitYValueRangeForRange:(id)a0 zoomLevel:(long long)a1 allowedDecimalPrecision:(long long)a2;
- (id)yValueRangeForRange:(id)a0 zoomLevel:(long long)a1;
- (id)yAxisBounds;
- (double)_rangeForZoomLevel:(long long)a0;

@end
