@class HKHealthStore;

@interface HKSHGoalProgressEngine : NSObject {
    HKHealthStore *_healthStore;
}

+ (id)goalProgressForDaySummaries:(id)a0 inMorningIndexRange:(struct { long long x0; long long x1; })a1;
+ (double)_timeIntervalForDate:(id)a0 sinceDate:(id)a1 calendar:(id)a2;
+ (id)_firstAsleepSegment:(id)a0;
+ (id)_lastAsleepSegment:(id)a0;
+ (id)_dateComponentsForInterval:(double)a0 sinceDate:(id)a1 calendar:(id)a2;
+ (id)_computeStandardDeviationFor:(id)a0;
+ (id)goalProgressForDaySummaries:(id)a0;

- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (void)fetchGoalProgressForMorningIndexRange:(struct { long long x0; long long x1; })a0 completion:(id /* block */)a1;

@end
