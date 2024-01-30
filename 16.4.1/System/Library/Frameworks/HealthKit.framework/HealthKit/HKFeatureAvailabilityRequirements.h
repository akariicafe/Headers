@interface HKFeatureAvailabilityRequirements : NSObject

+ (id)onboardingRecordIsNotPresentForFeatureWithIdentifier:(id)a0;
+ (id)onboardingRecordIsNotPresentForMutuallyExclusiveFeatureWithIdentifier:(id)a0;
+ (id)heartRateIsEnabledInPrivacy;
+ (id)featureIsOnWithIdentifier:(id)a0 isOnIfSettingIsAbsent:(BOOL)a1;
+ (id)featureIsNotRemotelyDisabledWithIdentifier:(id)a0;
+ (id)bloodOxygenMeasurementsAreEnabled;
+ (id)profileIsNotFamilySetupPairingProfile;
+ (id)defaultHelpTileRequirementsForBackgroundDeliveredFeatureWithFeatureIdentifier:(id)a0 isAgeGatedUserDefaultsKey:(id)a1;
+ (id)capabilityIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)a0;
+ (id)onboardingRecordsArePresentForPrerequisiteFeaturesWithIdentifiers:(id)a0;
+ (id)notInStoreDemoMode;
+ (id)countryIsSupportedOnWatchForFeatureWithIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;
+ (id)onboardingRecordIsPresentForFeatureWithIdentifier:(id)a0;
+ (id)countryIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;
+ (id)countryIsSupportedOnLocalDeviceForFeatureWithIdentifier:(id)a0;
+ (id)watchLowPowerModeIsOff;
+ (id)countryIsSupportedOnLocalDeviceAndPhoneForFeatureWithIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;
+ (id)countryCodeIsPresentForFeatureWithIdentifier:(id)a0;
+ (id)defaultTipsAppVisibilityRequirementsForBackgroundDeliveredFeatureWithFeatureIdentifier:(id)a0 isAgeGatedUserDefaultsKey:(id)a1;
+ (id)notAgeGatedForUserDefaultsKey:(id)a0;
+ (id)prerequisiteFeaturesAreOnWithFeatureSettings:(id)a0;
+ (id)seedIsNotExpiredForFeatureWithIdentifier:(id)a0;
+ (id)capabilityIsSupportedOnAnyWatch:(id)a0 supportedOnLocalDevice:(BOOL)a1;
+ (id)capabilityIsSupportedOnActiveWatchForFeatureWithIdentifier:(id)a0 supportedOnLocalDevice:(BOOL)a1;
+ (id)wristDetectionIsEnabledForActiveWatch;
+ (id)activeRemoteDeviceIsPresentForFeatureWithIdentifier:(id)a0;
+ (id)watchAppIsInstalledForBundleIdentifier:(id)a0;
+ (id)featureFlagIsEnabled:(BOOL)a0;
+ (id)mutuallyExclusiveFeatureIsOffWithIdentifier:(id)a0;
+ (id)healthAppIsNotHidden;
+ (id)onboardedAtLeastDaysAgo:(long long)a0 featureIdentifier:(id)a1;
+ (id)defaultOnboardingEligibilityRequirementsForFeatureIdentifier:(id)a0;

@end
