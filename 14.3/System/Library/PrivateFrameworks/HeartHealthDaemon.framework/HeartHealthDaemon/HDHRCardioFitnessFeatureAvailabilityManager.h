@class NSString, HDProfile, HDFeatureAvailabilityManager;
@protocol HDPairedDeviceCapabilityProviding, HDHRCardioFitnessPairedDeviceSupportedRegionProviding;

@interface HDHRCardioFitnessFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtension, HDHRCardioFitnessOnboardingCompletionRegionSupportedDeterminer> {
    HDProfile *_profile;
    NSString *_featureIdentifier;
    long long _currentOnboardingVersion;
    id<HDPairedDeviceCapabilityProviding> _capabilityProvider;
    id<HDHRCardioFitnessPairedDeviceSupportedRegionProviding> _supportedRegionProvider;
    HDFeatureAvailabilityManager *_manager;
}

@property (nonatomic) long long _unitTest_currentOnboardingVersionOverride;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (id)deviceForPairingID:(id)a0;
- (id)onboardedCountryCodeSupportedStateForDevice:(id)a0 error:(id *)a1;
- (id)canCompleteOnboardingForCountryCode:(id)a0 device:(id)a1 error:(id *)a2;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)highestOnboardingVersionCompletedWithError:(id *)a0;
- (void).cxx_destruct;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)a0;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (id)description;
- (id)canCompleteOnboardingForCountryCode:(id)a0 error:(id *)a1;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)a0;
- (void)unregisterObserver:(id)a0;
- (id)_onboardingCompletionsForHighestVersionWithError:(id *)a0;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)a0 completion:(id /* block */)a1;
- (id)isFeatureCapabilitySupportedOnDevice:(id)a0 error:(id *)a1;
- (void)resetOnboardingWithCompletion:(id /* block */)a0;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)a0;
- (long long)_currentOnboardingVersion;
- (id)initWithProfile:(id)a0 pairedDeviceCapabilityProvider:(id)a1 supportedRegionProvider:(id)a2;
- (BOOL)isRegionCodeSupportedOnLocalDevice:(id)a0;
- (id)isOnboardingCompletionWithRegionSupportedOnLocalAndActivePairedDevicePresentWithError:(id *)a0;
- (BOOL)pairedDeviceRegionCheckWithCountryCode:(id)a0 pairedDevice:(id)a1;
- (BOOL)localRegionCheckWithCountryCode:(id)a0;
- (BOOL)_determineIsSupportedWithOnboardingCompletions:(id)a0 regionCheckBlock:(id /* block */)a1;
- (id)_onboardedCountryCodeSupportedStateWithError:(id *)a0;
- (id)canCompleteOnboardingWhileBypassingDeviceForDemoDataPurposesWithCountryCode:(id)a0;

@end
