@class NSString, HKHealthChartPoint, NSDate;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKBloodPressureChartPoint : NSObject <HKChartPoint>

@property (retain, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (retain, nonatomic) HKHealthChartPoint *systolicChartPoint;
@property (retain, nonatomic) HKHealthChartPoint *diastolicChartPoint;
@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)minYValue;
- (void).cxx_destruct;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)allYValues;
- (id)maxYValue;
- (id)yValue;
- (id)yValueForKey:(id)a0;
- (void)setChartPoint:(id)a0 forType:(id)a1;

@end
