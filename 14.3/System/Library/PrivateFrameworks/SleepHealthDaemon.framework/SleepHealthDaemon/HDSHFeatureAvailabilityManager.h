@class HKObserverSet, NSString, HDFeatureAvailabilityManager, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface HDSHFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtensionObserver, HKSPSleepStorePrivateObserver, HDFeatureAvailabilityExtension> {
    id /* block */ _sleepStoreProvider;
    long long _currentOnboardingVersion;
    HKObserverSet *_observers;
    HDFeatureAvailabilityManager *_manager;
    BOOL _needsMigration;
    NSString *_observedDefaultsKey;
    NSUserDefaults *_sleepDaemonDefaults;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (id)deviceForPairingID:(id)a0;
- (id)onboardedCountryCodeSupportedStateForDevice:(id)a0 error:(id *)a1;
- (id)canCompleteOnboardingForCountryCode:(id)a0 device:(id)a1 error:(id *)a2;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (id)highestOnboardingVersionCompletedWithError:(id *)a0;
- (void).cxx_destruct;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)a0;
- (void)dealloc;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (id)_currentSleepEventRecordWithError:(id *)a0;
- (id)canCompleteOnboardingForCountryCode:(id)a0 error:(id *)a1;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)a0;
- (void)unregisterObserver:(id)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)a0 completion:(id /* block */)a1;
- (id)isFeatureCapabilitySupportedOnDevice:(id)a0 error:(id *)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)resetOnboardingWithCompletion:(id /* block */)a0;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)a0;
- (void)_unregisterForSleepUserDefaultsChanges;
- (void)_sleepUserDefaultsDidChangeForKey:(id)a0;
- (id)_currentSleepEventRecordWithSleepStore:(id)a0 error:(id *)a1;
- (id)_migrateOnboardingIfNeededAndReturnCompletedVersion;
- (void)_saveOnboardingCompletedVersion:(long long)a0 completion:(id /* block */)a1;
- (id)_migrateOnboardingAndReturnCompletedVersion;
- (void)_registerForSleepUserDefaultsChangesIfNecessary;
- (void)_notifyObserversForOnboardingCompletedVersionChange;
- (id)initWithProfile:(id)a0 sleepStoreProvider:(id /* block */)a1 featureIdentifier:(id)a2 currentOnboardingVersion:(long long)a3;
- (void)unitTest_notifyObserversForOnboardingCompletedVersionChange;

@end
