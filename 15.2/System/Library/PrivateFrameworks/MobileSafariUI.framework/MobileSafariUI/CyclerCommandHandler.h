@class WBDatabaseLockAcquisitor, NSString, WebBookmarkCollection, NSMutableArray, WBSDistributedNotificationObserver;

@interface CyclerCommandHandler : NSObject <WBDatabaseLockAcquisitorDelegate, WBSCyclerTestTarget> {
    WebBookmarkCollection *_bookmarkCollection;
    NSMutableArray *_blocksAwaitingDatabaseLock;
    WBSDistributedNotificationObserver *_syncAgentNotificationObserver;
    WBDatabaseLockAcquisitor *_bookmarkDatabaseLockAcquisitor;
    BOOL _isWaitingToAcquireLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBookmarkCollection:(id)a0;
- (void)databaseLockAcquisitor:(id)a0 acquiredLock:(BOOL)a1;
- (void)fetchTopLevelBookmarkList:(id /* block */)a0;
- (void)syncBookmarksWithCompletionHandler:(id /* block */)a0;
- (void)clearBookmarksWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)createBookmarkWithTitle:(id)a0 url:(id)a1 inListWithIdentifier:(id)a2 atIndex:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)createBookmarkListWithTitle:(id)a0 inListWithIdentifier:(id)a1 atIndex:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)deleteBookmarkWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)moveBookmarkWithIdentifier:(id)a0 intoListWithIdentifier:(id)a1 atIndex:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)setTitle:(id)a0 forBookmarkWithIdentifier:(id)a1 reply:(id /* block */)a2;
- (void)setURL:(id)a0 forBookmarkWithIdentifier:(id)a1 reply:(id /* block */)a2;
- (id)_cyclerRepresentationOfBookmark:(id)a0;
- (void)_tryToAcquireDatabaseLockWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)_adjustInsertionIndex:(unsigned long long)a0 forInsertionIntoListWithIdentifier:(int)a1;
- (BOOL)_isSpecialBookmark:(id)a0;
- (BOOL)_isBookmarkSyncEnabled;
- (void)_startMonitoringSyncStatusWithCompletionHandler:(id /* block */)a0;

@end
