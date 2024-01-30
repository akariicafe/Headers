@class NSDate, NSString, HKObserverSet, _HKDelayedOperation, NSDictionary, HDProfile, NSObject, NSNumber;
@protocol OS_dispatch_queue, HDUserCharacteristicsProfileObserver;

@interface HDUserCharacteristicsManager : NSObject <HDProfileReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDDiagnosticObject, HDNanoSyncManagerObserver, HDCloudSyncManagerObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet<HDUserCharacteristicsProfileObserver> *_observers;
    BOOL _shouldUpdateQuantityCharacteristics;
    int _significantTimeChangeNotificationToken;
    NSDate *_userProfileLastUpdated;
    NSDictionary *_lastUserProfile;
    BOOL _needsUpdateAfterUnlock;
    NSNumber *_hasWatchOnAccount;
    BOOL _isCloudSyncEnabled;
    _HKDelayedOperation *_updateOperation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (id)initWithProfile:(id)a0;
- (id)diagnosticDescription;
- (BOOL)setUserCharacteristic:(id)a0 forType:(id)a1 error:(id *)a2;
- (void)unitTest_updateCharacteristicsAndUserProfileWithDate:(id)a0 completion:(id /* block */)a1;
- (double)restingCaloriesFromTotalCalories:(double)a0 timeInterval:(double)a1 authorizedToRead:(BOOL)a2;
- (void)cloudSyncManager:(id)a0 didUpdateRestoreCompletionDate:(id)a1;
- (void)didReceiveAuthKitDeviceListChangeNotification:(id)a0;
- (id)userCharacteristicForType:(id)a0 error:(id *)a1;
- (void)cloudSyncManager:(id)a0 didUpdateSyncEnabled:(BOOL)a1;
- (void)cloudSyncManager:(id)a0 didUpdateLastPulledUpdateDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateErrorRequiringUserAction:(id)a1;
- (id)modificationDateForCharacteristicWithType:(id)a0 error:(id *)a1;
- (void)cloudSyncManager:(id)a0 didUpdateLastPullDate:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateLastPushDate:(id)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void)dealloc;
- (void)didReceiveDayChangeNotification:(id)a0;
- (void)nanoSyncManager:(id)a0 pairedDevicesChanged:(id)a1;
- (void)cloudSyncManager:(id)a0 didUpdateDataUploadRequestStatus:(long long)a1 startDate:(id)a2 endDate:(id)a3;
- (BOOL)_setUserCharacteristic:(id)a0 forType:(id)a1 shouldInsertSample:(BOOL)a2 updateProfileAndSync:(BOOL)a3 error:(id *)a4;
- (void)removeProfileObserver:(id)a0;
- (void)addProfileObserver:(id)a0;
- (void).cxx_destruct;

@end
