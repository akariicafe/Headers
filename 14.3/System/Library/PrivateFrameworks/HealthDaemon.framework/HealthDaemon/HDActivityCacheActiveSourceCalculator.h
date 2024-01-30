@interface HDActivityCacheActiveSourceCalculator : NSObject {
    struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { struct HDActivityCacheStatisticsBuilderWorkoutSample *__begin_; struct HDActivityCacheStatisticsBuilderWorkoutSample *__end_; struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { struct HDActivityCacheStatisticsBuilderWorkoutSample *__value_; } __end_cap_; } _workouts;
    struct vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> > { struct HDActivityCacheActiveSource *__begin_; struct HDActivityCacheActiveSource *__end_; struct __compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource> > { struct HDActivityCacheActiveSource *__value_; } __end_cap_; } _activationLogEntries;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setWorkouts:(struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { struct HDActivityCacheStatisticsBuilderWorkoutSample *x0; struct HDActivityCacheStatisticsBuilderWorkoutSample *x1; struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { struct HDActivityCacheStatisticsBuilderWorkoutSample *x0; } x2; } *)a0;
- (struct _HDActivityCacheActiveSourceCalculatorSourceEvent { double x0; long long x1; long long x2; })_baseSourceEvent;
- (void)setActivationLogEntries:(struct vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> > { struct HDActivityCacheActiveSource *x0; struct HDActivityCacheActiveSource *x1; struct __compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource> > { struct HDActivityCacheActiveSource *x0; } x2; } *)a0;
- (struct vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> > { struct HDActivityCacheActiveSource *x0; struct HDActivityCacheActiveSource *x1; struct __compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource> > { struct HDActivityCacheActiveSource *x0; } x2; })createActiveSourceLog;
- (struct HDActivityCacheActiveSource { double x0; long long x1; struct vector<long long, std::__1::allocator<long long> > { long long *x0; long long *x1; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x0; } x2; } x2; })_baseActiveSource;

@end
