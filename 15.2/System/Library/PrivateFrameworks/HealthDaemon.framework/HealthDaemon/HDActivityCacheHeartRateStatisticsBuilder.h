@class HKQuantity, NSMutableDictionary, NSDateInterval, HKHeartRateSummaryStatistics, NSDateComponents, HKHeartRateSummary, NSMutableArray;

@interface HDActivityCacheHeartRateStatisticsBuilder : NSObject {
    NSDateInterval *_dateInterval;
    long long _activityCacheIndex;
    struct vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample>> { struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *__begin_; struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *__end_; struct __compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample>> { struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *__value_; } __end_cap_; } _heartRateSamples;
    struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> { struct HDActivityCacheStatisticsBuilderWorkoutSample *__begin_; struct HDActivityCacheStatisticsBuilderWorkoutSample *__end_; struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> { struct HDActivityCacheStatisticsBuilderWorkoutSample *__value_; } __end_cap_; } _workouts;
    HKQuantity *_restingHeartRate;
    HKQuantity *_walkingAverageHeartRate;
    HKHeartRateSummaryStatistics *_allDayStatistics;
    NSMutableArray *_workoutStatistics;
    NSMutableArray *_workoutRecoveryStatistics;
    NSMutableArray *_breatheStatistics;
    NSMutableDictionary *_averageCalculatorsByWorkoutUUID;
    NSMutableDictionary *_recoveryReadingsByWorkoutUUID;
    NSMutableDictionary *_breatheSessionReadingsBySessionUUID;
    NSMutableDictionary *_breatheSessionDateIntervalBySessionUUID;
    NSDateComponents *_dateOfBirthComponents;
}

@property (readonly, nonatomic) HKHeartRateSummary *heartRateSummary;

- (void)addWorkouts:(const void *)a0;
- (void).cxx_destruct;
- (void)setDateOfBirthComponents:(id)a0;
- (id).cxx_construct;
- (id)initWithDateInterval:(id)a0 activityCacheIndex:(long long)a1;
- (void)addBreatheSessions:(const void *)a0;
- (void)addHeartRateSamples:(const void *)a0;
- (void)reportDailyAnalyticsWithProfile:(id)a0;

@end
