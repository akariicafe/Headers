@class NSObject, NSString, NSMutableDictionary, NSMutableSet, HDProfile, HDBackgroundAppLauncher, HDBackgroundTaskScheduler;
@protocol OS_dispatch_queue;

@interface HDAppSubscriptionManager : NSObject <HDDatabaseProtectedDataObserver, HDProfileReadyObserver> {
    NSMutableSet *_observedDataTypeCodes;
    NSMutableDictionary *_outstandingLaunchesByBundleIdentifier;
    BOOL _shouldScheduleLaunches;
    int _backgroundAppRefreshNotifyToken;
    HDProfile *_profile;
    HDBackgroundAppLauncher *_backgroundAppLauncher;
    HDBackgroundTaskScheduler *_backgroundTaskScheduler;
    NSObject<OS_dispatch_queue> *_launchQueue;
    NSMutableDictionary *_pendingTypeCodesToAnchors;
    NSMutableDictionary *_launchTimers;
    NSMutableDictionary *_launchTimerLaunchTimes;
}

@property (copy, nonatomic) id /* block */ unitTesting_backgroundAppRefreshStatusGenerator;
@property (copy, nonatomic) id /* block */ unitTesting_launchEventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (BOOL)areSubscriptionsSupportedForDataTypeCode:(long long)a0;
- (void)profileDidBecomeReady:(id)a0;
- (BOOL)unitTesting_isAwaitingLaunchForBundleID:(id)a0 anchor:(id)a1 dataTypeCode:(long long)a2;
- (void)removeBundleID:(id)a0;
- (BOOL)unitTesting_isObservingDataTypeCode:(long long)a0;
- (void)setAnchor:(id)a0 forDataCode:(long long)a1;
- (void)subscribeForBundleID:(id)a0 dataCode:(long long)a1 frequencyInSeconds:(unsigned long long)a2 appSDKVersion:(unsigned int)a3;
- (void).cxx_destruct;
- (id)init;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)ackForBundleID:(id)a0 dataTypes:(id)a1 anchor:(id)a2 ackTime:(id)a3;
- (void)_isBackgroundAppRefreshDisabledForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)unitTesting_synchronizeWithQueue;
- (void)removeSubscriptionForBundleID:(id)a0 dataCode:(long long)a1;

@end
