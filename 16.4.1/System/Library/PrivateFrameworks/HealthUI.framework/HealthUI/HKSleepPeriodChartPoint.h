@class NSArray, NSString, NSDate, NSNumber, HKSleepChartPointUserInfo;

@interface HKSleepPeriodChartPoint : NSObject <HKChartPoint, HKSleepChartPointProducing>

@property (retain, nonatomic) NSArray *asleepOffsets;
@property (retain, nonatomic) NSArray *inBedOffsets;
@property (copy, nonatomic) NSDate *xValue;
@property (copy, nonatomic) NSNumber *upperGoal;
@property (copy, nonatomic) NSNumber *lowerGoal;
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
