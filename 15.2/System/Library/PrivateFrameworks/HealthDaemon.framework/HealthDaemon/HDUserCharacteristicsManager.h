@class HKObserverSet, NSString, HDProfile, NSDictionary, NSDate, NSObject, _HKDelayedOperation;
@protocol OS_dispatch_queue, HDUserCharacteristicsProfileObserver;

@interface HDUserCharacteristicsManager : NSObject <HDProfileReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDDiagnosticObject> {
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

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)a0;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void)removeProfileObserver:(id)a0;
- (id)userCharacteristicForType:(id)a0 error:(id *)a1;
- (void)didRecieveDayChangeNotification:(id)a0;
- (void)profileDidBecomeReady:(id)a0;
- (id)modificationDateForCharacteristicWithType:(id)a0 error:(id *)a1;
- (void)unitTest_updateCharacteristicsAndUserProfileWithDate:(id)a0 completion:(id /* block */)a1;
- (void)addProfileObserver:(id)a0;
- (void).cxx_destruct;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (double)restingCaloriesFromTotalCalories:(double)a0 timeInterval:(double)a1 authorizedToRead:(BOOL)a2;
- (BOOL)setUserCharacteristic:(id)a0 forType:(id)a1 error:(id *)a2;
- (void)dealloc;

@end
