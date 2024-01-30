@class SFBrowserStateSQLiteStore, NSArray, NSCountedSet, NSMutableArray;

@interface _SFBrowserSavedState : NSObject {
    SFBrowserStateSQLiteStore *_browserStateSQLiteStore;
    BOOL _checkPointWriteAheadLogOnNextUpdate;
    NSCountedSet *_tabCountByWindowUUID;
    BOOL _haveLoadedRecentlyClosedTabs;
}

@property (class, nonatomic) BOOL shouldMergeAllWindowsIfNeeded;

@property (copy, nonatomic) NSArray *browserWindows;
@property (retain, nonatomic) NSMutableArray *recentlyClosedTabs;
@property (nonatomic) BOOL secureDeleteEnabled;

+ (void)setSharedBrowserSavedState:(id)a0;
+ (id)ephemeralSavedState;
+ (id)sharedBrowserSavedState;

- (void)_checkPointWriteAheadLogIfNeeded;
- (void)_historyItemsWereRemoved:(id)a0;
- (void).cxx_destruct;
- (void)updateSceneID:(id)a0;
- (void)clearRecentlyClosedTabs;
- (id)initWithDatabaseURL:(id)a0;
- (id)tabStateDataForUUID:(id)a0;
- (void)_readRecentlyClosedTabsStateIfNecessary;
- (id)initWithDefaultBrowserStateDatabase;
- (void)dealloc;
- (void)updateBrowserWindowState:(id)a0 tabs:(id)a1;
- (void)setActiveDocumentIsValid:(BOOL)a0 forBrowserControllerWithUUID:(id)a1;
- (void)removeTabStateWithTabData:(id)a0;
- (void)_readBrowserControllersSavedState;
- (void)_removeRecentlyClosedTabStateData:(id)a0;
- (id)readSavedSessionStateDataForTabWithUUID:(id)a0;
- (id)initWithInMemoryDatabase;
- (void)removeTabsStateForBrowserControllerWithUUID:(id)a0 andRemoveWindow:(BOOL)a1;
- (BOOL)activeDocumentIsValidForBrowserControllerWithUUID:(id)a0;
- (void)regenerateTabUUIDsForDeviceRestoration;
- (void)removeRecentlyClosedTabWithStateData:(id)a0;
- (void)loadSessionStateDataAndRemoveRecentlyClosedTab:(id)a0;
- (void)clearAllSavedStatesAndCloseDatabase;
- (void)saveTabsState:(id)a0 forBrowserControllerWithUUID:(id)a1 completion:(id /* block */)a2;
- (void)saveTabStateData:(id)a0;
- (void)clearAllSavedStatesClosingDatabase:(BOOL)a0;
- (void)_notifyThatRecentlyClosedTabsWereRemoved:(id)a0;
- (id)savedTabsStateForBrowserControllerWithUUID:(id)a0;
- (void)addRecentlyClosedTabs:(id)a0;

@end
