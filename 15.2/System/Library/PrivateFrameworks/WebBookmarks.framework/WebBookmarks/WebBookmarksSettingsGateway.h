@class WebBookmarksXPCConnection;

@interface WebBookmarksSettingsGateway : NSObject {
    WebBookmarksXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)init;
- (void)getSafariWebDataUsageWithCompletion:(id /* block */)a0;
- (void)deleteAllSafariSecurityOriginsWithCompletionHandler:(id /* block */)a0;
- (void)deleteSafariWebsiteDataRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSafariPersistentURLCacheStorageWithCompletionHandler:(id /* block */)a0;
- (void)getSafariDataUsageByteCountWithCompletionHandler:(id /* block */)a0;
- (void)clearAllSafariHistoryWithCompletionHandler:(id /* block */)a0;
- (void)scheduleBookmarksDatabaseMaintenance;
- (void)scheduleBookmarksDatabaseMigrationTask;
- (void)scheduleHSTSSuperCookieCleanup;
- (void)schedulePasswordIconsCleanup;

@end
