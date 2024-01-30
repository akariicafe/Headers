@interface HKFeatureAvailabilityRequirements : NSObject

+ (id)onboardingRecordIsNotPresentForMutuallyExclusiveFeatureWithIdentifier:(id)a0;
+ (id)notInStoreDemoMode;
+ (id)featureIsOnWithIdentifier:(id)a0 isOnIfSettingIsAbsent:(BOOL)a1;
+ (id)onboardingRecordIsNotPresentForFeatureWithIdentifier:(id)a0;
+ (id)featureFlagIsEnabled:(BOOL)a0;
+ (id)healthAppIsNotHidden;
+ (id)profileIsNotFamilySetupPairingProfile;
+ (id)mutuallyExclusiveFeatureIsOffWithIdentifier:(id)a0 isOnIfSettingIsAbsent:(BOOL)a1;
+ (id)countryIsSupportedOnLocalDeviceForFeatureWithIdentifier:(id)a0;
+ (id)activeRemoteDeviceIsPresentForFeatureWithIdentifier:(id)a0;
+ (id)capabilityIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)a0;
+ (id)notAgeGatedForUserDefaultsKey:(id)a0;
+ (id)countryIsSupportedOnWatchForFeatureWithIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;
+ (id)onboardedAtLeastDaysAgo:(long long)a0 featureIdentifier:(id)a1;
+ (id)heartRateIsEnabledInPrivacy;
+ (id)countryIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;
+ (id)seedIsNotExpiredForFeatureWithIdentifier:(id)a0;
+ (id)onboardingRecordIsPresentForFeatureWithIdentifier:(id)a0;
+ (id)featureIsNotRemotelyDisabledWithIdentifier:(id)a0;
+ (id)wristDetectionIsEnabledForActiveWatch;

@end
