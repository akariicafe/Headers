@class HKActivityChartPointSummary, NSString, NSArray, HKUnit, HKActivityCache, NSDate, NSNumber;

@interface HKActivityChartPoint : NSObject <HKChartPoint> {
    NSDate *_date;
    HKActivityCache *_activityCache;
    NSArray *_workouts;
    HKUnit *_unit;
    NSNumber *_activeEnergyBurnedMinusWorkouts;
    NSNumber *_workoutActiveEnergyBurned;
    NSArray *_workoutTimes;
    HKActivityChartPointSummary *_summary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userInfo;
- (id)yValue;
- (id)maxYValue;
- (id)minYValue;
- (void).cxx_destruct;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)a0;
- (id)allYValues;
- (void)_calculateEnergyBurned;
- (void)_populateWorkoutTimes;
- (void)_createSummary;
- (id)initWithActivityCache:(id)a0 workouts:(id)a1 unit:(id)a2;

@end
