@class NSNumber, NSDateComponents, HKQuantity;

@interface HKSHGoalProgress : NSObject

@property (readonly, copy, nonatomic) NSNumber *standardDeviationActualTimeAsleep;
@property (readonly, copy, nonatomic) NSNumber *standardDeviationScheduledTimeAsleep;
@property (readonly, copy, nonatomic) NSNumber *standardDeviationActualVsScheduledTimeAsleep;
@property (readonly, nonatomic) struct { long long start; long long duration; } morningIndexRange;
@property (readonly, nonatomic) long long sleepAnalysisAsleepCount;
@property (readonly, nonatomic) long long sleepAnalysisInBedCount;
@property (readonly, nonatomic) long long sleepAnalysisCount;
@property (readonly, copy, nonatomic) HKQuantity *averageSleepDuration;
@property (readonly, copy, nonatomic) HKQuantity *averageInBedDuration;
@property (readonly, nonatomic) long long bedtimeAchievedCount;
@property (readonly, nonatomic) long long sleepDurationGoalAchievedCount;
@property (readonly, nonatomic) long long sleepDurationGoalStreakCount;
@property (readonly, copy, nonatomic) HKQuantity *averageBedtimeMiss;
@property (readonly, copy, nonatomic) HKQuantity *averageSleepDurationGoalMiss;
@property (readonly, copy, nonatomic) NSDateComponents *averageBedtime;
@property (readonly, copy, nonatomic) NSDateComponents *averageWakeTime;
@property (readonly, copy, nonatomic) NSDateComponents *averageSleepStartTime;
@property (readonly, copy, nonatomic) NSDateComponents *averageSleepEndTime;

+ (id)goalProgressWithMorningIndexRange:(struct { long long x0; long long x1; })a0 sleepAnalysisAsleepCount:(long long)a1 sleepAnalysisInBedCount:(long long)a2 sleepAnalysisCount:(long long)a3 averageSleepDuration:(id)a4 averageInBedDuration:(id)a5 bedtimeAchievedCount:(long long)a6 sleepDurationGoalAchievedCount:(long long)a7 sleepDurationGoalStreakCount:(long long)a8 averageBedtimeMiss:(id)a9 averageSleepDurationGoalMiss:(id)a10 averageBedtime:(id)a11 averageWakeTime:(id)a12 averageSleepStartTime:(id)a13 averageSleepEndTime:(id)a14 standardDeviationActualTimeAsleep:(id)a15 standardDeviationScheduledTimeAsleep:(id)a16 standardDeviationActualVsScheduledTimeAsleep:(id)a17;

- (void).cxx_destruct;

@end
