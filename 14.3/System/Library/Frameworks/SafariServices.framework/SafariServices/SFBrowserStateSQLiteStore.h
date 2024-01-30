@class NSArray, WBSSQLiteDatabase, NSURL, NSMutableDictionary, NSObject, WBSSQLiteStatement;
@protocol OS_dispatch_queue;

@interface SFBrowserStateSQLiteStore : NSObject {
    NSURL *_databaseURL;
    WBSSQLiteDatabase *_database;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSMutableDictionary *_tabUUIDStrings;
    NSMutableDictionary *_browserWindowDatabaseIDs;
    WBSSQLiteStatement *_cachedTabDeleteStatement;
    BOOL _generateUUIDFunctionAttached;
}

@property (readonly, copy, nonatomic) NSArray *browserWindows;
@property (readonly, copy, nonatomic) NSArray *recentlyClosedWindows;

- (void)_migrateFromLegacyPlistIfNeeded;
- (void)updateTabWithTabStateData:(id)a0;
- (void)removeSavedSessionStateDataForTabsWithUUIDStrings:(id)a0;
- (long long)_databaseIDForBrowserWindow:(id)a0;
- (id)init;
- (id)_sqliteStatementForTabDeleting;
- (void)updateBrowserWindowWithData:(id)a0 tabs:(id)a1;
- (int)_createTableForTabSession;
- (void)_removeSavedSessionStateDataForTabsWithUUIDStrings:(id)a0;
- (void)checkPointWriteAheadLog;
- (int)_migrateToSchemaVersion:(int)a0;
- (void).cxx_destruct;
- (int)_mergeAllWindowsIfNeeded;
- (void)_readTabStatesWithBrowserWindowUUID:(id)a0 completion:(id /* block */)a1;
- (BOOL)updateSceneID:(id)a0;
- (void)_migrateFromLegacyPlistWithPath:(id)a0;
- (void)removeTabWithTabData:(id)a0;
- (id)initWithDatabaseURL:(id)a0;
- (id)tabStateDataForUUID:(id)a0;
- (void)_openDatabaseAndCheckIntegrity:(BOOL)a0;
- (void)dealloc;
- (id)readSavedSessionStateDataForTabWithUUIDString:(id)a0;
- (void)setSecureDeleteEnabled:(BOOL)a0;
- (void)_insertTabStateWithData:(id)a0;
- (void)_updateBrowserWindowStateWithDictionary:(id)a0;
- (void)_updateBrowserWindowWithData:(id)a0 tabs:(id)a1;
- (int)_migrateToSchemaVersion_3;
- (void)_regenerateTabUUIDsForDeviceRestoration;
- (int)_recoverFromDatabaseInconsistencyFromSchemaVersion3Migration;
- (void)_updateOrInsertTabStateWithData:(id)a0;
- (int)_schemaVersion;
- (void)saveTabStateWithDictionary:(id)a0;
- (void)closeDatabase;
- (int)_migrateToSchemaVersion_2;
- (void)deleteAllRecentlyClosedWindows;
- (void)readTabStatesWithBrowserWindowUUID:(id)a0 completion:(id /* block */)a1;
- (BOOL)deleteAllSavedStates;
- (void)updateBrowserWindowStateWithDictionary:(id)a0 completion:(id /* block */)a1;
- (void)mergeAllWindows;
- (id)_readSavedSessionStateDataForTabWithUUIDString:(id)a0;
- (int)_createFreshDatabaseSchema;
- (BOOL)_isDatabaseOpen;
- (BOOL)_updateTabStateWithData:(id)a0;
- (void)regenerateTabUUIDsForDeviceRestoration;
- (BOOL)deleteTabStateWithBrowserWindowUUID:(id)a0 andRemoveWindow:(BOOL)a1;
- (int)_createTableForTabs;
- (id)_tabUUIDsInWindow:(id)a0;
- (void)_closeDatabase;
- (int)_migrateToSchemaVersion_5;
- (void)_cacheUUIDForTabStateData:(id)a0;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (int)_migrateToSchemaVersion_4;
- (id)tabStatesWithBrowserWindowUUID:(id)a0;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (long long)_saveBrowserWindowStateWithData:(id)a0;
- (BOOL)_checkDatabaseIntegrity;
- (long long)_saveBrowserWindowStateWithDictionary:(id)a0;
- (void)_setDatabaseID:(long long)a0 browserWindow:(id)a1;
- (void)_vacuum;
- (BOOL)_isTabStateCached:(id)a0;
- (id)_tabStateDataForUUID:(id)a0;

@end
