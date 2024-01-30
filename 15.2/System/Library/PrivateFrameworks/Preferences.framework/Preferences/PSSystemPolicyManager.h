@interface PSSystemPolicyManager : NSObject

+ (id)_thirdPartyApplicationProxyForBundleID:(id)a0;
+ (id)thirdPartyApplicationsIncludingAppClips:(BOOL)a0;
+ (BOOL)_shouldIncludeProxy:(id)a0;
+ (id)specifiersForThirdPartyApps:(id)a0;
+ (BOOL)_notificationSettingsNeededForBundleID:(id)a0;
+ (void)_populateBBSectionIDs;
+ (BOOL)_privacySettingsNeededForProxy:(id)a0;
+ (id)_dataUsageWorkspaceInfo;
+ (BOOL)_familyControlsSettingNeededForBundleID:(id)a0;
+ (BOOL)_documentSettingsNeededForBundleID:(id)a0;
+ (BOOL)hasAnyAppClip;
+ (id)thirdPartyApplicationProxies;
+ (id)thirdPartyApplications;
+ (id)thirdPartyApplicationProxyForBundleID:(id)a0;
+ (id)_thirdPartyApplicationProxies;
+ (BOOL)_cellularDataSettingsNeededForBundleID:(id)a0;
+ (BOOL)_defaultAppSettingsNeededForBundleID:(id)a0;
+ (id)thirdPartyApplicationForBundleID:(id)a0;
+ (BOOL)_systemSettingsNeededForProxy:(id)a0;
+ (BOOL)_languageSettingNeededForBundleID:(id)a0;
+ (BOOL)_backgroundAppRefreshSettingsNeededForProxy:(id)a0;

@end
