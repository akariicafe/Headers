@class NSNumber, NSString, NSDate;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKHandwashingEventChartPoint : NSObject <HKChartPoint>

@property (retain, nonatomic) NSDate *midDate;
@property (retain, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSNumber *averageDuration;
@property (nonatomic) BOOL meetsGoal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)minYValue;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)allYValues;
- (id)maxYValue;
- (id)yValue;
- (id)yValueForKey:(id)a0;

@end
