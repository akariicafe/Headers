@class NSString, NSXPCConnection;

@interface WBSSafariBookmarksSyncAgentProxy : NSObject <WBSSafariBookmarksSyncAgentProtocol>

@property (retain) NSXPCConnection *_connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProxy;

- (void)beginMigrationFromDAV;
- (void)registerForPushNotificationsIfNeeded;
- (id)init;
- (void).cxx_destruct;
- (void)collectDiagnosticsDataWithCompletionHandler:(id /* block */)a0;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)observeRemoteMigrationStateForSecondaryMigration;
- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(id /* block */)a0;
- (void)fetchRemoteMigrationStateWithCompletionHandler:(id /* block */)a0;
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteDevicesWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetToDAVDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)getCloudTabDevicesWithCompletionHandler:(id /* block */)a0;
- (void)userDidUpdateBookmarkDatabase;
- (void)clearLocalDataIncludingMigrationState:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setUsesOpportunisticPushTopic:(BOOL)a0;
- (void)getCloudTabContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)a0 closeRequestUUIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)migrateToCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)a0 deviceUUIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)userAccountDidChange:(long long)a0;
- (void)fetchCloudTabDevicesAndCloseRequests;

@end
