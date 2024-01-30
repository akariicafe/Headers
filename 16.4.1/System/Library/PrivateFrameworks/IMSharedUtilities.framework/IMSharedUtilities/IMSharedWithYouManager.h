@class NSMutableDictionary, NSSet, LSApplicationWorkspace, NSArray, NSNumber, NSString;

@interface IMSharedWithYouManager : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (nonatomic) int settingHasChangedNotificationToken;
@property (copy, nonatomic) NSNumber *cachedSharedWithYouEnabledValue;
@property (retain, nonatomic) NSMutableDictionary *swyPinsPerBundleID;
@property (readonly, nonatomic) LSApplicationWorkspace *_applicationWorkspace;
@property (retain, nonatomic) NSSet *enabledBundleIDs;
@property (nonatomic, getter=isSharedWithYouEnabled) BOOL sharedWithYouEnabled;
@property (readonly, nonatomic) BOOL sharedWithYouKeyExists;
@property (readonly, copy, nonatomic) NSArray *sharedWithYouApplicationBundleIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)collaborationAppBundleIDs;
+ (id)onboardingAppBundleIDs;
+ (id)_hiddenBundleIDs;
+ (BOOL)_isBundleIDAllowed:(id)a0;
+ (id)appBundleIDsFromDefaults;
+ (id)tvAppBundleID;

- (void)applicationsDidInstall:(id)a0;
- (void)dealloc;
- (id)init;
- (void)applicationsDidUninstall:(id)a0;
- (void).cxx_destruct;
- (BOOL)defaultCollaborationAppsEnabled;
- (id)appNameFromSharingURL:(id)a0;
- (id)appStoreURLFromSharingURL:(id)a0;
- (void)decrementPinCountForBundleID:(id)a0;
- (id)defaultAppBundleIDs;
- (long long)getPinCountForBundleID:(id)a0;
- (void)incrementPinCountForBundleID:(id)a0;
- (BOOL)isSharedWithYouEnabledForApplicationWithBundleID:(id)a0;
- (void)setSharedWithYouEnabled:(BOOL)a0 forApplicationWithBundleID:(id)a1;
- (BOOL)showPinningStatusTextForBundleID:(id)a0;
- (id)lsAppRecordForAppStoreShareURL:(id)a0;
- (id)_installedLSAppRecordFromBundleIDs:(id)a0;
- (void)appNameAndBundleIDFoURL:(id)a0 outAppName:(id *)a1 outBundleID:(id *)a2;
- (id)appStoreIDFromSharingURL:(id)a0;
- (void)deleteSharedWithYouPreferences;
- (id)enabledApps;
- (id)lsAppRecordForShareBearURL:(id)a0;
- (id)lsAppRecordForURL:(id)a0;
- (id)lsAppRecordForURL:(id)a0 checkInstalledAppsOnly:(BOOL)a1;
- (void)setSharedWithYouEnabledForAllApplicationsIndividually:(BOOL)a0;
- (id)sharedWithYouApps;
- (id)swyPublicEntitlementAppBundleIDs;
- (void)updateEnabledApps;
- (id)urlMinusFragment:(id)a0 onlyCKURL:(BOOL)a1;

@end
