@class NSHashTable, NSString, EFQuery, NSOrderedSet, NSMutableSet, NSObject, NSMutableOrderedSet, EFFuture, EFPromise;
@protocol OS_os_log, EFCancelable, EFScheduler;

@interface EMCollection : EMRepositoryObject <EFLoggable, EFSignpostable> {
    NSMutableOrderedSet *_itemIDs;
    NSMutableSet *_itemIDsAnticipatingDelete;
    NSOrderedSet *_recoveringItemIDs;
    EFPromise *_allItemIDsPromise;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _itemIDsLock;
    BOOL _foundAllItemIDs;
    BOOL _foundFirstBatch;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _changeObserversLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (retain, nonatomic) id<EFCancelable> cancelationToken;
@property (retain, nonatomic) NSHashTable *changeObservers;
@property (readonly, nonatomic) id<EFScheduler> queryScheduler;
@property (readonly, nonatomic) id<EFScheduler> observerScheduler;
@property (readonly, nonatomic) EFQuery *query;
@property (readonly, nonatomic) EFFuture *allItemIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

+ (BOOL)supportsSecureCoding;

- (void)stopObserving:(id)a0;
- (void).cxx_destruct;
- (void)_commonInitWithQuery:(id)a0;
- (id)_firstExistingItemIDForItemID:(id)a0 inReverse:(BOOL)a1;
- (id)_iterateItemIDsStartingAtItemID:(id)a0 inReverse:(BOOL)a1 includeStartingItem:(BOOL)a2 withBlock:(id /* block */)a3;
- (id)firstExistingItemIDAfterItemID:(id)a0;
- (id)firstExistingItemIDBeforeItemID:(id)a0;
- (void)_performQueryIfNeeded;
- (void)_cancelQuery;
- (void)_performQuery;
- (BOOL)isRecovering;
- (void)enumerateObserversWithBlock:(id /* block */)a0;
- (void)notifyChangeObserverAboutStockedItemIDs:(id)a0;
- (void)insertItemIDs:(id)a0 before:(id)a1;
- (void)notifyChangeObserversAboutAddedItemIDs:(id)a0 before:(id)a1 extraInfo:(id)a2;
- (void)_filterAndTransformObjectIDs:(id)a0 before:(BOOL)a1 existingObjectID:(id)a2 batchBlock:(id /* block */)a3;
- (void)insertItemIDs:(id)a0 after:(id)a1;
- (void)notifyChangeObserversAboutAddedItemIDs:(id)a0 after:(id)a1 extraInfo:(id)a2;
- (id)_itemIDsForObjectIDs:(id)a0;
- (id)itemIDForObjectID:(id)a0;
- (void)notifyChangeObserversAboutChangesByItemIDs:(id)a0;
- (id)removeItemIDs:(id)a0;
- (void)finishRecovery;
- (void)dealloc;
- (void)_cancelQueryIfNeeded;
- (BOOL)objectIDBelongsToCollection:(id)a0;
- (BOOL)containsItemID:(id)a0 includeRecovery:(BOOL)a1;
- (void)notifyChangeObserver:(id)a0 stockedItemIDs:(id)a1;
- (id)objectIDForItemID:(id)a0;
- (id)iterateItemIDsStartingAtItemID:(id)a0 inReverse:(BOOL)a1 withBlock:(id /* block */)a2;
- (void)queryDidStartRecovery;
- (void)queryMatchedAddedObjectIDs:(id)a0 before:(id)a1 extraInfo:(id)a2;
- (void)queryMatchedAddedObjectIDs:(id)a0 after:(id)a1 extraInfo:(id)a2;
- (void)queryMatchedMovedObjectIDs:(id)a0 before:(id)a1;
- (void)queryMatchedMovedObjectIDs:(id)a0 after:(id)a1;
- (id)initWithObjectID:(id)a0 query:(id)a1;
- (void)queryMatchedChangesByObjectIDs:(id)a0;
- (void)queryAnticipatesDeletedObjectIDs:(id)a0;
- (void)queryMatchedDeletedObjectIDs:(id)a0;
- (void)queryDidFinishInitialLoad;
- (void)queryDidFinishRemoteSearch;
- (BOOL)observerContainsObjectID:(id)a0;
- (void)queryReplacedObjectID:(id)a0 withNewObjectID:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithQuery:(id)a0 repository:(id)a1;
- (void)beginObserving:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
