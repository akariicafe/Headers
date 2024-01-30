@class NSNumber, NSString, NSDate;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKHorizontalTimePeriodChartPoint : NSObject <HKChartPoint>

@property (retain, nonatomic) NSDate *xStart;
@property (retain, nonatomic) NSDate *xEnd;
@property (retain, nonatomic) NSNumber *yValue;
@property (retain, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)maxYValue;
- (id)minYValue;
- (void).cxx_destruct;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)a0;
- (id)allYValues;

@end
