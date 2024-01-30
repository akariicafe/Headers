@class NSArray, NSString, NSDate, NSNumber, HKSleepChartPointUserInfo;

@interface HKSleepPeriodChartPoint : NSObject <HKChartPoint>

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
