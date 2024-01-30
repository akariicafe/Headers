@class SFBrowserStateSQLiteStore, NSArray, NSCountedSet, NSMutableArray;

@interface _SFBrowserSavedState : NSObject {
    SFBrowserStateSQLiteStore *_browserStateSQLiteStore;
    BOOL _checkPointWriteAheadLogOnNextUpdate;
    NSCountedSet *_tabCountByWindowUUID;
    BOOL _haveLoadedRecentlyClosedTabs;
}

@property (class, nonatomic) BOOL shouldMergeAllWindowsIfNeeded;
@property (class, retain, nonatomic) _SFBrowserSavedState *sharedBrowserSavedState;

@property (copy, nonatomic) NSArray *browserWindows;
@property (retain, nonatomic) NSMutableArray *recentlyClosedTabs;
@property (nonatomic) BOOL secureDeleteEnabled;
@property (readonly, nonatomic) BOOL shouldBeUsedDuringTest;

+ (id)defaultBrowserStateDatabase;
+ (id)inMemoryDatabase;
+ (id)ephemeralSavedState;
+ (id)defaultPPTBrowserStateDatabase;

- (id)initWithDatabaseURL:(id)a0;
- (void)_historyItemsWereRemoved:(id)a0;
- (void)updateSceneID:(id)a0;
- (void).cxx_destruct;
- (id)tabStateDataForUUID:(id)a0;
- (void)regenerateTabUUIDsForDeviceRestoration;
- (void)dealloc;
- (void)_readBrowserControllersSavedState;
- (void)_checkPointWriteAheadLogIfNeeded;
- (void)clearAllSavedStatesClosingDatabase:(BOOL)a0;
- (void)_readRecentlyClosedTabsStateIfNecessary;
- (void)updateBrowserWindowState:(id)a0 tabs:(id)a1;
- (void)_removeRecentlyClosedTabStateData:(id)a0;
- (void)_notifyThatRecentlyClosedTabsWereRemoved:(id)a0;
- (void)removeTabsStateForBrowserControllerWithUUID:(id)a0 andRemoveWindow:(BOOL)a1;
- (void)removeTabStateWithTabData:(id)a0;
- (id)savedTabsStateForBrowserControllerWithUUID:(id)a0;
- (void)saveTabsState:(id)a0 forBrowserControllerWithUUID:(id)a1 completion:(id /* block */)a2;
- (void)setActiveDocumentIsValid:(BOOL)a0 forBrowserControllerWithUUID:(id)a1;
- (BOOL)activeDocumentIsValidForBrowserControllerWithUUID:(id)a0;
- (void)saveTabStateData:(id)a0;
- (void)clearAllSavedStatesAndCloseDatabase;
- (id)readSavedSessionStateDataForTabWithUUID:(id)a0;
- (void)addRecentlyClosedTabs:(id)a0;
- (void)loadSessionStateDataAndRemoveRecentlyClosedTab:(id)a0;
- (void)clearRecentlyClosedTabs;
- (void)removeRecentlyClosedTabWithStateData:(id)a0;

@end
