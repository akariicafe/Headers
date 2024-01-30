@class NSNumber, NSString, NSDate;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKBloodGlucosePercentInRangeChartPoint : NSObject <HKChartPoint>

@property (retain, nonatomic) NSDate *midDate;
@property (retain, nonatomic) NSNumber *fractionBelowUpperLevel2HypoglycemiaBound;
@property (retain, nonatomic) NSNumber *fractionBelowUpperLevel1HypoglycemiaBound;
@property (retain, nonatomic) NSNumber *fractionBelowUpperEuglycemiaBound;
@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)yValue;
- (id)maxYValue;
- (id)minYValue;
- (void).cxx_destruct;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)a0;
- (id)allYValues;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 userInfo:(id)a2;

@end
