@class HDRPFeatureAvailabilityManager, NSString, HDProfile, HKRPOxygenSaturationOnboardingCacher, HKRPOxygenSaturationSettings, NSObject, HDRPRespiratoryDailyAnalytics;
@protocol OS_dispatch_queue;

@interface HDRespiratoryProfileExtension : NSObject <HDFeatureAvailabilityExtensionObserver, HDProfileExtension, HDFeatureAvailabilityExtensionProvider> {
    HKRPOxygenSaturationOnboardingCacher *_onboardingCacher;
    HKRPOxygenSaturationSettings *_settings;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) id /* block */ unitTesting_healthLiteSessionWithDelegateHandler;
@property (retain, nonatomic) HDRPFeatureAvailabilityManager *featureAvailabilityManager;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDRPRespiratoryDailyAnalytics *dailyAnalytics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (id)initWithProfile:(id)a0 forcingFeaturesEnabled:(BOOL)a1 featureAvailabilityManager:(id)a2;
- (id)initWithProfile:(id)a0 forcingFeaturesEnabled:(BOOL)a1;
- (void).cxx_destruct;
- (id)oxygenSaturationSessionWithDelegate:(id)a0 queue:(id)a1;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)a0;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)a0;
- (void)_updateBackgroundMeasurmentsSettings;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)a0;

@end
