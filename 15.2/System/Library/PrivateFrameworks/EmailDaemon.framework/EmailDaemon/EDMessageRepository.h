@class NSMutableDictionary, EDRemoteContentManager, NSObject, EDMessagePersistence, EDRemoteContentPersistence, EDMailboxPersistence, EDMessageChangeManager, NSConditionLock, NSSet, EDFetchController, EDPersistenceHookRegistry, NSString, EDVIPManager, NSMutableSet, EDRemoteContentCacheConfiguration, EDThreadPersistence, EDConversationPersistence, EDMailboxPredictionController;
@protocol OS_os_log, EMUserProfileProvider, EDRemoteSearchProvider, EFScheduler, OS_dispatch_queue, EDResumable;

@interface EDMessageRepository : NSObject <EDAccountChangeHookResponder, EDThreadQueryHandlerDelegate, EFContentProtectionObserver, EMMessageRepositoryInterface, EDReconciliationQueryProvider, EFLoggable> {
    EDMailboxPredictionController *_mailboxPredictionController;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mailboxPredictionControllerLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handlersLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSMutableDictionary *queryHandlers;
@property (retain, nonatomic) NSMutableDictionary *threadQueryHandlers;
@property (retain, nonatomic) NSMutableSet *handlerTokens;
@property (retain, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (retain, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDConversationPersistence *conversationPersistence;
@property (retain, nonatomic) EDThreadPersistence *threadPersistence;
@property (readonly, nonatomic) EDRemoteContentPersistence *remoteContentPersistence;
@property (retain, nonatomic) EDMessageChangeManager *messageChangeManager;
@property (readonly, nonatomic) NSConditionLock *performQueryOnSerializationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serializationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (readonly, nonatomic) EDMailboxPersistence *mailboxPersistence;
@property (readonly, nonatomic) id<EMUserProfileProvider> userProfileProvider;
@property (readonly, nonatomic) EDVIPManager *vipManager;
@property (readonly, nonatomic) id<EDRemoteSearchProvider> remoteSearchProvider;
@property (readonly, nonatomic) EDFetchController *fetchController;
@property (readonly, nonatomic) id<EDResumable> observerResumer;
@property (readonly, nonatomic) EDRemoteContentManager *remoteContentManager;
@property (readonly, nonatomic) EDRemoteContentCacheConfiguration *remoteContentCacheConfiguration;
@property (readonly, nonatomic) id<EFScheduler> updateThrottlerResetScheduler;
@property (weak, nonatomic) id /* block */ updateThrottlerResetBlock;
@property (readonly, copy, nonatomic) NSSet *test_activeQueryCancelationTokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signpostLog;

- (void)contentProtectionStateChanged:(int)a0 previousState:(int)a1;
- (void)noteViewOfRemoteContentLinks:(id)a0;
- (void)test_tearDown;
- (id)threadReconciliationQueries;
- (id)messageReconciliationQueries;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)signpostID;
- (void)accountBecameActive:(id)a0;
- (void)accountBecameInactive:(id)a0;
- (void)setCachedMetadataJSON:(id)a0 forKey:(id)a1 messageID:(id)a2;
- (void)isDataAccessible:(id /* block */)a0;
- (void)performQuery:(id)a0 limit:(long long)a1 completionHandler:(id /* block */)a2;
- (void)performCountQuery:(id)a0 completionHandler:(id /* block */)a1;
- (void)performQuery:(id)a0 withObserver:(id)a1 observationIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)startCountingQuery:(id)a0 includingServerCountsForMailboxScope:(id)a1 withObserver:(id)a2 completionHandler:(id /* block */)a3;
- (void)messageListItemsForObjectIDs:(id)a0 requestID:(unsigned long long)a1 observationIdentifier:(id)a2 loadSummaryForAdditionalObjectIDs:(id)a3 completionHandler:(id /* block */)a4;
- (void)performMessageChangeAction:(id)a0 requestID:(unsigned long long)a1 returnUndoAction:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)requestRepresentationForMessageWithID:(id)a0 requestID:(unsigned long long)a1 options:(id)a2 delegate:(id)a3 completionHandler:(id /* block */)a4;
- (void)resetPrecomputedThreadScopesForMailboxScope:(id)a0;
- (void)getCachedMetadataJSONForKey:(id)a0 messageID:(id)a1 completionHandler:(id /* block */)a2;
- (void)predictMailboxForMovingMessages:(id)a0 withObserver:(id)a1 completionHandler:(id /* block */)a2;
- (void)loadOlderMessagesForMailboxes:(id)a0;
- (void)messageObjectIDForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)messageObjectIDsForSearchableItemIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)getURLCacheInformationWithCompletion:(id /* block */)a0;
- (void)getRemoteContentURLInfoOrderedBy:(long long)a0 inReverseOrder:(BOOL)a1 limit:(long long)a2 completionHandler:(id /* block */)a3;
- (void)parseRemoteContentURLsFromMessageWithObjectID:(id)a0 requestID:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)initWithMessagePersistence:(id)a0 conversationPersistence:(id)a1 threadPersistence:(id)a2 remoteContentPersistence:(id)a3 messageChangeManager:(id)a4 hookRegistry:(id)a5 mailboxPersistence:(id)a6 remoteSearchProvider:(id)a7 userProfileProvider:(id)a8 vipManager:(id)a9 fetchController:(id)a10 observerResumer:(id)a11 remoteContentManager:(id)a12 remoteContentCacheConfiguration:(id)a13;
- (void)cancelAllHandlers;
- (void)_resetUpdateThrottlersWithLogMessage:(id)a0;
- (void)_performQuery:(id)a0 withObserver:(id)a1 observationIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)_triggerMigrationWithThreadScopesMatcher:(id /* block */)a0;
- (void)_triggerMigrationForThreadScopes:(id)a0;
- (id)_partitionObjectIDs:(id)a0;
- (void)_enumerateThreadsByThreadObjectIDsByScope:(id)a0 usingBlock:(id /* block */)a1;
- (void)_performMessageFlagChangeAllAction:(id)a0;
- (id)_performMessageFlagChangeAction:(id)a0 returnUndoAction:(BOOL)a1;
- (void)_performMessageTransferAllAction:(id)a0;
- (void)_performMessageTransferAllActionToSpecialMailbox:(id)a0;
- (id)_performMessageTransferAction:(id)a0 returnUndoAction:(BOOL)a1;
- (id)_performMessageTransferActionToSpecialMailbox:(id)a0 returnUndoAction:(BOOL)a1;
- (void)_performMessageDeleteAction:(id)a0;
- (void)_performMessageDeleteAllAction:(id)a0;
- (void)_performMessageConversationFlagChangeAction:(id)a0;
- (id)_performUndoAction:(id)a0;
- (id)_persistedMessagesForMessageChangeAction:(id)a0;
- (id)_changeFlagsForPersistedMessages:(id)a0 flagChange:(id)a1 returnUndoAction:(BOOL)a2;
- (id)_undoActionsForMovedMessages:(id)a0;
- (id)_persistedMessagesForObjectIDs:(id)a0;
- (id)_persistedObjectIDsForObjectIDs:(id)a0;
- (id)mailboxPredictionController;
- (void)threadQueryHandlerStateDidChange:(id)a0;

@end
