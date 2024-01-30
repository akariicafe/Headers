@class NSString, NSObject;
@protocol OS_dispatch_queue, HDFeatureAvailabilityExtension;

@interface HDFeatureAvailabilityStoreServer : HDStandardTaskServer <HKFeatureAvailabilityStoreServer, HDFeatureAvailabilityExtensionObserver> {
    id<HDFeatureAvailabilityExtension> _extension;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (void)remote_setFeatureSettingNumber:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)remote_getFeatureAvailabilityRequirementsWithCompletion:(id /* block */)a0;
- (void)remote_canCompleteOnboardingForCountryCode:(id)a0 completion:(id /* block */)a1;
- (void)remote_setCurrentOnboardingVersionCompletedForCountryCode:(id)a0 countryCodeProvenance:(long long)a1 date:(id)a2 settings:(id)a3 completion:(id /* block */)a4;
- (void)remote_getIsFeatureCapabilitySupportedOnActivePairedDeviceWithCompletion:(id /* block */)a0;
- (void)remote_getFeatureOnboardingRecordWithCompletion:(id /* block */)a0;
- (void)remote_getPairedFeatureAttributesWithCompletion:(id /* block */)a0;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)a0;
- (void)remote_setFeatureSettingString:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)remote_resetOnboardingWithCompletion:(id /* block */)a0;
- (id)remoteInterface;
- (void)remote_onboardingEligibilityForCountryCode:(id)a0 completion:(id /* block */)a1;
- (void)remote_earliestDateLowestOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)remote_startObservingChangesWithCompletion:(id /* block */)a0;
- (void)remote_setFeatureSettingData:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)remote_highestOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)remote_onboardedCountryCodeSupportedStateWithCompletion:(id /* block */)a0;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)a0;
- (id)exportedInterface;
- (void)remote_getRegionAvailabilityWithCompletion:(id /* block */)a0;
- (void)remote_getIsCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (void)remote_stopObservingChanges;
- (void)remote_removeFeatureSettingValueForKey:(id)a0 completion:(id /* block */)a1;
- (void)remote_saveOnboardingCompletion:(id)a0 settings:(id)a1 completion:(id /* block */)a2;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)a0;

@end
