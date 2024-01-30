@class HKQuantity, NSMutableDictionary, NSDateInterval, HKHeartRateSummaryStatistics, NSDateComponents, HKHeartRateSummary, NSMutableArray;

@interface HDActivityCacheHeartRateStatisticsBuilder : NSObject {
    NSDateInterval *_dateInterval;
    long long _activityCacheIndex;
    struct vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > { struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *__begin_; struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *__end_; struct __compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > { struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *__value_; } __end_cap_; } _heartRateSamples;
    struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { struct HDActivityCacheStatisticsBuilderWorkoutSample *__begin_; struct HDActivityCacheStatisticsBuilderWorkoutSample *__end_; struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { struct HDActivityCacheStatisticsBuilderWorkoutSample *__value_; } __end_cap_; } _workouts;
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

- (void).cxx_destruct;
- (id)heartRateDateInterval;
- (id)walkingAverageHeartRate;
- (id).cxx_construct;
- (void)addWorkouts:(const struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { struct HDActivityCacheStatisticsBuilderWorkoutSample *x0; struct HDActivityCacheStatisticsBuilderWorkoutSample *x1; struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { struct HDActivityCacheStatisticsBuilderWorkoutSample *x0; } x2; } *)a0;
- (void)setDateOfBirthComponents:(id)a0;
- (id)initWithDateInterval:(id)a0 activityCacheIndex:(long long)a1;
- (void)addBreatheSessions:(const struct vector<HDActivityCacheStatisticsBuilderBreatheSample, std::__1::allocator<HDActivityCacheStatisticsBuilderBreatheSample> > { struct HDActivityCacheStatisticsBuilderBreatheSample *x0; struct HDActivityCacheStatisticsBuilderBreatheSample *x1; struct __compressed_pair<HDActivityCacheStatisticsBuilderBreatheSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderBreatheSample> > { struct HDActivityCacheStatisticsBuilderBreatheSample *x0; } x2; } *)a0;
- (void)addHeartRateSamples:(const struct vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > { struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *x0; struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *x1; struct __compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > { struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *x0; } x2; } *)a0;
- (void)reportDailyAnalyticsWithProfile:(id)a0;
- (id)calcRestingHeartRateWithMinReadings:(int)a0 readingsCount:(int *)a1 filteredReadingsCount:(int *)a2;
- (void)_addHeartRateSamplesToAllStatistics:(const struct vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > { struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *x0; struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *x1; struct __compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > { struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *x0; } x2; } *)a0;
- (void)_addHeartRateSamples:(const struct vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > { struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *x0; struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *x1; struct __compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > { struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *x0; } x2; } *)a0 toStatistics:(id)a1;
- (void)_addBeatsPerSecond:(double)a0 time:(double)a1 toSessionStatistics:(id)a2;
- (void)_updateMetricsForSessionStatistics:(id)a0;
- (id)_averageCalculatorForWorkoutStatistics:(id)a0;
- (id)_recoveryReadingsForWorkoutStatistics:(id)a0;
- (id)_sessionReadingsForBreatheStatistics:(id)a0;
- (void)_updateMetricsForWorkoutStatistics:(id)a0;
- (void)_updateMetricsForWorkoutRecoveryStatistics:(id)a0;
- (void)_updateMetricsForBreatheStatistics:(id)a0;
- (void)_addHeartRateStatisticsForNewWorkouts:(const struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { struct HDActivityCacheStatisticsBuilderWorkoutSample *x0; struct HDActivityCacheStatisticsBuilderWorkoutSample *x1; struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { struct HDActivityCacheStatisticsBuilderWorkoutSample *x0; } x2; } *)a0;
- (id)_filteredRecoveryReadings:(id)a0;

@end
