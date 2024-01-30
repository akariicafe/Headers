@class NSString;

@interface HKHistogramChartData : NSObject <HKGraphSeriesChartData>

@property (readonly, nonatomic) double xValue;
@property (readonly, nonatomic) double yValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXValue:(double)a0 yValue:(double)a1;

@end
