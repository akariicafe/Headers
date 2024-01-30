@class NSString, NSDictionary, NSNumber, HKValueRange;

@interface HKAbstractMinimumRangeScalingRule : NSObject <HKInteractiveChartsAxisScalingRule>

@property (readonly, nonatomic) double defaultYAxisRange;
@property (retain, nonatomic) HKValueRange *axisBounds;
@property (readonly, nonatomic) NSNumber *anchorValue;
@property (readonly, nonatomic) NSDictionary *axisRangeOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (double)_rangeForZoomLevel:(long long)a0;
- (id)noDataStartingRange;
- (id)yAxisBounds;
- (id)yValueRangeForRange:(id)a0 zoomLevel:(long long)a1;

@end
