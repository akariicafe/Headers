@class NSString, NSXPCConnection;

@interface WBSSafariBookmarksSyncAgentProxy : NSObject <WBSSafariBookmarksSyncAgentProtocol>

@property (retain) NSXPCConnection *_connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProxy;

- (void)syncUpSafariSettingsSyncWithCompletion:(id /* block */)a0;
- (void)setUsesOpportunisticPushTopic:(BOOL)a0;
- (void)clearLocalDataIncludingMigrationState:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getCloudTabContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (void)collectDiagnosticsDataWithCompletionHandler:(id /* block */)a0;
- (void)getCloudTabDevicesWithCompletionHandler:(id /* block */)a0;
- (void)userDidUpdateBookmarkDatabase;
- (void)migrateToCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)fetchCloudSettingsChangesImmediately;
- (void)fetchCloudTabDevicesAndCloseRequests;
- (void)observeRemoteMigrationStateForSecondaryMigration;
- (void)deleteBackgroundImageFromCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)triggerSafariTabGroupSync;
- (void)fetchRemoteMigrationStateWithCompletionHandler:(id /* block */)a0;
- (void)triggerImmediateBackgroundImageSaveIfApplicable;
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)a0 closeRequestUUIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)registerForPushNotificationsIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(id /* block */)a0;
- (void)userAccountDidChange:(long long)a0;
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)a0 deviceUUIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteDevicesWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(id /* block */)a0;
- (void)saveCloudSettingWithDictionaryRepresentation:(id)a0 successCompletionHandler:(id /* block */)a1;
- (void)syncDownSafariSettingsSyncWithCompletion:(id /* block */)a0;
- (void)beginMigrationFromDAV;
- (void)dealloc;
- (void)scheduleCloudBackgroundImageSaveWithURL:(id)a0 isLightAppearance:(BOOL)a1 successCompletionHandler:(id /* block */)a2;
- (void)resetToDAVDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)saveCloudBackgroundImageWithURL:(id)a0 isLightAppearance:(BOOL)a1 successCompletionHandler:(id /* block */)a2;

@end
