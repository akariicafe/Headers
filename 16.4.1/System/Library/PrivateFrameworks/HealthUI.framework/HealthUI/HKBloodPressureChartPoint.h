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

- (void).cxx_destruct;
- (id)yValue;
- (id)allYValues;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)xValueAsGenericType;
- (id)yValueForKey:(id)a0;
- (void)setChartPoint:(id)a0 forType:(id)a1;

@end
