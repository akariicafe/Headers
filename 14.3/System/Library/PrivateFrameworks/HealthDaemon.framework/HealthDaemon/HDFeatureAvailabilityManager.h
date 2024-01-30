@class HKObserverSet, NSString, HDProfile, NSUUID, NSSet, NSObject;
@protocol OS_os_log, HDPairedDeviceCapabilityProviding, OS_dispatch_queue;

@interface HDFeatureAvailabilityManager : NSObject <HDOnboardingCompletionManagerObserver, HDPairedDeviceCapabilityProvidingDelegate, HDFeatureAvailabilityExtension> {
    HDProfile *_profile;
    NSObject<OS_os_log> *_loggingCategory;
    long long _currentOnboardingVersion;
    NSUUID *_pairedDeviceCapability;
    id<HDPairedDeviceCapabilityProviding> _pairedDeviceCapabilityProvider;
    HKObserverSet *_observers;
    NSSet *_allowedCountryCodes;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (id)deviceForPairingID:(id)a0;
- (id)onboardedCountryCodeSupportedStateForDevice:(id)a0 error:(id *)a1;
- (id)canCompleteOnboardingForCountryCode:(id)a0 device:(id)a1 error:(id *)a2;
- (id)initWithProfile:(id)a0 featureIdentifier:(id)a1 currentOnboardingVersion:(long long)a2 pairedDeviceCapability:(id)a3 allowedCountryCodes:(id)a4 loggingCategory:(id)a5 pairedDeviceCapabilityProvider:(id)a6;
- (void)unitTest_updateAllowedCountryCodes:(id)a0;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)highestOnboardingVersionCompletedWithError:(id *)a0;
- (void).cxx_destruct;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)a0;
- (id)initWithProfile:(id)a0 featureIdentifier:(id)a1 currentOnboardingVersion:(long long)a2 allowedCountryCodes:(id)a3 loggingCategory:(id)a4;
- (BOOL)_canCompleteOnboardingForCountryCode:(id)a0;
- (id)initWithProfile:(id)a0 featureIdentifier:(id)a1 currentOnboardingVersion:(long long)a2 allowedCountryCodes:(id)a3 pairedDeviceCapability:(id)a4 loggingCategory:(id)a5;
- (void)dealloc;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (void)pairedDeviceCapabilitiesDidUpdate:(id)a0;
- (id)initWithProfile:(id)a0 featureIdentifier:(id)a1 currentOnboardingVersion:(long long)a2 pairedDeviceCapability:(id)a3 loggingCategory:(id)a4;
- (id)description;
- (id)canCompleteOnboardingForCountryCode:(id)a0 error:(id *)a1;
- (void)onboardingCompletionManager:(id)a0 didUpdateOnboardingCompletionsForFeatureIdentifier:(id)a1;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)a0;
- (void)unregisterObserver:(id)a0;
- (id)_onboardingCompletionsForHighestVersionWithError:(id *)a0;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)a0 completion:(id /* block */)a1;
- (id)initWithProfile:(id)a0 featureIdentifier:(id)a1 currentOnboardingVersion:(long long)a2 loggingCategory:(id)a3;
- (id)isFeatureCapabilitySupportedOnDevice:(id)a0 error:(id *)a1;
- (void)resetOnboardingWithCompletion:(id /* block */)a0;
- (id)_onboardingCompletionsForLowestVersionWithError:(id *)a0;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)a0;

@end
