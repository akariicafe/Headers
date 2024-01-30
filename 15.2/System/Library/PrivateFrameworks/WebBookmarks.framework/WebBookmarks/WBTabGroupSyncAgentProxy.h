@class NSString, NSXPCConnection;

@interface WBTabGroupSyncAgentProxy : NSObject <WBTabGroupSyncAgentProxyProtocol> {
    NSXPCConnection *_connection;
}

@property (class, readonly, nonatomic) WBTabGroupSyncAgentProxy *sharedProxy;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
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
- (id /* block */)emptyChangeSetCompletionHandler;
- (id /* block */)emptyCompletionHandler;
- (void)applyChangeSet:(id)a0 canSafelyTerminateCompletionHandler:(id /* block */)a1;
- (void)saveBrowserState:(id)a0 canSafelyTerminateCompletionHandler:(id /* block */)a1;

@end
