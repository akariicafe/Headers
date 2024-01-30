@class NSString, HKSleepChartPointUserInfo, NSNumber, NSDate;

@interface HKSleepDurationChartPoint : NSObject <HKChartPoint, HKSleepChartPointProducing>

@property (nonatomic) double inBedValue;
@property (nonatomic) double asleepValue;
@property (copy, nonatomic) NSDate *xValue;
@property (copy, nonatomic) NSNumber *goalValue;
@property (nonatomic) BOOL highlighted;
@property (retain, nonatomic) HKSleepChartPointUserInfo *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chartPointsForSummaries:(id)a0 context:(id)a1;

- (void).cxx_destruct;
- (id)yValue;
- (id)allYValues;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)xValueAsGenericType;
- (id)yValueForKey:(id)a0;

@end
