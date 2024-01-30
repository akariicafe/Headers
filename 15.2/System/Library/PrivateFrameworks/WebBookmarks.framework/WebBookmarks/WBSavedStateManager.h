@protocol WBTabGroupSyncAgentProxyProtocol;

@interface WBSavedStateManager : NSObject

@property (class, readonly, nonatomic) WBSavedStateManager *ephemeralManager;

@property (readonly, nonatomic) id<WBTabGroupSyncAgentProxyProtocol> tabGroupSyncAgentProxy;
@property (readonly, nonatomic) BOOL isEphemeral;

- (void).cxx_destruct;
- (id)init;
- (void)saveTab:(id)a0;
- (void)scheduleSyncIfNeeded;
- (void)saveBrowserState:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveBrowserState:(id)a0 canSafelyTerminateCompletionHandler:(id /* block */)a1;
- (void)saveWindowState:(id)a0;
- (void)closeWindowState:(id)a0;
- (void)deleteWindowState:(id)a0;
- (void)deleteWindowStates:(id)a0;
- (void)saveBrowserState:(id)a0;
- (void)deleteTabGroup:(id)a0;
- (void)insertTabGroup:(id)a0 afterTabGroup:(id)a1;
- (void)moveTabGroup:(id)a0 afterTabGroup:(id)a1;
- (void)saveTabGroup:(id)a0;
- (void)deleteTabs:(id)a0;
- (void)insertTabs:(id)a0 inTabGroup:(id)a1 afterTab:(id)a2;
- (void)reorderTab:(id)a0 afterTab:(id)a1;
- (void)replaceTab:(id)a0 withTab:(id)a1;
- (id)initWithTabGroupSyncAgentProxy:(id)a0;
- (BOOL)_isDatabaseEnabled;
- (void)updateTabsInTabGroup:(id)a0;

@end
