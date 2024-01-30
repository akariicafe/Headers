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

+ (id)taskIdentifier;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (Class)configurationClass;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)remote_getIsCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (void)remote_canCompleteOnboardingForCountryCode:(id)a0 completion:(id /* block */)a1;
- (void)remote_onboardedCountryCodeSupportedStateWithCompletion:(id /* block */)a0;
- (void)remote_canCompleteOnboardingForCountryCode:(id)a0 devicePairingID:(id)a1 completion:(id /* block */)a2;
- (void)remote_onboardedCountryCodeSupportedStateForDevicePairingID:(id)a0 completion:(id /* block */)a1;
- (void)remote_stopObservingChanges;
- (void)remote_getIsFeatureCapabilitySupportedOnActivePairedDeviceWithCompletion:(id /* block */)a0;
- (void)remote_resetOnboardingWithCompletion:(id /* block */)a0;
- (void)remote_getIsFeatureCapabilitySupportedOnDeviceWithPairingID:(id)a0 completion:(id /* block */)a1;
- (void)remote_highestOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (void)remote_earliestDateLowestOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (void)remote_startObservingChangesWithCompletion:(id /* block */)a0;
- (void)remote_setCurrentOnboardingVersionCompletedForCountryCode:(id)a0 completion:(id /* block */)a1;
- (id)exportedInterface;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (id)_clientRemoteObjectProxy;
- (BOOL)_hasWriteEntitlementWithError:(id *)a0;
- (void)_configureWithExtension:(id)a0;

@end
