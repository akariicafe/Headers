@class HDRPFeatureAvailabilityManager, NSString, HDProfile, HKRPOxygenSaturationOnboardingCacher, HDRPRespiratoryDailyAnalytics;

@interface HDRespiratoryProfileExtension : NSObject <HDProfileExtension, HDFeatureAvailabilityExtensionProvider> {
    HKRPOxygenSaturationOnboardingCacher *_onboardingCacher;
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
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 forcingFeaturesEnabled:(BOOL)a1;
- (id)oxygenSaturationSessionWithDelegate:(id)a0 queue:(id)a1;
- (id)initWithProfile:(id)a0 forcingFeaturesEnabled:(BOOL)a1 featureAvailabilityManager:(id)a2;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)a0 client:(id)a1;

@end
