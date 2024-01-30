@class NSString, HKObserverSet;
@protocol HKSPSleepOnboardingStore, HKSPFeatureAvailabilityPairedDeviceRegistry;

@interface HKSPFeatureAvailabilityStore : NSObject <HKSPSleepStorePrivateObserver, HKFeatureAvailabilityProviding> {
    id<HKSPSleepOnboardingStore> _sleepStore;
    HKObserverSet *_observers;
    long long _feature;
    id<HKSPFeatureAvailabilityPairedDeviceRegistry> _pairedDeviceRegistry;
    int _deviceCharacteristicChangeNotifyToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (id)onboardedCountryCodeSupportedStateForDevice:(id)a0 error:(id *)a1;
- (void)_registerForNotifications;
- (id)canCompleteOnboardingForCountryCode:(id)a0 device:(id)a1 error:(id *)a2;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)highestOnboardingVersionCompletedWithError:(id *)a0;
- (void).cxx_destruct;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)a0;
- (void)dealloc;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (void)sleepStore:(id)a0 sleepEventRecordDidChange:(id)a1;
- (id)initWithFeatureIdentifier:(id)a0 sleepStore:(id)a1 pairedDeviceRegistry:(id)a2;
- (void)_pairedDeviceDidChange;
- (id)_currentSleepEventRecordWithError:(id *)a0;
- (BOOL)_isCurrentOnboardingVersionCompletedForSleepEventRecord:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0 sleepStore:(id)a1;
- (id)canCompleteOnboardingForCountryCode:(id)a0 error:(id *)a1;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)a0;
- (void)unregisterObserver:(id)a0;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)a0 completion:(id /* block */)a1;
- (id)isFeatureCapabilitySupportedOnDevice:(id)a0 error:(id *)a1;
- (void)resetOnboardingWithCompletion:(id /* block */)a0;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)a0;

@end
