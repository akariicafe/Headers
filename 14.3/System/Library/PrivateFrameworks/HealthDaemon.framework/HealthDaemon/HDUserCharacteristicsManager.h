@class HKObserverSet, NSString, HDProfile, NSDictionary, NSDate, NSObject, _HKDelayedOperation;
@protocol OS_dispatch_queue, HDUserCharacteristicsProfileObserver;

@interface HDUserCharacteristicsManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDDiagnosticObject> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet<HDUserCharacteristicsProfileObserver> *_observers;
    BOOL _shouldUpdateQuantityCharacteristics;
    int _significantTimeChangeNotificationToken;
    NSDate *_userProfileLastUpdated;
    NSDictionary *_lastUserProfile;
    BOOL _needsUpdateAfterUnlock;
    _HKDelayedOperation *_updateOperation;
}

@property (copy, nonatomic) NSDate *unitTest_currentDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)didRecieveDayChangeNotification:(id)a0;
- (double)restingCaloriesFromTotalCalories:(double)a0 timeInterval:(double)a1 authorizedToRead:(BOOL)a2;
- (BOOL)setUserCharacteristic:(id)a0 forType:(id)a1 error:(id *)a2;
- (void)_queue_updateUserProfile;
- (void).cxx_destruct;
- (id)modificationDateForCharacteristicWithType:(id)a0 error:(id *)a1;
- (void)_userCharacteristicsDidChangeShouldUpdateUserProfile:(BOOL)a0 shouldSync:(BOOL)a1;
- (void)dealloc;
- (id)userCharacteristicForType:(id)a0 error:(id *)a1;
- (void)_queue_updateCharacteristicsAndUserProfile;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void)daemonReady:(id)a0;
- (void)unitTest_setUpdateOperationDelay:(double)a0;
- (id)diagnosticDescription;
- (void)addProfileObserver:(id)a0;
- (id)_getCardioFitnessMedicationsStatusWithError:(id *)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (id)_mostRecentCategorySampleOfType:(id)a0 beforeDate:(id)a1 error:(id *)a2;
- (id)_mostRecentSampleOfType:(id)a0 beforeDate:(id)a1 error:(id *)a2;
- (void)_queue_updateActivityMoveModeDefaultAndNotifyIfNecessary;
- (id)_userCharacteristicForType:(id)a0 entity:(id *)a1 error:(id *)a2;
- (id)_mostRecentQuantitySampleOfType:(id)a0 error:(id *)a1;
- (void)_queue_updateCharacteristicsAndUserProfileWithDelay;
- (id)_activityMoveModeActiveDate;
- (void)_queue_updateQuantityCharacteristics;
- (void)_unregisterTimeChangeNotifications;
- (void)_registerForTimeChangeNotifications;
- (void)removeProfileObserver:(id)a0;
- (void)_queue_updateCharacteristicsAndUserProfileIfNeeded;
- (void)_queue_updateActivityMoveModeCharacteristic;
- (BOOL)_setUserCharacteristic:(id)a0 forType:(id)a1 shouldInsertSample:(BOOL)a2 updateProfileAndSync:(BOOL)a3 error:(id *)a4;
- (void)_queue_alertObserversDidUpdateUserProfile;

@end
