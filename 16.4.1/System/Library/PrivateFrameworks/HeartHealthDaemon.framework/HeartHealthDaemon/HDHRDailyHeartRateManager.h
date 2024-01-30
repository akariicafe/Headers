@class HDActivityCacheManager, NSString, HDProfile, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HDHRDailyHeartRateManager : NSObject <HDHealthDaemonReadyObserver, HDActivityCacheManagerObserver> {
    HDProfile *_profile;
    HDActivityCacheManager *_activityCacheManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_restingHeartRateByActivityCacheIndex;
    NSMutableDictionary *_walkingAverageHeartRateByActivityCacheIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)activityCacheManager:(id)a0 changedHeartRateSummary:(id)a1 isToday:(BOOL)a2;
- (void)activityCacheManager:(id)a0 changedTodayActivityCache:(id)a1;
- (void)_queue_cleanupValuesForTodayCacheIndex:(long long)a0 yesterdayCacheIndex:(long long)a1;
- (void)_queue_deleteHeartRateOfType:(id)a0 forCacheIndex:(long long)a1 replacementUUID:(id)a2;
- (void)_queue_replaceHeartRate:(id)a0 ofType:(id)a1 forCacheIndex:(long long)a2 dateInterval:(id)a3 heartRateByCacheIndex:(id)a4;

@end
