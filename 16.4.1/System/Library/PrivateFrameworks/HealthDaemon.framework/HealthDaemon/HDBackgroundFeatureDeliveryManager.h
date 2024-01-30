@class NSString, HDProfile, HDPeriodicCountryMonitor, NSObject;
@protocol HDBackgroundFeatureDeliverySettingsProviding, OS_os_log, OS_dispatch_queue, HDBackgroundFeatureDeliveryCriteriaProviding, HDFeatureAvailabilityExtension;

@interface HDBackgroundFeatureDeliveryManager : NSObject <HDFeatureAvailabilityExtensionObserver, HDProfileReadyObserver, HDPeriodicCountryMonitorObserver> {
    HDProfile *_profile;
    HDPeriodicCountryMonitor *_periodicCountryMonitor;
    id<HDFeatureAvailabilityExtension> _featureAvailabilityExtension;
    id<HDBackgroundFeatureDeliveryCriteriaProviding> _featureSpecificDeliveryCriteria;
    id<HDBackgroundFeatureDeliverySettingsProviding> _settingsProvider;
    NSObject<OS_os_log> *_loggingCategory;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)a0;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)a0;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)a0;
- (void)profileDidBecomeReady:(id)a0;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (id)_initWithProfile:(id)a0 periodicCountryMonitor:(id)a1 featureAvailabilityExtension:(id)a2 deliveryCriteria:(id)a3 settingsProvider:(id)a4 loggingCategory:(id)a5;
- (id)initWithProfile:(id)a0 featureAvailabilityExtension:(id)a1 loggingCategory:(id)a2;
- (id)initWithProfile:(id)a0 featureAvailabilityExtension:(id)a1 deliveryCriteria:(id)a2 settingsProvider:(id)a3 loggingCategory:(id)a4;
- (void).cxx_destruct;
- (void)periodicCountryMonitor:(id)a0 didFetchISOCountryCode:(id)a1 countryCodeProvenance:(long long)a2;

@end
