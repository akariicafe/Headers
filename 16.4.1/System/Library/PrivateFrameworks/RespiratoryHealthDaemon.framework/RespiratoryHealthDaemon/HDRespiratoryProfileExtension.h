@class NSObject, NSString, HDProfile, HKRPOxygenSaturationOnboardingCacher, HDBackgroundFeatureDeliveryManager, HKRPOxygenSaturationSettings, HDRPRespiratoryDailyAnalytics;
@protocol OS_dispatch_queue, HDFeatureAvailabilityExtension;

@interface HDRespiratoryProfileExtension : NSObject <HDFeatureAvailabilityExtensionObserver, HDProfileReadyObserver, HDProfileExtension, HDFeatureAvailabilityExtensionProvider> {
    HDBackgroundFeatureDeliveryManager *_featureDeliveryManager;
    HKRPOxygenSaturationOnboardingCacher *_onboardingCacher;
    HKRPOxygenSaturationSettings *_settings;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) id /* block */ unitTesting_healthLiteSessionWithDelegateHandler;
@property (retain, nonatomic) id<HDFeatureAvailabilityExtension> featureAvailabilityManager;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDRPRespiratoryDailyAnalytics *dailyAnalytics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)a0;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)a0;
- (void)profileDidBecomeReady:(id)a0;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (id)initWithProfile:(id)a0 featureAvailabilityManager:(id)a1;
- (void)_updateBackgroundMeasurmentsSettings;
- (void)_setupOrResetSettingsIfNeededWithFeatureAvailabilityManager:(id)a0;
- (id)oxygenSaturationSessionWithDelegate:(id)a0 queue:(id)a1;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)a0;
- (void).cxx_destruct;

@end
