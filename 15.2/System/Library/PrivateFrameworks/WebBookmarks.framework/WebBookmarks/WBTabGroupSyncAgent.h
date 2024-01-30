@class WBCollectionConfiguration, WBTabCollection, NSString;

@interface WBTabGroupSyncAgent : NSObject <WBTabGroupSyncAgentProtocol>

@property (readonly, nonatomic) WBCollectionConfiguration *configuration;
@property (retain, nonatomic) WBTabCollection *tabCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)applyChangeSet:(id)a0 completionHandler:(id /* block */)a1;
- (void)scheduleSyncIfNeeded;
- (void)saveBrowserState:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteTabGroup:(id)a0 completionHandler:(id /* block */)a1;
- (void)insertTabGroup:(id)a0 afterTabGroup:(id)a1 completionHandler:(id /* block */)a2;
- (void)moveTabGroup:(id)a0 afterTabGroup:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveTabGroup:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteTabs:(id)a0 completionHandler:(id /* block */)a1;
- (void)insertTabs:(id)a0 inTabGroup:(id)a1 afterTab:(id)a2 completionHandler:(id /* block */)a3;
- (void)moveTab:(id)a0 toTabGroup:(id)a1 afterTab:(id)a2 completionHandler:(id /* block */)a3;
- (void)reorderTab:(id)a0 afterTab:(id)a1 completionHandler:(id /* block */)a2;
- (void)replaceTab:(id)a0 withTab:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveTab:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateTabs:(id)a0 inTabGroup:(id)a1 completionHandler:(id /* block */)a2;
- (void)closeWindowState:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteWindowState:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteWindowStates:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveWindowState:(id)a0 completionHandler:(id /* block */)a1;
- (void)_performOnTabCollectionQueue:(id /* block */)a0 scheduleSync:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_applyChangeSet:(id)a0 completionHandler:(id /* block */)a1;

@end
