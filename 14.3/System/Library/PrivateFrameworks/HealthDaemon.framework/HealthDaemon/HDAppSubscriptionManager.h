@class NSString, NSMutableDictionary, HDProfile, HDBackgroundTaskScheduler, HDAppAssertionManager, NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface HDAppSubscriptionManager : NSObject <HDDatabaseProtectedDataObserver>

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDAppAssertionManager *appAssertionManager;
@property (retain, nonatomic) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *launchQueue;
@property (retain, nonatomic) NSMutableDictionary *pendingTypeCodesToAnchors;
@property (retain, nonatomic) NSMutableSet *pendingFirstLaunchBundleIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *launchTimers;
@property (retain, nonatomic) NSMutableDictionary *launchTimerLaunchTimes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *launchTimerQueue;
@property (nonatomic) int backgroundAppRefreshNotifyToken;
@property (nonatomic) BOOL shouldScheduleLaunches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)_removeBundleID:(id)a0;
- (void)removeSubscriptionForBundleID:(id)a0 dataCode:(long long)a1;
- (id)init;
- (void)removeBundleID:(id)a0;
- (void).cxx_destruct;
- (void)updateBundleID:(id)a0 dataCode:(long long)a1 launchTime:(id)a2;
- (void)_backgroundTaskFiredWithName:(id)a0;
- (void)_removeLaunchForSubscription:(id)a0 anchor:(id)a1;
- (void)dealloc;
- (void)_removeSubscriptionForBundleID:(id)a0 dataCode:(long long)a1 anchor:(id)a2;
- (void)_queue_scheduleLaunches:(long long)a0 anchor:(id)a1;
- (void)_applicationsInstalled:(id)a0;
- (void)_queue_subscribeForBundleID:(id)a0 dataCode:(long long)a1 frequencyInSeconds:(unsigned long long)a2;
- (void)_queue_updateBundleID:(id)a0 dataCode:(long long)a1 launchTime:(id)a2;
- (BOOL)areSubscriptionsSupportedForDataTypeCode:(long long)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (id)_appSubscriptionsForDataTypeCode:(long long)a0 lastAppLaunchTimes:(id)a1 error:(id *)a2;
- (void)ackForBundleID:(id)a0 dataCode:(long long)a1 anchor:(id)a2 ackTime:(id)a3;
- (id)_activityNameForSubscription:(id)a0 anchor:(id)a1;
- (void)_launchTimerFired:(id)a0 code:(id)a1 anchor:(id)a2;
- (void)_queue_launchSubscription:(id)a0 anchor:(id)a1;
- (id)_queue_subscriptionForActivityName:(id)a0 anchor:(id *)a1;
- (void)unitTesting_synchronizeWithQueue;
- (void)_queue_scheduleLaunchForSubscription:(id)a0 anchor:(id)a1;
- (BOOL)_shouldDoAFirstLaunchForBundleIdentifier:(id)a0;
- (void)setAnchor:(id)a0 forDataCode:(long long)a1;
- (void)subscribeForBundleID:(id)a0 dataCode:(long long)a1 frequencyInSeconds:(unsigned long long)a2;
- (void)_queue_ackForBundleID:(id)a0 dataCode:(long long)a1 anchor:(id)a2 ackTime:(id)a3;

@end
