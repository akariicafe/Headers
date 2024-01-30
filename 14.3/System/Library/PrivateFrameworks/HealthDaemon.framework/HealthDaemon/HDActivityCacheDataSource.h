@class HKWorkoutType, NSString, HKCategoryType, NSSet, _HKDelayedOperation, NSDateInterval, HDActivityCacheStatisticsBuilder, NSObject, HDActivityCacheHeartRateStatisticsBuilder, HDProfile;
@protocol OS_dispatch_queue;

@interface HDActivityCacheDataSource : NSObject <HDActivityCacheStatisticsBuilderSourceOrderDelegate, HDDataObserver> {
    struct vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > { struct HDActivityCacheStatisticsBuilderSample *__begin_; struct HDActivityCacheStatisticsBuilderSample *__end_; struct __compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > { struct HDActivityCacheStatisticsBuilderSample *__value_; } __end_cap_; } _previousWatchActivationLogEntryVector;
    BOOL _previousWatchActivationLogEntryIsSet;
    long long _quantitySampleAnchor;
    long long _nonQuantitySampleAnchor;
    NSString *_nonQuantitySamplesQueryString;
    NSString *_quantitySamplesQueryString;
    HKCategoryType *_standHoursType;
    HKCategoryType *_deepBreathingSessionType;
    HKWorkoutType *_workoutType;
    HKCategoryType *_watchActivationType;
    NSSet *_allObservedTypes;
    _HKDelayedOperation *_updateOperation;
    _HKDelayedOperation *_rebuildOperation;
    struct unordered_map<long long, bool, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { struct __hash_table<std::__1::__hash_value_type<long long, bool>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, bool>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, bool>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, bool> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, bool>, std::__1::hash<long long>, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, bool>, std::__1::equal_to<long long>, true> > { float __value_; } __p3_; } __table_; } _isWatchSourceCache;
    struct unordered_map<long long, bool, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { struct __hash_table<std::__1::__hash_value_type<long long, bool>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, bool>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, bool>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, bool> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, bool>, std::__1::hash<long long>, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, bool>, std::__1::equal_to<long long>, true> > { float __value_; } __p3_; } __table_; } _isConnectedGymSourceCache;
    struct unordered_map<long long, bool, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { struct __hash_table<std::__1::__hash_value_type<long long, bool>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, bool>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, bool>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, bool> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, bool>, std::__1::hash<long long>, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, bool>, std::__1::equal_to<long long>, true> > { float __value_; } __p3_; } __table_; } _isConnectedGymDeviceCache;
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
}

@property (readonly, nonatomic) HDActivityCacheStatisticsBuilder *targetDayStatisticsBuilder;
@property (readonly, nonatomic) HDActivityCacheStatisticsBuilder *previousDayStatisticsBuilder;
@property (readonly, nonatomic) HDActivityCacheHeartRateStatisticsBuilder *targetDayHeartRateStatisticsBuilder;
@property (readonly, nonatomic) HDActivityCacheHeartRateStatisticsBuilder *previousDayHeartRateStatisticsBuilder;
@property (readonly, nonatomic) NSSet *observedQuantityTypes;
@property (retain, nonatomic) NSDateInterval *targetDayDateInterval;
@property (retain, nonatomic) NSDateInterval *previousDayDateInterval;
@property (nonatomic) long long targetDayCacheIndex;
@property (nonatomic) long long previousDayCacheIndex;
@property (retain, nonatomic) NSString *targetDayStatisticsBuilderTag;
@property (retain, nonatomic) NSString *previousDayStatisticsBuilderTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)resumeUpdates;
- (void)dealloc;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (id).cxx_construct;
- (void)invalidate;
- (void)pauseUpdates;
- (id)initWithProfile:(id)a0 observedQuantityTypes:(id)a1 updateOperation:(id)a2 rebuildOperation:(id)a3 queue:(id)a4;
- (BOOL)updateWithError:(id *)a0;
- (void)reportTargetDayHeartRateAnalytics;
- (void)_samplesAddedToWorkoutNotification:(id)a0;
- (void)_registerForSamplesAdded;
- (void)_deregisterForSamplesAdded;
- (BOOL)_primePreviousActivationLogEntryWithError:(id *)a0;
- (BOOL)_updateStatisticsBuildersWithError:(id *)a0;
- (BOOL)_dateIntervalsAreSet;
- (BOOL)_readyToPrimeStatisticsBuilders;
- (void)_resetStatisticsBuilders;
- (BOOL)_primeNonQuantitySamplesWithError:(id *)a0 count:(long long *)a1;
- (BOOL)_primeQuantitySamplesWithError:(id *)a0 count:(long long *)a1;
- (BOOL)_readyToPrimeActivationLogEntries;
- (id)_overallDateInterval;
- (void)_resetPreviousWatchActivationLogEntries;
- (BOOL)_quantityTypeRequiresWatchSource:(long long)a0;
- (id)_parameterStringWithCount:(long long)a0;
- (id)_nonQuantitySamplesQueryStringWithSampleTypes:(id)a0;
- (long long)_isWatchSourceForSourceIdentifier:(long long)a0 error:(id *)a1;
- (BOOL)_nonQuantitySampleRequiresWatchSource:(long long)a0;
- (long long)_isConnectedGymDeviceForDeviceIdentifier:(long long)a0 error:(id *)a1;
- (id)_quantitySamplesQueryStringWithQuantityTypes:(id)a0;
- (long long)_isConnectedGymSourceForSourceIdentifier:(long long)a0 error:(id *)a1;
- (BOOL)_quantitySampleIsValidWithTypeCode:(long long)a0 workoutSourceIdentifier:(long long)a1 isWatchSource:(BOOL)a2;
- (BOOL)_typeIsValidFromCompanionWithoutWorkout:(long long)a0;
- (id)activityCacheStatisticsBuilder:(id)a0 sourceOrderForObjectType:(id)a1;
- (void)_resetEverything;

@end
