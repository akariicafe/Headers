@class WebBookmarkChangeSet, WebBookmarkTabCollection, NSArray, NSError, NSString, WBBrowserState, NSObject, WBCollectionConfiguration;
@protocol OS_dispatch_queue;

@interface WBTabCollection : NSObject <WBStateProvider> {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (class, readonly, nonatomic) WebBookmarkChangeSet *inMemoryChangeSet;

@property (readonly, nonatomic) WebBookmarkTabCollection *tabCollection;
@property (readonly, nonatomic) WBCollectionConfiguration *configuration;
@property (nonatomic, getter=hasCompletedMigration) BOOL completedMigration;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL isLockedSync;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly, nonatomic) WBBrowserState *browserState;
@property (readonly, nonatomic) WBBrowserState *lastSessionBrowserState;
@property (readonly, copy, nonatomic) NSArray *windowStates;
@property (readonly, nonatomic) int windowsFolderSpecialID;
@property (readonly, copy, nonatomic) NSArray *windows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int pinnedTabsFolderID;
@property (readonly, nonatomic) int privatePinnedTabsFolderID;
@property (readonly, copy, nonatomic) NSArray *recentlyClosedTabs;
@property (readonly, copy, nonatomic) NSArray *tabGroups;
@property (nonatomic) unsigned long long maximumTabsPerGroup;

+ (id)inMemoryChangesFileURL;
+ (id)databasePathForConfiguration:(id)a0;

- (id)tabGroupWithUUID:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)performMaintenance;
- (void).cxx_destruct;
- (BOOL)lockSync;
- (BOOL)saveTab:(id)a0;
- (id)initWithConfiguration:(id)a0 checkIntegrity:(BOOL)a1;
- (void)unlockSync;
- (BOOL)saveWindow:(id)a0;
- (id)windowStateWithUUID:(id)a0;
- (BOOL)saveWindowState:(id)a0;
- (id)windowWithUUID:(id)a0;
- (BOOL)closeWindowState:(id)a0;
- (BOOL)deleteWindowState:(id)a0;
- (BOOL)deleteWindowStates:(id)a0;
- (BOOL)deleteAllWindowStates;
- (id)applyInMemoryChanges:(id)a0;
- (id)tabWithUUID:(id)a0;
- (BOOL)saveBrowserState:(id)a0;
- (BOOL)deleteTabGroup:(id)a0;
- (BOOL)insertTabGroup:(id)a0 afterTabGroup:(id)a1;
- (BOOL)moveTabGroup:(id)a0 afterTabGroup:(id)a1;
- (BOOL)saveTabGroup:(id)a0;
- (BOOL)deleteTabs:(id)a0;
- (BOOL)insertTabs:(id)a0 inTabGroup:(id)a1 afterTab:(id)a2;
- (BOOL)moveTab:(id)a0 toTabGroup:(id)a1 afterTab:(id)a2;
- (BOOL)reorderTab:(id)a0 afterTab:(id)a1;
- (BOOL)replaceTab:(id)a0 withTab:(id)a1;
- (BOOL)updateTabs:(id)a0 inTabGroup:(id)a1;
- (id)tabsForTabGroup:(id)a0;
- (void)_createInternalQueue;
- (BOOL)_updatePinnedTabs:(id)a0 privatePinnedTabs:(id)a1;
- (id)_bookmarksForTabs:(id)a0;
- (BOOL)_insertBookmark:(id)a0 afterBookmark:(id)a1 inFolderWithID:(int)a2;
- (BOOL)_reorderTab:(id)a0 afterTab:(id)a1;
- (id)_bookmarksForTabs:(id)a0 syncable:(BOOL)a1;
- (id)initWithTabCollection:(id)a0;
- (BOOL)deleteAllLocalSavedState;
- (BOOL)saveRecentlyClosedTabs:(id)a0;
- (BOOL)deleteAllRecentlyClosedTabs;
- (BOOL)insertTab:(id)a0 inTabGroup:(id)a1 afterTab:(id)a2;
- (BOOL)_resultOnInternalQueue:(id /* block */)a0;

@end
