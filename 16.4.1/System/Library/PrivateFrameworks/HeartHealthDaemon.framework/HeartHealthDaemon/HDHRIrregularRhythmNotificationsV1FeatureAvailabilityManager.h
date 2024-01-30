@class HKObserverSet, NSString, HDProfile, NSUserDefaults;
@protocol HDPairedDeviceCapabilityProviding, HDFeatureDisableAndExpiryProviding, HKFeatureAvailabilityProvidingObserver;

@interface HDHRIrregularRhythmNotificationsV1FeatureAvailabilityManager : NSObject <HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDFeatureAvailabilityExtension> {
    HDProfile *_profile;
    id<HDPairedDeviceCapabilityProviding> _pairedDeviceProvider;
    id<HDFeatureDisableAndExpiryProviding> _disableAndExpiryProvider;
    NSUserDefaults *_notificationSettingDefaults;
    HKObserverSet<HKFeatureAvailabilityProvidingObserver> *_observers;
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
- (id)initWithProfile:(id)a0 pairedDeviceCapabilityProvider:(id)a1;
- (id)countryAvailabilityVersion;
- (id)featureOnboardingRecordWithError:(id *)a0;
- (id)initWithProfile:(id)a0 pairedDeviceCapabilityProvider:(id)a1 disableAndExpiryProvider:(id)a2 notificationSettingDefaults:(id)a3;
- (id)_onboardingEligibilityForCountryCode:(id)a0 error:(id *)a1;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_countryCodeIsSupportedForDevicePairing:(id)a0 device:(id)a1;
- (void)unregisterObserver:(id)a0;
- (id)_onboardingCompletionWithError:(id *)a0;
- (id)onboardingEligibilityForCountryCode:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
