@class NSDate, NSString, HKWorkoutType, HKCategoryType, NSSet, _HKDelayedOperation, NSDateInterval, HDActivityCacheStatisticsBuilder, NSObject, HDActivityCacheHeartRateStatisticsBuilder, HDProfile;
@protocol OS_dispatch_queue;

@interface HDActivityCacheDataSource : NSObject <HDActivityCacheStatisticsBuilderSourceDelegate, HDDataObserver> {
    struct vector<HDActivityCacheStatisticsBuilderSample, std::allocator<HDActivityCacheStatisticsBuilderSample>> { struct HDActivityCacheStatisticsBuilderSample *__begin_; struct HDActivityCacheStatisticsBuilderSample *__end_; struct __compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::allocator<HDActivityCacheStatisticsBuilderSample>> { struct HDActivityCacheStatisticsBuilderSample *__value_; } __end_cap_; } _previousWatchActivationLogEntryVector;
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
    struct unordered_map<long long, bool, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, bool>>> { struct __hash_table<std::__hash_value_type<long long, bool>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, bool>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, bool>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>, true>> { float __value_; } __p3_; } __table_; } _isWatchSourceCache;
    struct unordered_map<long long, bool, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, bool>>> { struct __hash_table<std::__hash_value_type<long long, bool>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, bool>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, bool>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>, true>> { float __value_; } __p3_; } __table_; } _isConnectedGymSourceCache;
    struct unordered_map<long long, bool, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, bool>>> { struct __hash_table<std::__hash_value_type<long long, bool>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, bool>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, bool>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, bool>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, bool>, std::hash<long long>, std::equal_to<long long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, bool>, std::equal_to<long long>, std::hash<long long>, true>> { float __value_; } __p3_; } __table_; } _isConnectedGymDeviceCache;
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
@property (retain, nonatomic) NSDate *activeDevicePairedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (id).cxx_construct;
- (void)pauseUpdates;
- (void)_samplesAddedToWorkoutNotification:(id)a0;
- (void)resumeUpdates;
- (BOOL)updateWithError:(id *)a0;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void)dealloc;
- (id)initWithProfile:(id)a0 observedQuantityTypes:(id)a1 updateOperation:(id)a2 rebuildOperation:(id)a3 queue:(id)a4;
- (id)activityCacheStatisticsBuilder:(id)a0 sourceOrderForObjectType:(id)a1;
- (void)reportTargetDayHeartRateAnalytics;
- (long long)localDeviceSourceIdentifier;
- (void)invalidate;
- (void).cxx_destruct;

@end
