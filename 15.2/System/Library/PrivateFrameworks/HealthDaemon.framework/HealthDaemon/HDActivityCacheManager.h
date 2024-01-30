@class NSMutableDictionary, HDProfile, NSDate, HKQuantityType, NSObject, HKCategorySample, NSTimeZone, HDActivityCacheDataSource, NSCalendar, NSString, NSSet, _HKDelayedOperation, NSHashTable, NSDateInterval, HKActivityCache, HDSourceEntity, HKCategoryType, HKHeartRateSummary;
@protocol OS_dispatch_queue;

@interface HDActivityCacheManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, HDDatabaseProtectedDataObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    long long _todayActivityCacheIndex;
    long long _yesterdayActivityCacheIndex;
    long long _tomorrowActivityCacheIndex;
    BOOL _cacheIndicesAreSet;
    NSTimeZone *_currentTimeZone;
    NSDateInterval *_todayDateInterval;
    NSDateInterval *_yesterdayDateInterval;
    BOOL _existingActivityCachesAreSet;
    HKActivityCache *_existingYesterdayActivityCache;
    HKActivityCache *_existingTodayActivityCache;
    HKHeartRateSummary *_todayHeartRateSummary;
    HKHeartRateSummary *_yesterdayHeartRateSummary;
    HDSourceEntity *_localDeviceSourceEntity;
    HDActivityCacheDataSource *_dataSource;
    HKQuantityType *_calorieGoalType;
    HKQuantityType *_moveMinuteGoalType;
    HKQuantityType *_exerciseGoalType;
    HKQuantityType *_standGoalType;
    NSSet *_allQuantityTypes;
    NSMutableDictionary *_goalsByIndex;
    HKCategoryType *_activityMoveModeChangeType;
    HKCategorySample *_todayActivityMoveModeChangeSample;
    HKCategorySample *_yesterdayActivityMoveModeChangeSample;
    BOOL _activityMoveModeIsSet;
    _HKDelayedOperation *_updateCachesOperation;
    _HKDelayedOperation *_rebuildCachesOperation;
    NSHashTable *_observers;
    BOOL _hasSubscribedToSignificantTimeChangeNotifications;
    long long _wheelchairUse;
    int _rebuildCacheNotificationToken;
}

@property (retain, nonatomic) NSDate *dateOverride;
@property (retain, nonatomic) NSTimeZone *timeZoneOverride;
@property (readonly) NSCalendar *calendar;
@property (readonly, nonatomic) HKActivityCache *currentActivityCache;
@property (readonly, nonatomic) HKActivityCache *yesterdayActivityCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void).cxx_destruct;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)dealloc;
- (void)_userCharacteristicsDidChangeNotification:(id)a0;
- (void)addActivityCacheObserver:(id)a0;
- (void)removeActivityCacheObserver:(id)a0;
- (void)_didReceiveSignificantTimeChangeNotification;
- (void)setCurrentActivityCacheOverrideDate:(id)a0 timeZone:(id)a1 completion:(id /* block */)a2;
- (void)accessStatisticsBuilderWithCacheIndex:(long long)a0 handler:(id /* block */)a1;

@end
