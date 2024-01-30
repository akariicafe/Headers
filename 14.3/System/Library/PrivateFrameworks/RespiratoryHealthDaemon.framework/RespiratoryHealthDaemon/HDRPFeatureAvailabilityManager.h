@class HDFeatureAvailabilityManager, NSString, HDProfile, NSDictionary, NSUUID, NSObject;
@protocol HDPairedDeviceCapabilityProviding, OS_os_log;

@interface HDRPFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtension> {
    HDProfile *_profile;
    NSString *_featureIdentifier;
    long long _currentOnboardingVersion;
    HDFeatureAvailabilityManager *_manager;
    id<HDPairedDeviceCapabilityProviding> _capabilityProvider;
    NSDictionary *_supportedCountries;
    NSUUID *_pairedDeviceCapability;
    NSObject<OS_os_log> *_loggingCategory;
    BOOL _skipHardwareCheck;
}

@property (nonatomic) long long _unitTest_currentOnboardingVersionOverride;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (id)deviceForPairingID:(id)a0;
- (id)initWithProfile:(id)a0;
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
- (id)_onboardingCompletionsForLowestVersionWithError:(id *)a0;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)a0;
- (long long)_currentOnboardingVersion;
- (void)_resetOnboarding;
- (id)initWithProfile:(id)a0 supportedCountries:(id)a1 pairedDeviceCapabilityProvider:(id)a2;
- (id)initWithProfile:(id)a0 featureIdentifier:(id)a1 currentOnboardingVersion:(long long)a2 supportedCountries:(id)a3 pairedDeviceCapability:(id)a4 loggingCategory:(id)a5 skipHardwareCheck:(BOOL)a6 pairedDeviceCapabilityProvider:(id)a7;
- (id)_watchAvailabilityForDevice:(id)a0;
- (id)_phoneAvailabilityForDevice:(id)a0;
- (long long)_isRegionCodeFound:(id)a0 availabilityWatch:(id)a1 availabilityPhone:(id)a2;
- (long long)_determineSupportedStateWithOnboardingCompletions:(id)a0 device:(id)a1;

@end
