@class NSString, WBTabGroupManager, WBTabCollection, _WBTabCyclerTabGroupUpdateObserver, NSTimer, WBSDistributedNotificationObserver;

@interface WBTabCyclerCommandHandler : NSObject <WBSCyclerTestTarget> {
    WBTabCollection *_tabCollection;
    _WBTabCyclerTabGroupUpdateObserver *_tabGroupUpdateObserver;
    WBSDistributedNotificationObserver *_syncAgentNotificationObserver;
    NSTimer *_clearLocalTabGroupsRetryTimer;
}

@property (readonly, nonatomic) WBTabGroupManager *tabGroupManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabGroups;
- (void)dealloc;
- (id)deviceIdentifier;
- (void).cxx_destruct;
- (void)createBookmarkListWithTitle:(id)a0 inListWithIdentifier:(id)a1 atIndex:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)createBookmarkWithTitle:(id)a0 url:(id)a1 inListWithIdentifier:(id)a2 atIndex:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)clearBookmarksWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)deleteBookmarkWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)fetchTopLevelBookmarkList:(id /* block */)a0;
- (void)moveBookmarkWithIdentifier:(id)a0 intoListWithIdentifier:(id)a1 atIndex:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)setTitle:(id)a0 forBookmarkWithIdentifier:(id)a1 reply:(id /* block */)a2;
- (void)setURL:(id)a0 forBookmarkWithIdentifier:(id)a1 reply:(id /* block */)a2;
- (void)syncBookmarksWithCompletionHandler:(id /* block */)a0;
- (void)_startMonitoringSyncStatusWithCompletionHandler:(id /* block */)a0;
- (id)initWithTabGroupManager:(id)a0;
- (id)_mutableTabBeforeIndex:(unsigned long long)a0 inGroup:(id)a1;
- (void)_setTitle:(id)a0 forTabWithUUID:(id)a1 reply:(id /* block */)a2;
- (void)_clearLocalTabGroupsWithCompletionHandler:(id /* block */)a0;
- (void)_clearLocalTabGroupsWithCompletionHandler:(id /* block */)a0 retryCooldown:(double)a1;
- (void)_clearRemoteTabGroupsWithCompletionHandler:(id /* block */)a0;
- (id)_cyclerRepresentationOfTab:(id)a0;
- (id)_cyclerRepresentationOfTabGroup:(id)a0;
- (void)_deleteTab:(id)a0 reply:(id /* block */)a1;
- (void)_deleteTabGroup:(id)a0 reply:(id /* block */)a1;
- (void)_setTitle:(id)a0 forTabGroupWithUUID:(id)a1 reply:(id /* block */)a2;
- (void)_startMonitoringTabGroupUpdateExpectingMigration:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)_tabBeforeIndex:(unsigned long long)a0 inGroup:(id)a1;
- (id)_tabGroupBeforeIndex:(unsigned long long)a0;
- (id)_tabGroupWithIdentifier:(id)a0;
- (id)_tabWithIdentifier:(id)a0;
- (void)_triggerTabGroupSync;

@end
