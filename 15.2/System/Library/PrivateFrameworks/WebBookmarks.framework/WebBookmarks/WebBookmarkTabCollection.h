@class NSArray, WebBookmarkList, WBWindowState;

@interface WebBookmarkTabCollection : WebBookmarkCollection {
    int _cachedPinnedTabsFolderID;
    int _cachedPrivatePinnedTabsFolderID;
}

@property (readonly, copy, nonatomic) NSArray *pinnedTabs;
@property (readonly, nonatomic) int pinnedTabsFolderID;
@property (readonly, copy, nonatomic) NSArray *privatePinnedTabs;
@property (readonly, nonatomic) int privatePinnedTabsFolderID;
@property (readonly, copy, nonatomic) NSArray *recentlyClosedTabs;
@property (readonly, copy, nonatomic) WebBookmarkList *recentlyClosedTabList;
@property (readonly, nonatomic) int windowsFolderSpecialID;
@property (readonly, copy, nonatomic) NSArray *windows;
@property (readonly, nonatomic) WBWindowState *lastClosedWindowState;
@property (readonly, copy, nonatomic) NSArray *lastSessionWindowStates;
@property (readonly, copy, nonatomic) NSArray *recentlyClosedWindowStates;
@property (readonly, copy, nonatomic) NSArray *windowStates;

+ (id)inMemoryChangesFileURL;
+ (id)_syncLockFileName;
+ (id)inMemoryChangeSet;

- (void)performMaintenance;
- (BOOL)_restoreMissingSpecialBookmarksWithChangeNotification:(BOOL)a0;
- (void)_createSchema;
- (void)createWindowsTable;
- (void)createWindowsTabGroupsTable;
- (void)_createSpecialTabsFolderWithUUIDIfNeeded:(id)a0;
- (void)_createSpecialFolderWithIDIfNeeded:(int)a0;
- (BOOL)_deleteMatchingWindows:(id)a0 logAsError:(BOOL)a1;
- (void)_resetBookmark:(id)a0;
- (id)tabGroupForBookmark:(id)a0;
- (BOOL)saveWindow:(id)a0;
- (id)windowStateWithUUID:(id)a0;
- (BOOL)saveWindowState:(id)a0;
- (id)_uuidForQueries:(id)a0;
- (BOOL)_deleteAllWindowStates;
- (void)_migrateWindow:(id)a0;
- (void)_logErrorWithMessage:(id)a0 result:(int)a1;
- (id)tabsForTabGroupBookmark:(id)a0;
- (id)_windowWithBookmark:(id)a0;
- (id)_windowStatesWithFilter:(id)a0;
- (int)_windowIDForUUID:(id)a0;
- (id)_tabGroupWithID:(int)a0;
- (void)_addActiveTabsToWindowState:(id)a0;
- (BOOL)_saveWindowState:(id)a0 forApplyingInMemoryChanges:(BOOL)a1;
- (BOOL)_saveWindowState:(id)a0;
- (BOOL)_saveWindowState:(id)a0 activeTabGroupID:(int)a1 localTabGroupID:(int)a2 privateTabGroupID:(int)a3;
- (BOOL)_saveActiveTabID:(int)a0 inTabGroupWithID:(int)a1 windowID:(int)a2;
- (BOOL)_deleteWindowState:(id)a0 forApplyingInMemoryChanges:(BOOL)a1;
- (BOOL)_deleteWindowState:(id)a0;
- (id)_specialTabFolderUUIDsForQueries;
- (id)_databaseTitleForSpecialID:(int)a0;
- (id)_specialTabFolderUUIDs;
- (id)_specialTabsWithUUID:(id)a0;
- (void)_setupInMemoryChangeSet;
- (void)_migrateWindowState:(id)a0;
- (void)_migrateSchemaVersion43ToVersion44;
- (void)_migrateSchemaVersion44ToVersion45;
- (void)logRegulatoryBookmarksRead;
- (id)windowWithUUID:(id)a0;
- (BOOL)deleteAllWindows;
- (BOOL)closeWindowState:(id)a0;
- (BOOL)deleteWindowState:(id)a0;
- (BOOL)deleteWindowStates:(id)a0;
- (BOOL)deleteAllWindowStates;
- (BOOL)_deleteAllLocalTabsAndGroups;
- (BOOL)_markTabsClosed:(id)a0;
- (BOOL)_markWindowStatesAsLastSession:(id)a0;

@end
