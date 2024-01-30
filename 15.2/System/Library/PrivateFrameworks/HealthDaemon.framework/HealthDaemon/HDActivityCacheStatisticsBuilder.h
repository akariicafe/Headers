@class NSNumber, NSString, HKQuantity;
@protocol HDActivityCacheStatisticsBuilderSourceOrderDelegate;

@interface HDActivityCacheStatisticsBuilder : NSObject {
    struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> { struct HDActivityCacheStatisticsBuilderWorkoutSample *__begin_; struct HDActivityCacheStatisticsBuilderWorkoutSample *__end_; struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> { struct HDActivityCacheStatisticsBuilderWorkoutSample *__value_; } __end_cap_; } _workouts;
    struct vector<HDActivityCacheStatisticsBuilderStandHourSample, std::allocator<HDActivityCacheStatisticsBuilderStandHourSample>> { struct HDActivityCacheStatisticsBuilderStandHourSample *__begin_; struct HDActivityCacheStatisticsBuilderStandHourSample *__end_; struct __compressed_pair<HDActivityCacheStatisticsBuilderStandHourSample *, std::allocator<HDActivityCacheStatisticsBuilderStandHourSample>> { struct HDActivityCacheStatisticsBuilderStandHourSample *__value_; } __end_cap_; } _standHourSamples;
    struct vector<HDActivityCacheActiveSource, std::allocator<HDActivityCacheActiveSource>> { struct HDActivityCacheActiveSource *__begin_; struct HDActivityCacheActiveSource *__end_; struct __compressed_pair<HDActivityCacheActiveSource *, std::allocator<HDActivityCacheActiveSource>> { struct HDActivityCacheActiveSource *__value_; } __end_cap_; } _activationLogSamples;
    HKQuantity *_lastActiveEnergyValue;
    NSNumber *_lastMoveMinuteValue;
    HKQuantity *_lastDistanceWalkingValue;
    NSNumber *_lastFlightsClimbedValue;
    NSNumber *_lastStepCountValue;
    NSNumber *_lastPushCountValue;
    NSNumber *_lastStandHourValue;
    NSNumber *_lastExerciseMinuteValue;
    double _deepBreathingDurationValue;
    struct vector<HDActivityCacheActiveSource, std::allocator<HDActivityCacheActiveSource>> { struct HDActivityCacheActiveSource *__begin_; struct HDActivityCacheActiveSource *__end_; struct __compressed_pair<HDActivityCacheActiveSource *, std::allocator<HDActivityCacheActiveSource>> { struct HDActivityCacheActiveSource *__value_; } __end_cap_; } _activeSourcesList;
    struct map<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>, std::less<_HKDataTypeCode>, std::allocator<std::pair<const _HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>>> { struct __tree<std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, std::__map_value_compare<_HKDataTypeCode, std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, std::less<_HKDataTypeCode>, true>, std::allocator<std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<_HKDataTypeCode, std::__value_type<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>, std::less<_HKDataTypeCode>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _sourceTotalsByIntervalIndexByTypeCode;
    double _builderStartTime;
    double _builderEndTime;
    NSString *_loggingName;
}

@property (nonatomic) double intervalDuration;
@property (weak, nonatomic) id<HDActivityCacheStatisticsBuilderSourceOrderDelegate> sourceOrderDelegate;

- (void)addWorkouts:(const void *)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)createMoveStatisticsWithIntervalComponents:(id)a0 calendar:(id)a1;
- (id)createMoveMinuteStatisticsWithIntervalComponents:(id)a0 calendar:(id)a1;
- (id)createExerciseStatisticsWithIntervalComponents:(id)a0 calendar:(id)a1;
- (id)createStandStatisticsWithCalendar:(id)a0;
- (id)workoutSamplesWithSourceManager:(id)a0;
- (id)activeEnergyValue;
- (long long)moveMinuteValue;
- (id)distanceWalkingValue;
- (long long)standHourValue;
- (long long)exerciseMinuteValue;
- (long long)pushCountValue;
- (long long)stepCountValue;
- (double)deepBreathingDurationValue;
- (long long)flightsClimbedValue;
- (id)initWithDateInterval:(id)a0 loggingName:(id)a1;
- (void)addActivationLogSamples:(const void *)a0;
- (void)addDeepBreathingSessionDuration:(double)a0;
- (void)addStandHourSamples:(const void *)a0;
- (void)addDeviceSamples:(const void *)a0 typeCode:(long long)a1;
- (void)addDeviceSample:(struct HDActivityCacheStatisticsBuilderSample { double x0; double x1; double x2; long long x3; })a0 typeCode:(long long)a1;
- (void)addWorkoutSample:(struct HDActivityCacheStatisticsBuilderSample { double x0; double x1; double x2; long long x3; })a0 typeCode:(long long)a1;
- (id)createStatisticsCollectionWithType:(id)a0 intervalComponents:(id)a1 calendar:(id)a2;

@end
