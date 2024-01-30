@class EMThreadScope, NSString, NSMapTable, EFLazyCache, NSSet, EMCollectionItemIDStateCapturer, EMObjectID, NSObject, EMMailboxScope, EMMessageRepository, NSMutableDictionary;
@protocol OS_os_log, EFScheduler, OS_dispatch_queue;

@interface EMMessageList : EMCollection <EFContentProtectionObserver, EFLoggable, EMCollectionChangeObserver, EMCollectionItemIDStateCapturerDelegate, EMMessageListQueryResultsObserver> {
    NSMutableDictionary *_expandedThreads;
    NSMapTable *_messageListItemsForRetry;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _expandedThreadsLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EMMessageRepository *repository;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope;
@property (readonly, nonatomic) EMThreadScope *threadScope;
@property (readonly, nonatomic) EFLazyCache *cache;
@property (readonly, nonatomic) id<EFScheduler> observerScheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (retain, nonatomic) EMMessageList *unfilteredMessageList;
@property (retain, nonatomic) NSSet *recentlyCollapsedItemIDs;
@property (readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer;
@property (readonly, nonatomic) BOOL isThreaded;
@property (readonly, copy) NSSet *expandedThreadItemIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) EMObjectID *objectID;

+ (id)groupedSenderMessageListForMailboxes:(id)a0 senderBuckets:(id)a1 includeVIPs:(BOOL)a2 limitDate:(id)a3 withRepository:(id)a4;
+ (id)simpleMessageListForMailboxes:(id)a0 withRepository:(id)a1 shouldTrackOldestItems:(BOOL)a2 shouldUpdateDisplayDate:(BOOL)a3;
+ (id)simpleMessageListForMailboxes:(id)a0 withRepository:(id)a1 shouldTrackOldestItems:(BOOL)a2 shouldUpdateDisplayDate:(BOOL)a3 sortDescriptor:(id)a4 transformPredicate:(id /* block */)a5 ignoreMessageAdditionsPredicate:(id)a6;
+ (id)threadedMessageListForMailboxes:(id)a0 withRepository:(id)a1 shouldTrackOldestItems:(BOOL)a2 shouldUpdateDisplayDate:(BOOL)a3;
+ (id)threadedMessageListForMailboxes:(id)a0 withRepository:(id)a1 shouldTrackOldestItems:(BOOL)a2 shouldUpdateDisplayDate:(BOOL)a3 sortDescriptor:(id)a4 transformPredicate:(id /* block */)a5 ignoreMessageAdditionsPredicate:(id)a6;

- (void)stopObserving:(id)a0;
- (void)setRepository:(id)a0;
- (void)dealloc;
- (id)labelForStateCapture;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (void).cxx_destruct;
- (id)ef_publicDescription;
- (void)collection:(id)a0 addedItemIDs:(id)a1 before:(id)a2;
- (void)collectionDidFinishInitialLoad:(id)a0;
- (void)collection:(id)a0 movedItemIDs:(id)a1 before:(id)a2;
- (void)collection:(id)a0 addedItemIDs:(id)a1 after:(id)a2;
- (void)collection:(id)a0 changedItemIDs:(id)a1;
- (void)collection:(id)a0 deletedItemIDs:(id)a1;
- (void)collection:(id)a0 movedItemIDs:(id)a1 after:(id)a2;
- (void)collection:(id)a0 replacedExistingItemID:(id)a1 withNewItemID:(id)a2;
- (id)initWithQuery:(id)a0 repository:(id)a1;
- (id)messageListItemForItemID:(id)a0;
- (void)queryMatchedChangesByObjectIDs:(id)a0;
- (id)_expandedObjectIDsForObjectIDs:(id)a0;
- (void)collapseThread:(id)a0;
- (void)expandThreadsFromThreadItemIDs:(id)a0;
- (void)_attemptToFinishRetryingPromisesByItemID:(id)a0;
- (id)_availableMessageListItemsForItemIDs:(id)a0;
- (void)_commonInitWithRepository:(id)a0;
- (id)_hintsByObjectIDFromExtraInfo:(id)a0;
- (id)_nextThreadItemIDAfterThreadItemID:(id)a0;
- (BOOL)_threadIsExpanded:(id)a0;
- (BOOL)_threadIsExpandedForItemID:(id)a0;
- (id)_unreadItemIDsFromExtraInfo:(id)a0;
- (BOOL)anyExpandedThreadContainsItemID:(id)a0;
- (void)clearRecentlyCollapsedThread;
- (void)collection:(id)a0 changedItemIDs:(id)a1 itemIDsWithCountChanges:(id)a2;
- (void)expandThread:(id)a0;
- (id)filteredMessageListWithPredicate:(id)a0 ignoredMessagesPredicate:(id)a1;
- (void)finishRecovery;
- (id)initWithMailboxes:(id)a0 repository:(id)a1 sortDescriptor:(id)a2 transformPredicate:(id /* block */)a3 ignoreMessageAdditionsPredicate:(id)a4 targetClass:(Class)a5 shouldTrackOldestItems:(BOOL)a6 shouldUpdateDisplayDate:(BOOL)a7 labelPrefix:(id)a8;
- (id)initWithObjectID:(id)a0 query:(id)a1 repository:(id)a2;
- (void)invalidateCacheForItemIDs:(id)a0;
- (id)itemIDForObjectID:(id)a0;
- (id)itemIDOfFirstMessageListItemMatchingPredicate:(id)a0;
- (id)itemIDOfMessageListItemWithDisplayMessage:(id)a0;
- (id)itemIDsForStateCaptureWithErrorString:(id *)a0;
- (id)messageListItemForItemID:(id)a0 ifAvailable:(BOOL)a1;
- (id)messageListItemsForItemIDs:(id)a0;
- (id)messageListItemsForItemIDs:(id)a0 ifAvailable:(BOOL)a1;
- (void)notifyChangeObserver:(id)a0 stockedItemIDs:(id)a1;
- (void)notifyChangeObserversAboutAddedItemIDs:(id)a0 after:(id)a1 extraInfo:(id)a2;
- (void)notifyChangeObserversAboutAddedItemIDs:(id)a0 before:(id)a1 extraInfo:(id)a2;
- (void)notifyChangeObserversAboutChangesByItemIDs:(id)a0;
- (BOOL)objectIDBelongsToCollection:(id)a0;
- (id)objectIDForItemID:(id)a0;
- (void)queryMatchedMovedObjectIDs:(id)a0 after:(id)a1;
- (void)queryMatchedMovedObjectIDs:(id)a0 before:(id)a1;
- (void)queryMatchedOldestItemsUpdatedForMailboxesObjectIDs:(id)a0;
- (BOOL)recentlyCollapsedThreadContainsItemID:(id)a0;
- (id)removeItemIDs:(id)a0;

@end
