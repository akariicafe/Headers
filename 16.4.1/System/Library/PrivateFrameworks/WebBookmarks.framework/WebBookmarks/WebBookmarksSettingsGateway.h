@class WebBookmarksXPCConnection;

@interface WebBookmarksSettingsGateway : NSObject {
    WebBookmarksXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)schedulePasswordIconsCleanup;
- (void)clearAllSafariHistoryWithCompletionHandler:(id /* block */)a0;
- (void)deleteAllSafariSecurityOriginsWithCompletionHandler:(id /* block */)a0;
- (void)deleteSafariPersistentURLCacheStorageWithCompletionHandler:(id /* block */)a0;
- (void)deleteSafariWebsiteDataRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)getSafariDataUsageByteCountWithCompletionHandler:(id /* block */)a0;
- (void)getSafariWebDataUsageWithCompletion:(id /* block */)a0;
- (void)scheduleBookmarksDatabaseMaintenance;
- (void)scheduleBookmarksDatabaseMigrationTask;
- (void)scheduleHSTSSuperCookieCleanup;

@end
