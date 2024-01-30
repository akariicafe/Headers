@class _HKBehavior, HKFeatureAvailabilityProvidingDataSource, HKWatchAppInstallationDataSource, HKFeatureStatusProvidingDataSource, NSDate, HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource, HKUserDefaultsDataSource, HKDarwinNotificationDataSource, HKWristDetectionSettingDataSource, HKNanoRegistryPairingAndSwitchingNotificationDataSource, HKWatchLowPowerModeDataSource;
@protocol HKCurrentCountryCodeProvider, HKFeatureAvailabilityHealthDataSource, HKFeatureOnboardingRecordFallbackProviding;

@interface HKFeatureAvailabilityRequirementEvaluationDataSource : NSObject

@property (readonly, weak, nonatomic) id<HKFeatureAvailabilityHealthDataSource> weakHealthDataSource;
@property (readonly, nonatomic) id<HKFeatureAvailabilityHealthDataSource> strongHealthDataSource;
@property (copy, nonatomic) id /* block */ currentDateDataSource;
@property (retain, nonatomic) id<HKFeatureOnboardingRecordFallbackProviding> onboardingRecordFallbackProvider;
@property (readonly, nonatomic) HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource *requirementSatisfactionOverridesDataSource;
@property (readonly, nonatomic) HKFeatureAvailabilityProvidingDataSource *featureAvailabilityProvidingDataSource;
@property (readonly, nonatomic) HKFeatureStatusProvidingDataSource *featureStatusProvidingDataSource;
@property (readonly, nonatomic) HKUserDefaultsDataSource *privacyPreferencesDataSource;
@property (readonly, nonatomic) HKUserDefaultsDataSource *respiratoryPreferencesDataSource;
@property (readonly, nonatomic) HKUserDefaultsDataSource *ageGatingDataSource;
@property (readonly, nonatomic) HKWristDetectionSettingDataSource *wristDetectionSettingDataSource;
@property (readonly, nonatomic) HKNanoRegistryPairingAndSwitchingNotificationDataSource *devicePairingAndSwitchingNotificationDataSource;
@property (readonly, nonatomic) HKDarwinNotificationDataSource *darwinNotificationDataSource;
@property (readonly, nonatomic) HKWatchAppInstallationDataSource *watchAppInstallationDataSource;
@property (readonly, nonatomic) HKWatchLowPowerModeDataSource *watchLowPowerModeDataSource;
@property (readonly, nonatomic) id<HKCurrentCountryCodeProvider> currentCountryCodeProvider;
@property (readonly, nonatomic) _HKBehavior *behavior;
@property (readonly, nonatomic) NSDate *currentDate;

+ (id)dataSourceWithHealthDataSource:(id)a0 currentCountryCodeProvider:(id)a1 onboardingRecordFallbackProvider:(id)a2;
+ (id)dataSourceWithHealthDataSource:(id)a0 currentCountryCodeProvider:(id)a1;
+ (id)dataSourceWithHealthDataSource:(id)a0;
+ (id)dataSourceWithHealthDataSource:(id)a0 currentCountryCodeProvider:(id)a1 wristDetectionSettingManager:(id)a2 requirementSatisfactionOverridesDataSource:(id)a3 onboardingRecordFallbackProvider:(id)a4;

- (id)featureStatusForFeatureWithIdentifier:(id)a0 context:(id)a1 error:(id *)a2;
- (id)performLocalEvaluation:(id /* block */)a0;
- (id)onboardingEligibilityForFeatureWithIdentifier:(id)a0 error:(id *)a1;
- (id)initWithHealthDataSource:(id)a0 privacyPreferencesDataSource:(id)a1 respiratoryPreferencesDataSource:(id)a2 ageGatingDataSource:(id)a3 wristDetectionSettingDataSource:(id)a4 devicePairingAndSwitchingNotificationDataSource:(id)a5 darwinNotificationDataSource:(id)a6 watchLowPowerModeDataSource:(id)a7 currentCountryCodeProvider:(id)a8 requirementSatisfactionOverridesDataSource:(id)a9 currentDateDataSource:(id /* block */)a10 watchAppInstallationDataSource:(id)a11 onboardingRecordFallbackProvider:(id)a12;
- (void)unregisterObserverForDeviceCharacteristicAndPairingChanges:(id)a0;
- (id)healthDataSource;
- (id)onboardingRecordForFeatureWithIdentifier:(id)a0 error:(id *)a1;
- (id)isWatchAppInstalledWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)initWithHealthDataSource:(id)a0 featureAvailabilityProvidingDataSource:(id)a1 featureStatusProvidingDataSource:(id)a2 privacyPreferencesDataSource:(id)a3 respiratoryPreferencesDataSource:(id)a4 ageGatingDataSource:(id)a5 wristDetectionSettingDataSource:(id)a6 devicePairingAndSwitchingNotificationDataSource:(id)a7 darwinNotificationDataSource:(id)a8 watchLowPowerModeDataSource:(id)a9 currentCountryCodeProvider:(id)a10 requirementSatisfactionOverridesDataSource:(id)a11 currentDateDataSource:(id /* block */)a12 watchAppInstallationDataSource:(id)a13 onboardingRecordFallbackProvider:(id)a14;
- (id)requirementSatisfactionOverridesForFeatureWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)registerObserverForDeviceCharacteristicAndPairingChanges:(id)a0 block:(id /* block */)a1;

@end
