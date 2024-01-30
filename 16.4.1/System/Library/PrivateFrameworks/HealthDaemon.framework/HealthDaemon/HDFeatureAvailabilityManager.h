@class HKFeatureAvailabilityRequirementSet, NSString, HDProfile, NSUUID, HKObserverSet, NSObject, HDFeatureAvailabilityOnboardingEligibilityDeterminer;
@protocol HDPairedFeatureAttributesProviding, OS_os_log, HDFeatureDisableAndExpiryProviding, HDFeatureSettingsValidating, HDRegionAvailabilityProviding, OS_dispatch_queue, HDPairedDeviceCapabilityProviding;

@interface HDFeatureAvailabilityManager : NSObject <HDFeatureSettingsManagerObserver, HDOnboardingCompletionManagerObserver, HDPairedDeviceCapabilityProvidingDelegate, HDRegionAvailabilityProvidingDelegate, HDFeatureDisableAndExpiryProvidingDelegate, HDFeatureAvailabilityExtension> {
    HDProfile *_profile;
    NSObject<OS_os_log> *_loggingCategory;
    NSUUID *_pairedDeviceCapability;
    id<HDPairedDeviceCapabilityProviding> _pairedDeviceCapabilityProvider;
    id<HDPairedFeatureAttributesProviding> _pairedFeatureAttributesProvider;
    id<HDRegionAvailabilityProviding> _regionAvailabilityProvider;
    id<HDFeatureDisableAndExpiryProviding> _disableAndExpiryProvider;
    id<HDFeatureSettingsValidating> _featureSettingsAtOnboardingTimeValidator;
    HDFeatureAvailabilityOnboardingEligibilityDeterminer *_onboardingEligibilityDeterminer;
    HKFeatureAvailabilityRequirementSet *_requirements;
    HKObserverSet *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) long long currentOnboardingVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

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
- (id)initWithProfile:(id)a0 featureIdentifier:(id)a1 currentOnboardingVersion:(long long)a2 pairedDeviceCapability:(id)a3 regionAvailabilityProvider:(id)a4 loggingCategory:(id)a5 disableAndExpiryProvider:(id)a6;
- (id)initWithProfile:(id)a0 featureIdentifier:(id)a1 currentOnboardingVersion:(long long)a2 loggingCategory:(id)a3;
- (void)disableAndExpiryProviderDidUpdate:(id)a0;
- (void)regionAvailabilityProvidingDidUpdate:(id)a0;
- (id)featureOnboardingRecordWithError:(id *)a0;
- (id)initWithProfile:(id)a0 featureIdentifier:(id)a1 currentOnboardingVersion:(long long)a2 pairedDeviceCapability:(id)a3 regionAvailabilityProvider:(id)a4 loggingCategory:(id)a5 pairedDeviceCapabilityProvider:(id)a6 disableAndExpiryProvider:(id)a7 availabilityRequirements:(id)a8;
- (id)initWithProfile:(id)a0 featureIdentifier:(id)a1 availabilityRequirements:(id)a2 currentOnboardingVersion:(long long)a3 pairedDeviceCapability:(id)a4 pairedDeviceCapabilityProvider:(id)a5 pairedFeatureAttributesProvider:(id)a6 regionAvailabilityProvider:(id)a7 disableAndExpiryProvider:(id)a8 loggingCategory:(id)a9;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (void)dealloc;
- (void)featureSettingsManager:(id)a0 didUpdateSettingsForFeatureIdentifier:(id)a1;
- (void)pairedDeviceCapabilitiesDidUpdate:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)initWithProfile:(id)a0 featureIdentifier:(id)a1 currentOnboardingVersion:(long long)a2 pairedDeviceCapability:(id)a3 regionAvailabilityProvider:(id)a4 loggingCategory:(id)a5 disableAndExpiryProvider:(id)a6 availabilityRequirements:(id)a7;
- (id)onboardingEligibilityForCountryCode:(id)a0 error:(id *)a1;
- (id)initWithProfile:(id)a0 featureIdentifier:(id)a1 currentOnboardingVersion:(long long)a2 pairedDeviceCapability:(id)a3 regionAvailabilityProvider:(id)a4 loggingCategory:(id)a5 pairedDeviceCapabilityProvider:(id)a6;
- (id)initWithProfile:(id)a0 featureIdentifier:(id)a1 currentOnboardingVersion:(long long)a2 pairedDeviceCapability:(id)a3 regionAvailabilityProvider:(id)a4 loggingCategory:(id)a5 pairedDeviceCapabilityProvider:(id)a6 disableAndExpiryProvider:(id)a7;
- (id)initWithProfile:(id)a0 featureIdentifier:(id)a1 currentOnboardingVersion:(long long)a2 regionAvailabilityProvider:(id)a3 loggingCategory:(id)a4;
- (id)initWithProfile:(id)a0 featureIdentifier:(id)a1 availabilityRequirements:(id)a2 currentOnboardingVersion:(long long)a3 pairedDeviceCapability:(id)a4 pairedDeviceCapabilityProvider:(id)a5 pairedFeatureAttributesProvider:(id)a6 regionAvailabilityProvider:(id)a7 disableAndExpiryProvider:(id)a8 onboardingEligibilityDeterminer:(id)a9 featureSettingsAtOnboardingTimeValidator:(id)a10 loggingCategory:(id)a11;
- (void).cxx_destruct;
- (void)onboardingCompletionManager:(id)a0 didUpdateOnboardingCompletionsForFeatureIdentifier:(id)a1;

@end
