@class _HKBehavior, HKFeatureAvailabilityProvidingDataSource, NSDate, HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource, HKUserDefaultsDataSource, HKDarwinNotificationDataSource, HKWristDetectionSettingDataSource, HKNanoRegistryPairingAndSwitchingNotificationDataSource;
@protocol HKFeatureAvailabilityHealthDataSource, HKCurrentCountryCodeProvider;

@interface HKFeatureAvailabilityRequirementEvaluationDataSource : NSObject

@property (readonly, weak, nonatomic) id<HKFeatureAvailabilityHealthDataSource> weakHealthDataSource;
@property (readonly, nonatomic) id<HKFeatureAvailabilityHealthDataSource> strongHealthDataSource;
@property (copy, nonatomic) id /* block */ currentDateDataSource;
@property (readonly, nonatomic) HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource *requirementSatisfactionOverridesDataSource;
@property (readonly, nonatomic) HKFeatureAvailabilityProvidingDataSource *featureAvailabilityProvidingDataSource;
@property (readonly, nonatomic) HKUserDefaultsDataSource *privacyPreferencesDataSource;
@property (readonly, nonatomic) HKUserDefaultsDataSource *ageGatingDataSource;
@property (readonly, nonatomic) HKWristDetectionSettingDataSource *wristDetectionSettingDataSource;
@property (readonly, nonatomic) HKNanoRegistryPairingAndSwitchingNotificationDataSource *devicePairingAndSwitchingNotificationDataSource;
@property (readonly, nonatomic) HKDarwinNotificationDataSource *darwinNotificationDataSource;
@property (readonly, nonatomic) id<HKCurrentCountryCodeProvider> currentCountryCodeProvider;
@property (readonly, nonatomic) _HKBehavior *behavior;
@property (readonly, nonatomic) NSDate *currentDate;

+ (id)dataSourceWithHealthDataSource:(id)a0 currentCountryCodeProvider:(id)a1 wristDetectionSettingManager:(id)a2;
+ (id)dataSourceWithHealthDataSource:(id)a0;
+ (id)dataSourceWithHealthDataSource:(id)a0 currentCountryCodeProvider:(id)a1;

- (id)performLocalEvaluation:(id /* block */)a0;
- (id)healthDataSource;
- (id)initWithHealthDataSource:(id)a0 privacyPreferencesDataSource:(id)a1 ageGatingDataSource:(id)a2 wristDetectionSettingDataSource:(id)a3 devicePairingAndSwitchingNotificationDataSource:(id)a4 darwinNotificationDataSource:(id)a5 currentCountryCodeProvider:(id)a6 requirementSatisfactionOverridesDataSource:(id)a7 currentDateDataSource:(id /* block */)a8;
- (id)onboardingEligibilityForFeatureWithIdentifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)requirementSatisfactionOverridesForFeatureWithIdentifier:(id)a0;
- (id)onboardingRecordForFeatureWithIdentifier:(id)a0 error:(id *)a1;

@end
