@class HKObserverSet, NSString, HDProfile, NSUserDefaults;
@protocol HDPairedDeviceCapabilityProviding, HDRemoteFeatureAvailabilityProviding, HKFeatureAvailabilityProvidingObserver;

@interface HDHRIrregularRhythmNotificationsV1FeatureAvailabilityManager : NSObject <HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDFeatureAvailabilityExtension> {
    HDProfile *_profile;
    id<HDPairedDeviceCapabilityProviding> _pairedDeviceProvider;
    id<HDRemoteFeatureAvailabilityProviding> _remoteAvailabilityProvider;
    NSUserDefaults *_notificationSettingDefaults;
    HKObserverSet<HKFeatureAvailabilityProvidingObserver> *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (void)setFeatureSettingString:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)a0;
- (void)daemonReady:(id)a0;
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
- (id)highestOnboardingVersionCompletedWithError:(id *)a0;
- (id)canCompleteOnboardingForCountryCode:(id)a0 error:(id *)a1;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)a0;
- (id)featureOnboardingRecordWithError:(id *)a0;
- (void)resetOnboardingWithCompletion:(id /* block */)a0;
- (void)removeFeatureSettingValueForKey:(id)a0 completion:(id /* block */)a1;
- (id)regionAvailabilityWithError:(id *)a0;
- (BOOL)_isFeatureSupportedOnDevice:(id)a0;
- (void).cxx_destruct;
- (BOOL)_countryCodeIsSupportedForDevicePairing:(id)a0 device:(id)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)unregisterObserver:(id)a0;
- (id)_onboardingCompletionWithError:(id *)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithProfile:(id)a0 pairedDeviceCapabilityProvider:(id)a1;
- (void)dealloc;
- (id)initWithProfile:(id)a0 pairedDeviceCapabilityProvider:(id)a1 remoteAvailabilityProvider:(id)a2 notificationSettingDefaults:(id)a3;
- (id)countryAvailabilityVersion;

@end
