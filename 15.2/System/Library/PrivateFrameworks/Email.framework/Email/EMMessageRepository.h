@class NSURL, NSMapTable, EMRemoteConnectionRecoveryAssertion, NSObject, EFPromise, EMRemoteConnection, NSString, EMRemoteContentURLCache, NSHashTable, EMMailboxRepository, NSArray, NSXPCInterface, EMBlockedSenderManager, NSCache;
@protocol OS_os_log, EMVIPManager;

@interface EMMessageRepository : EMRepository <EFFutureDelegate, EFLoggable> {
    NSMapTable *_observedMessageListItemCache;
    NSMapTable *_unobservedMessageListItemCache;
    NSMapTable *_wrappedObserversByActualObserver;
    NSHashTable *_recoverableObservers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _messageListItemCacheLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    EMRemoteConnectionRecoveryAssertion *_connectionRecoveryAssertion;
}

@property (class, readonly) NSXPCInterface *remoteInterface;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain) EMRemoteConnection *connection;
@property (readonly, copy) NSArray *currentObservers;
@property (readonly, nonatomic) id<EMVIPManager> vipManager;
@property (readonly, nonatomic) EMBlockedSenderManager *blockedSenderManager;
@property (retain, nonatomic) NSCache *queryCountCache;
@property (retain, nonatomic) NSURL *cacheURL;
@property (retain, nonatomic) EFPromise *remoteContentCachePromise;
@property (readonly, nonatomic) EMMailboxRepository *mailboxRepository;
@property (readonly, nonatomic) EMRemoteContentURLCache *remoteContentURLCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signpostLog;

- (void)noteViewOfRemoteContentLinks:(id)a0;
- (id)initInternal;
- (void).cxx_destruct;
- (void)_vipsDidChange:(id)a0;
- (void)dealloc;
- (unsigned long long)signpostID;
- (id)cachedMetadataJSONForKey:(id)a0 messageID:(id)a1;
- (void)setCachedMetadataJSON:(id)a0 forKey:(id)a1 messageID:(id)a2;
- (void)didStartBlockingMainThreadForFuture:(id)a0;
- (void)didFinishBlockingMainThreadForFuture:(id)a0;
- (void)performMessageChangeAction:(id)a0;
- (id)performMessageChangeActionReturningUndoAction:(id)a0;
- (id)messageForObjectID:(id)a0;
- (void)refreshQueryWithObserver:(id)a0;
- (id)performQuery:(id)a0 withObserver:(id)a1;
- (void)isDataAccessible:(id /* block */)a0;
- (void)performQuery:(id)a0 limit:(long long)a1 completionHandler:(id /* block */)a2;
- (void)performCountQuery:(id)a0 completionHandler:(id /* block */)a1;
- (id)requestRepresentationForMessageWithID:(id)a0 requestID:(unsigned long long)a1 options:(id)a2 delegate:(id)a3 completionHandler:(id /* block */)a4;
- (void)loadOlderMessagesForMailboxes:(id)a0;
- (void)getRemoteContentURLInfoOrderedBy:(long long)a0 inReverseOrder:(BOOL)a1 limit:(long long)a2 completionHandler:(id /* block */)a3;
- (id)initWithRemoteConnection:(id)a0 mailboxRepository:(id)a1 vipManager:(id)a2 blockedSenderManager:(id)a3;
- (id)requestRepresentationForMessageWithID:(id)a0 options:(id)a1 delegate:(id)a2 completionHandler:(id /* block */)a3;
- (id)messageListItemsForObjectIDs:(id)a0 observationIdentifier:(id)a1;
- (void)_blockedSendersDidChange:(id)a0;
- (void)_notifyRecoverableObservers;
- (id)_messageListItemsForObjectIDs:(id)a0 observationIdentifier:(id)a1 checkCache:(BOOL)a2;
- (id)_existingObservedItemForObjectID:(id)a0;
- (id)_cachedItemForItem:(id)a0 observers:(id)a1 validationBlock:(id /* block */)a2;
- (BOOL)_anyObserver:(id)a0 containsObjectID:(id)a1;
- (void)_removeItemsFromObservedItemsCacheIfNotObservedByObservers:(id)a0;
- (void)_updateObserversForAction:(id)a0;
- (id)_undoActionForConversationAction:(id)a0;
- (void)_updateObserversForFlagChangeAction:(id)a0;
- (void)_updateObserversForDeletedObjectIDs:(id)a0;
- (id)predictMailboxForMovingMessagesWithIDs:(id)a0 completionHandler:(id /* block */)a1;
- (id)messageObjectIDsForSearchableItemIdentifiers:(id)a0;
- (void)_broadcastMessageListItemChangesToObservers:(id /* block */)a0;
- (void)_applyChangesToCachedObjects:(id)a0;
- (id)messageListItemsForObjectIDs:(id)a0;
- (id)startCountingQuery:(id)a0 includingServerCountsForMailboxScope:(id)a1 withObserver:(id)a2;
- (void)setQueryCount:(id)a0 forQueryIdentifier:(id)a1;
- (void)resetPrecomputedThreadScopesForMailboxType:(long long)a0;
- (void)resetPrecomputedThreadScopesForMailboxObjectID:(id)a0;
- (void)resetAllPrecomputedThreadScopes;
- (void)setUpURLCacheWithMemoryCapacity:(unsigned long long)a0;
- (void)parseRemoteContentURLsFromMessageWithObjectID:(id)a0 completionHandler:(id /* block */)a1;
- (id)predictMailboxForMovingMessages:(id)a0 completionHandler:(id /* block */)a1;
- (id)messageObjectIDForURL:(id)a0;
- (id)messageForSearchableItemIdentifier:(id)a0;
- (void)_detectChangesForMatchedAddedObjectIDs:(id)a0 observerationIdentifier:(id)a1 matchedChangesHandler:(id /* block */)a2;

@end
