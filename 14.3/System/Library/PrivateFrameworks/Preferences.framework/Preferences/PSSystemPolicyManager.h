@interface PSSystemPolicyManager : NSObject

+ (id)_thirdPartyApplicationProxyForBundleID:(id)a0;
+ (BOOL)_systemSettingsNeededForProxy:(id)a0;
+ (id)specifiersForThirdPartyApps:(id)a0;
+ (id)_thirdPartyApplicationProxies;
+ (id)_dataUsageWorkspaceInfo;
+ (id)thirdPartyApplicationsIncludingAppClips:(BOOL)a0;
+ (id)thirdPartyApplicationProxyForBundleID:(id)a0;
+ (void)_populateBBSectionIDs;
+ (id)thirdPartyApplicationForBundleID:(id)a0;
+ (BOOL)_notificationSettingsNeededForBundleID:(id)a0;
+ (BOOL)_languageSettingNeededForBundleID:(id)a0;
+ (BOOL)_cellularDataSettingsNeededForBundleID:(id)a0;
+ (BOOL)_defaultAppSettingsNeededForBundleID:(id)a0;
+ (BOOL)_shouldIncludeProxy:(id)a0;
+ (BOOL)_backgroundAppRefreshSettingsNeededForProxy:(id)a0;
+ (BOOL)_privacySettingsNeededForProxy:(id)a0;
+ (BOOL)_documentSettingsNeededForBundleID:(id)a0;
+ (id)thirdPartyApplications;
+ (BOOL)hasAnyAppClip;
+ (id)thirdPartyApplicationProxies;

@end
