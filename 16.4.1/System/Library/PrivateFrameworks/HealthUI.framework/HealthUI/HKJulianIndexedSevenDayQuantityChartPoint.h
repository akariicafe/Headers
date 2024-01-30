@class NSNumber, NSString, NSDate;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKJulianIndexedSevenDayQuantityChartPoint : NSObject <HKChartPoint>

@property (retain, nonatomic) NSDate *xStart;
@property (retain, nonatomic) NSDate *xEnd;
@property (retain, nonatomic) NSNumber *yValue;
@property (retain, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)allYValues;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)xValueAsGenericType;
- (id)yValueForKey:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 displayType:(id)a2 unit:(id)a3 quantity:(id)a4;

@end
