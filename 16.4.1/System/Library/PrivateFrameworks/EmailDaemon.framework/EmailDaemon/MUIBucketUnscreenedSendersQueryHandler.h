@class NSString, EMObjectID, EDGroupedSenderQueryHandler, NSMutableArray;
@protocol EFScheduler, EMMessageRepositoryUnscreenedSendersQueryObserver_xpc;

@interface MUIBucketUnscreenedSendersQueryHandler : NSObject <EMMessageListItemQueryResultsObserver, EFCancelable> {
    NSMutableArray *_groupedSenderObjectIDs;
}

@property (retain, nonatomic) EMObjectID *objectID;
@property (retain, nonatomic) EDGroupedSenderQueryHandler *groupedSenderQueryHandler;
@property (retain, nonatomic) id<EMMessageRepositoryUnscreenedSendersQueryObserver_xpc> observer;
@property (retain, nonatomic) id<EFScheduler> scheduler;
@property (nonatomic) BOOL didFinishInitialLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (BOOL)start;
- (void).cxx_destruct;
- (void)observer:(id)a0 matchedAddedObjectIDs:(id)a1 after:(id)a2 extraInfo:(id)a3;
- (void)observer:(id)a0 matchedAddedObjectIDs:(id)a1 before:(id)a2 extraInfo:(id)a3;
- (void)observer:(id)a0 matchedChangesForObjectIDs:(id)a1;
- (void)observer:(id)a0 matchedDeletedObjectIDs:(id)a1;
- (void)observer:(id)a0 matchedMovedObjectIDs:(id)a1 after:(id)a2;
- (void)observer:(id)a0 matchedMovedObjectIDs:(id)a1 before:(id)a2;
- (void)observer:(id)a0 matchedOldestItemsUpdatedForMailboxes:(id)a1;
- (void)observer:(id)a0 replacedExistingObjectID:(id)a1 withNewObjectID:(id)a2;
- (void)observer:(id)a0 wasUpdated:(id)a1;
- (void)observerDidFinishInitialLoad:(id)a0;
- (void)observerWillRestart:(id)a0;
- (void)_addNewObjectIDs:(id)a0 after:(id)a1;
- (void)_addNewObjectIDs:(id)a0 before:(id)a1;
- (void)_notifyObserverOfLatestGroupedSenders;
- (id)initWithQuery:(id)a0 messagePersistence:(id)a1 hookRegistry:(id)a2 remindMeNotificationController:(id)a3 observer:(id)a4;

@end
