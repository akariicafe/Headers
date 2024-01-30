@class NSString, NSXPCConnection;

@interface WBSSafariBookmarksSyncAgentProxy : NSObject <WBSSafariBookmarksSyncAgentProtocol>

@property (retain) NSXPCConnection *_safariBookmarksSyncAgentConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProxy;

- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(id /* block */)a0;
- (void)fetchRemoteMigrationStateWithCompletionHandler:(id /* block */)a0;
- (void)getCloudTabDevicesWithCompletionHandler:(id /* block */)a0;
- (void)getCloudExtensionStatesWithCompletionHandler:(id /* block */)a0;
- (void)userAccountDidChange:(long long)a0;
- (void)saveExtensionDeviceWithDictionaryRepresentation:(id)a0 completionHandler:(id /* block */)a1;
- (void)syncDownSafariSettingsSyncWithCompletion:(id /* block */)a0;
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)a0 deviceUUIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)syncDownSafariPerSiteSettingsSyncWithCompletion:(id /* block */)a0;
- (void)deleteBackgroundImageDirectory;
- (void)clearLocalDataIncludingMigrationState:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)deletePerSiteSettingsSyncData;
- (void)saveCloudSettingWithDictionaryRepresentation:(id)a0 successCompletionHandler:(id /* block */)a1;
- (void)deleteBackgroundImageFromCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)userDidUpdateBookmarkDatabase;
- (void)getCloudTabContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (void)triggerImmediateBackgroundImageSaveIfApplicable;
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)a0 closeRequestUUIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)syncUpSafariPerSiteSettingsSyncWithCompletion:(id /* block */)a0;
- (void)migrateToCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)resetToDAVDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)registerForPushNotificationsIfNeeded;
- (void)dealloc;
- (void)fetchTabGroupEntitiesWithCompletion:(id /* block */)a0;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(id /* block */)a0;
- (void)collectDiagnosticsDataWithCompletionHandler:(id /* block */)a0;
- (void)deleteDevicesWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginMigrationFromDAV;
- (void)fetchCloudTabDevicesAndCloseRequests;
- (void)setUsesOpportunisticPushTopic:(BOOL)a0;
- (void)saveCloudPerSiteSettingWithDictionaryRepresentation:(id)a0 successCompletionHandler:(id /* block */)a1;
- (id)init;
- (void)syncUpSafariSettingsSyncWithCompletion:(id /* block */)a0;
- (void)deleteCloudExtensionStatesDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)saveExtensionStatesWithDictionaryRepresentation:(id)a0 forDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteCloudExtensionDevicesWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)observeRemoteMigrationStateForSecondaryMigration;
- (void)fetchCloudSettingsChangesImmediately;
- (void)getCloudSettingsContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (void)triggerSafariTabGroupSync;
- (void)scheduleCloudBackgroundImageSaveWithURL:(id)a0 isLightAppearance:(BOOL)a1 successCompletionHandler:(id /* block */)a2;

@end
