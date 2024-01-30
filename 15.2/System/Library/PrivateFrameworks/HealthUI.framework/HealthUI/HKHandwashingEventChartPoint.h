@class NSNumber, NSString, NSDate;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKHandwashingEventChartPoint : NSObject <HKChartPoint>

@property (retain, nonatomic) NSDate *midDate;
@property (retain, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSNumber *averageDuration;
@property (nonatomic) BOOL meetsGoal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)yValue;
- (id)maxYValue;
- (id)minYValue;
- (void).cxx_destruct;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)a0;
- (id)allYValues;

@end
