@class NSString, HKSleepChartPointUserInfo, NSNumber, NSDate;

@interface HKSleepDurationChartPoint : NSObject <HKChartPoint>

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

- (id)minYValue;
- (void).cxx_destruct;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)allYValues;
- (id)maxYValue;
- (id)yValue;
- (id)yValueForKey:(id)a0;

@end
