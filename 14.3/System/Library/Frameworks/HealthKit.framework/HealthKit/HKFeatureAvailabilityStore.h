@class NSString, HKObserverSet, HKTaskServerProxyProvider;

@interface HKFeatureAvailabilityStore : NSObject <HKFeatureAvailabilityStoreClient, _HKXPCExportable, HKFeatureAvailabilityProviding> {
    NSString *_featureIdentifier;
    HKObserverSet *_observers;
    HKTaskServerProxyProvider *_proxyProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

+ (id)taskIdentifier;

- (void)connectionInvalidated;
- (id)onboardedCountryCodeSupportedStateForDevice:(id)a0 error:(id *)a1;
- (id)canCompleteOnboardingForCountryCode:(id)a0 device:(id)a1 error:(id *)a2;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)client_featureAvailabilityExtensionDidUpdatePairedDeviceCapability;
- (id)highestOnboardingVersionCompletedWithError:(id *)a0;
- (void).cxx_destruct;
- (void)_handleAutomaticProxyReconnection;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)a0;
- (id)remoteInterface;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (void)client_featureAvailabilityExtensionDidUpdateOnboardingCompletion;
- (id)initWithFeatureIdentifier:(id)a0 healthStore:(id)a1;
- (id)canCompleteOnboardingForCountryCode:(id)a0 error:(id *)a1;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)a0;
- (void)unregisterObserver:(id)a0;
- (void)_notifyObserversForOnboardingCompletionUpdate;
- (id)exportedInterface;
- (void)_notifyObserversForPairedDeviceCapabilityUpdate;
- (void)registerObserver:(id)a0 queue:(id)a1 activationHandler:(id /* block */)a2;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)a0 completion:(id /* block */)a1;
- (id)isFeatureCapabilitySupportedOnDevice:(id)a0 error:(id *)a1;
- (BOOL)_synchronouslyStartObservingWithError:(id *)a0;
- (void)_startObservingWithActivationHandler:(id /* block */)a0;
- (void)resetOnboardingWithCompletion:(id /* block */)a0;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)a0;

@end
