@class NSString, HKObserverSet, HKTaskServerProxyProvider;

@interface HKFeatureAvailabilityStore : NSObject <HKFeatureAvailabilityStoreClient, _HKXPCExportable, HKFeatureAvailabilityProviding> {
    NSString *_featureIdentifier;
    HKObserverSet *_observers;
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

+ (id)taskIdentifier;

- (id)remoteInterface;
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
- (void)connectionInvalidated;
- (id)pairedFeatureAttributesWithError:(id *)a0;
- (void)setFeatureSettingData:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)setFeatureSettingNumber:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)a0 countryCodeProvenance:(long long)a1 date:(id)a2 settings:(id)a3 completion:(id /* block */)a4;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)a0;
- (void)removeFeatureSettingValueForKey:(id)a0 completion:(id /* block */)a1;
- (id)exportedInterface;
- (id)featureOnboardingRecordWithError:(id *)a0;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (void)unregisterObserver:(id)a0;
- (id)onboardingEligibilityForCountryCode:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithFeatureIdentifier:(id)a0 healthStore:(id)a1;
- (void)_handleAutomaticProxyReconnection;
- (void)_notifyObserversForOnboardingCompletionUpdate;
- (void)_notifyObserversForPairedDeviceCapabilityUpdate;
- (void)_notifyObserversForSettingsUpdate;
- (void)_startObservingWithActivationHandler:(id /* block */)a0;
- (BOOL)_synchronouslyStartObservingWithError:(id *)a0;
- (void)client_featureAvailabilityExtensionDidUpdateOnboardingCompletion;
- (void)client_featureAvailabilityExtensionDidUpdatePairedDeviceCapability;
- (void)client_featureAvailabilityProvidingDidUpdateSettings;
- (void)registerObserver:(id)a0 queue:(id)a1 activationHandler:(id /* block */)a2;

@end
