@class NSString, HDProfile, NSUserDefaults;
@protocol HDPairedDeviceCapabilityProviding, HDRegionAvailabilityProviding, HDFeatureAvailabilityExtension;

@interface HDHRCardioFitnessFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtension, HDHRRegionSupportedDeterminer> {
    HDProfile *_profile;
    NSString *_featureIdentifier;
    long long _currentOnboardingVersion;
    id<HDPairedDeviceCapabilityProviding> _capabilityProvider;
    id<HDRegionAvailabilityProviding> _regionAvailabilityProvider;
    id<HDFeatureAvailabilityExtension> _manager;
    NSUserDefaults *_heartRateSettingsDefaults;
}

@property (nonatomic) long long _unitTest_currentOnboardingVersionOverride;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

+ (id)makeRegionAvailabilityProviderWithProfile:(id)a0 pairedDeviceCapabilityProvider:(id)a1;

- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)a0;
- (void)resetOnboardingWithCompletion:(id /* block */)a0;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)a0;
- (id)regionAvailabilityWithError:(id *)a0;
- (void)saveOnboardingCompletion:(id)a0 settings:(id)a1 completion:(id /* block */)a2;
- (void)setFeatureSettingString:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)canCompleteOnboardingForCountryCode:(id)a0 error:(id *)a1;
- (id)featureAvailabilityRequirementsWithError:(id *)a0;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)a0;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (id)pairedFeatureAttributesWithError:(id *)a0;
- (void)setFeatureSettingData:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)setFeatureSettingNumber:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)a0 countryCodeProvenance:(long long)a1 date:(id)a2 settings:(id)a3 completion:(id /* block */)a4;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)a0;
- (void)removeFeatureSettingValueForKey:(id)a0 completion:(id /* block */)a1;
- (id)isOnboardingCompletionWithRegionSupportedOnLocalAndActivePairedDevicePresentWithError:(id *)a0;
- (BOOL)_localRegionCheckWithCountryCode:(id)a0;
- (id)_onboardedCountryCodeSupportedStateWithError:(id *)a0;
- (id)_onboardingCompletionsForHighestVersionWithError:(id *)a0;
- (long long)_currentOnboardingVersion;
- (BOOL)_determineIsSupportedWithOnboardingCompletions:(id)a0 regionCheckBlock:(id /* block */)a1;
- (id)featureOnboardingRecordWithError:(id *)a0;
- (BOOL)isRegionCodeSupportedOnLocalDevice:(id)a0;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (void)unregisterObserver:(id)a0;
- (id)canCompleteOnboardingWhileBypassingDeviceForDemoDataPurposesWithCountryCode:(id)a0;
- (id)onboardingEligibilityForCountryCode:(id)a0 error:(id *)a1;
- (id)description;
- (id)initWithProfile:(id)a0 pairedDeviceCapabilityProvider:(id)a1 regionAvailabilityProvider:(id)a2 heartRateSettingsDefaults:(id)a3 featureAvailabilityManager:(id)a4;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 pairedDeviceCapabilityProvider:(id)a1 regionAvailabilityProvider:(id)a2 heartRateSettingsDefaults:(id)a3;

@end
