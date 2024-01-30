@class NSString, HKObserverSet;
@protocol HKSPOnboardingModel, HKSPSleepOnboardingStore, HKSPFeatureAvailabilityPairedDeviceRegistry;

@interface HKSPFeatureAvailabilityStore : NSObject <HKSPSleepStorePrivateObserver, HKFeatureAvailabilityProviding> {
    id<HKSPSleepOnboardingStore> _sleepStore;
    HKObserverSet *_observers;
    long long _feature;
    id<HKSPFeatureAvailabilityPairedDeviceRegistry> _pairedDeviceRegistry;
    int _deviceCharacteristicChangeNotifyToken;
    id<HKSPOnboardingModel> _cachedOnboardingModel;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _modelLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (void)setFeatureSettingString:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)a0;
- (void)setFeatureSettingData:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)featureAvailabilityRequirementsWithError:(id *)a0;
- (id)pairedFeatureAttributesWithError:(id *)a0;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)a0;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)a0;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)a0 countryCodeProvenance:(long long)a1 date:(id)a2 settings:(id)a3 completion:(id /* block */)a4;
- (void)setFeatureSettingNumber:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)saveOnboardingCompletion:(id)a0 settings:(id)a1 completion:(id /* block */)a2;
- (id)onboardingEligibilityForCountryCode:(id)a0 error:(id *)a1;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (void)_updateCachedOnboardingModel;
- (id)highestOnboardingVersionCompletedWithError:(id *)a0;
- (id)canCompleteOnboardingForCountryCode:(id)a0 error:(id *)a1;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)a0;
- (id)featureOnboardingRecordWithError:(id *)a0;
- (void)resetOnboardingWithCompletion:(id /* block */)a0;
- (void)removeFeatureSettingValueForKey:(id)a0 completion:(id /* block */)a1;
- (id)regionAvailabilityWithError:(id *)a0;
- (void)_registerForNotifications;
- (id)initWithFeatureIdentifier:(id)a0 sleepStore:(id)a1 pairedDeviceRegistry:(id)a2;
- (void).cxx_destruct;
- (void)_pairedDeviceDidChange;
- (id)_cachedOnboardingModelWithError:(id *)a0;
- (BOOL)_isCurrentOnboardingVersionCompletedForOnboardingModel:(id)a0;
- (void)_notifyObserversForDidUpdateOnboarding;
- (void)unregisterObserver:(id)a0;
- (void)dealloc;
- (void)_withLock:(id /* block */)a0;
- (id)initWithFeatureIdentifier:(id)a0 sleepStore:(id)a1;
- (void)sleepStore:(id)a0 sleepEventRecordDidChange:(id)a1;
- (BOOL)_lock_updatedCachedOnboardingModelWithError:(id *)a0;

@end
