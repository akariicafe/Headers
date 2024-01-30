@interface HUHomeUIServiceLaunchUserInfo : NSObject

+ (id)userInfoForUpgradeOfferResults:(id)a0;
+ (BOOL)isInSetupContext:(long long)a0;
+ (long long)launchReasonFromUserInfo:(id)a0;
+ (id)userInfoForLockAccessFirmwareUpgradeSetupInHome:(id)a0;
+ (id)userInfoForLockAccessPinCodeSetupInHome:(id)a0;
+ (id)userInfoForLockAccessWalletKeySetupInHome:(id)a0;
+ (id)userInfoForResumeAccessorySetupInHome:(id)a0 accessoryUUIDs:(id)a1;
+ (id)userInfoForSafetyAndSecurityInHome:(id)a0;
+ (id)userInfoForSiriEndpointInHome:(id)a0;

@end
