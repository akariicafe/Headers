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

- (id)initWithDatabaseURL:(id)a0;
- (id)tabStatesWithBrowserWindowUUID:(id)a0;
- (int)_schemaVersion;
- (void)_cacheUUIDForTabStateData:(id)a0;
- (void)readTabStatesWithBrowserWindowUUID:(id)a0 completion:(id /* block */)a1;
- (int)_migrateToSchemaVersion_4;
- (BOOL)_isDatabaseOpen;
- (void)_updateBrowserWindowStateWithDictionary:(id)a0;
- (void)_setDatabaseID:(long long)a0 browserWindow:(id)a1;
- (void)_vacuum;
- (BOOL)_updateTabStateWithData:(id)a0;
- (void)saveTabStateWithDictionary:(id)a0;
- (int)_migrateToSchemaVersion_3;
- (void)_readTabStatesWithBrowserWindowUUID:(id)a0 completion:(id /* block */)a1;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (void)_migrateFromLegacyPlistWithPath:(id)a0;
- (int)_createTableForTabSession;
- (void)removeSavedSessionStateDataForTabsWithUUIDStrings:(id)a0;
- (BOOL)_isTabStateCached:(id)a0;
- (void)updateBrowserWindowWithData:(id)a0 tabs:(id)a1;
- (void)deleteAllRecentlyClosedWindows;
- (int)_mergeAllWindowsIfNeeded;
- (BOOL)deleteAllSavedStates;
- (long long)_databaseIDForBrowserWindow:(id)a0;
- (BOOL)updateSceneID:(id)a0;
- (void)_insertTabStateWithData:(id)a0;
- (int)_migrateToSchemaVersion_5;
- (BOOL)deleteTabStateWithBrowserWindowUUID:(id)a0 andRemoveWindow:(BOOL)a1;
- (void)_migrateFromLegacyPlistIfNeeded;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (int)_createTableForTabs;
- (void)_updateOrInsertTabStateWithData:(id)a0;
- (void).cxx_destruct;
- (id)tabStateDataForUUID:(id)a0;
- (void)_closeDatabase;
- (id)init;
- (void)_updateBrowserWindowWithData:(id)a0 tabs:(id)a1;
- (void)regenerateTabUUIDsForDeviceRestoration;
- (void)_openDatabaseAndCheckIntegrity:(BOOL)a0;
- (void)removeTabWithTabData:(id)a0;
- (void)mergeAllWindows;
- (void)updateBrowserWindowStateWithDictionary:(id)a0 completion:(id /* block */)a1;
- (id)_readSavedSessionStateDataForTabWithUUIDString:(id)a0;
- (id)_tabStateDataForUUID:(id)a0;
- (int)_recoverFromDatabaseInconsistencyFromSchemaVersion3Migration;
- (id)_sqliteStatementForTabDeleting;
- (void)_regenerateTabUUIDsForDeviceRestoration;
- (int)_migrateToSchemaVersion:(int)a0;
- (void)setSecureDeleteEnabled:(BOOL)a0;
- (void)checkPointWriteAheadLog;
- (long long)_saveBrowserWindowStateWithData:(id)a0;
- (void)closeDatabase;
- (void)dealloc;
- (void)_removeSavedSessionStateDataForTabsWithUUIDStrings:(id)a0;
- (id)readSavedSessionStateDataForTabWithUUIDString:(id)a0;
- (long long)_saveBrowserWindowStateWithDictionary:(id)a0;
- (int)_migrateToSchemaVersion_2;
- (void)updateTabWithTabStateData:(id)a0;
- (int)_createFreshDatabaseSchema;
- (id)_tabUUIDsInWindow:(id)a0;
- (BOOL)_checkDatabaseIntegrity;

@end
