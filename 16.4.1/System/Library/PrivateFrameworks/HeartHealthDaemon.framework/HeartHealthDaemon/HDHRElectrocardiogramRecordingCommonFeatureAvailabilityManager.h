@class HKObserverSet, NSString, HDProfile, HKFeatureAvailabilityRequirementSet, NSUserDefaults;
@protocol HDPairedDeviceCapabilityProviding, HKFeatureAvailabilityProvidingObserver, HDFeatureDisableAndExpiryProviding, HDRegionAvailabilityProviding, HDPairedFeatureAttributesProviding;

@interface HDHRElectrocardiogramRecordingCommonFeatureAvailabilityManager : NSObject <HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDPairedDeviceCapabilityProvidingDelegate, HDFeatureAvailabilityExtension> {
    HDProfile *_profile;
    id<HDPairedFeatureAttributesProviding> _pairedFeatureAttributesProvider;
    id<HDPairedDeviceCapabilityProviding> _pairedDeviceProvider;
    id<HDFeatureDisableAndExpiryProviding> _disableAndExpiryProvider;
    id<HDRegionAvailabilityProviding> _regionAvailabilityProvider;
    NSUserDefaults *_cacheDefaults;
    HKObserverSet<HKFeatureAvailabilityProvidingObserver> *_observers;
    NSString *_featureIdentifier;
    unsigned long long _onboardingVersion;
    HKFeatureAvailabilityRequirementSet *_availabilityRequirementSet;
}

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
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (BOOL)_isFeatureSupportedOnDevice:(id)a0;
- (void)daemonReady:(id)a0;
- (id)countryAvailabilityVersion;
- (id)_currentOnboardingHistoryDictionaryWithError:(id *)a0;
- (id)featureOnboardingRecordWithError:(id *)a0;
- (id)_makeOnboardingHistoryWithOnboardingVersion:(long long)a0 countryCode:(id)a1 error:(id *)a2;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (void)pairedDeviceCapabilitiesDidUpdate:(id)a0;
- (void)_saveFirstOnboardingCompletionDateIfNeeded:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)_onboardingCompletionWithError:(id *)a0;
- (unsigned long long)_ineligibilityReasonsForRescindedStatus:(long long)a0;
- (id)initWithProfile:(id)a0 featureIdentifier:(id)a1 onboardingVersion:(unsigned long long)a2 pairedFeatureAttributesProvider:(id)a3 pairedDeviceCapabilityProvider:(id)a4 disableAndExpiryProvider:(id)a5 regionAvailabilityProvider:(id)a6 availabilityRequirementSet:(id)a7 cacheDefaults:(id)a8;
- (id)onboardingEligibilityForCountryCode:(id)a0 error:(id *)a1;
- (void)_setOnboardingCompletedForCountryCode:(id)a0 onboardingVersion:(unsigned long long)a1 date:(id)a2 settings:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
