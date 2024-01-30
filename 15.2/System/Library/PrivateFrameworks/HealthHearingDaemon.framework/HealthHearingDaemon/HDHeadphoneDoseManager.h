@class NSDate, NSString, HDDataCollectionAssertion, HDHeadphoneDoseMetadataStore, HDHeadphoneAudioExposureStatisticsCalculator, HDHeadphoneExposureNotificationCenter, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDHeadphoneDoseManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDQuantitySeriesObserver> {
    HDProfile *_profile;
    double _dose;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _enabled;
    HDHeadphoneDoseMetadataStore *_keyValueStore;
    HDHeadphoneExposureNotificationCenter *_notificationCenter;
    HDHeadphoneAudioExposureStatisticsCalculator *_statisticsCalculator;
    HDDataCollectionAssertion *_collectionAssertion;
    BOOL _lastUpdateSuppressedUserNotification;
    NSDate *_lastLockDateForAnalytics;
}

@property (copy, nonatomic) id /* block */ unitTesting_daemonDidBecomeReadyHandler;
@property (copy, nonatomic) id /* block */ unitTesting_didUpdateHandler;
@property (copy, nonatomic) id /* block */ unitTesting_didObserveProtectedDataHandler;
@property (copy, nonatomic) id /* block */ unitTesting_didNotifyUser;
@property (copy, nonatomic) id /* block */ unitTesting_protectedDataDidBecomeAvailable;
@property (readonly, nonatomic) HDHeadphoneAudioExposureStatisticsCalculator *unitTesting_calculator;
@property (readonly, nonatomic) HDHeadphoneDoseMetadataStore *unitTesting_keyValueStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (id)_initWithProfile:(id)a0 keyValueStore:(id)a1 calculator:(id)a2 unitTesting_didUpdateHandler:(id /* block */)a3;
- (id /* block */)transactionalQuantityInsertHandlerForProfile:(id)a0 journaled:(BOOL)a1 count:(long long)a2;
- (BOOL)_overrideDoseLimit:(id)a0 error:(id *)a1;
- (void)_lock_updateIsEnabledForInitialSetup:(BOOL)a0 assertion:(id)a1;
- (void)_lock_updateCollectionAssertionForDoseAccumulated:(double)a0;
- (id)_fetchDoseLimitInfoWithError:(id *)a0;
- (id)_initWithProfile:(id)a0 keyValueStore:(id)a1 calculator:(id)a2;
- (void)_registerForSignificantTimeChangeNotification;
- (void).cxx_destruct;
- (void)profile:(id)a0 didDiscardSeriesOfType:(id)a1;
- (id)_initWithProfile:(id)a0 keyValueStore:(id)a1 calculator:(id)a2 unitTesting_daemonDidBecomeReadyHandler:(id /* block */)a3 unitTesting_didObserveProtectedDataHandler:(id /* block */)a4 unitTesting_didUpdateHandler:(id /* block */)a5;
- (id)_infoWithError:(id *)a0;
- (void)_reportSyncedHeadphoneNotificationSamples:(id)a0 journaled:(BOOL)a1 nowDate:(id)a2;
- (id)_lock_pruneWithNowDate:(id)a0 limit:(unsigned long long)a1 error:(id *)a2;
- (void)_headphoneExposureNotificationsEnabledDidChange:(id)a0;
- (void)_lock_setCollectionAssertion:(id)a0;
- (void)_unregisterForSignificantTimeChangeNotification;
- (BOOL)_lock_updateCurrentDoseUsingStatisticsResult:(id)a0 assertion:(id)a1 error:(id *)a2;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)samplesJournaled:(id)a0 type:(id)a1;
- (void)_lock_updateWithNotifications:(id)a0 journaled:(BOOL)a1 assertion:(id)a2;
- (void)dealloc;
- (BOOL)_rebuildWithError:(id *)a0;
- (BOOL)_lock_rebuildWithAssertion:(id)a0 error:(id *)a1;
- (void)_handleSignificantTimeChangeNotification:(id)a0;
- (id)_pruneWithNowDate:(id)a0 limit:(unsigned long long)a1 error:(id *)a2;
- (id)_takeAccessibilityAssertion;

@end
