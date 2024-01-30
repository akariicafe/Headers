@class NSMutableDictionary, NSObject, EDMessagePersistence, EDMailboxPersistence, EDMessageChangeManager, NSConditionLock, NSSet, EDFetchController, EDPersistenceHookRegistry, NSString, EDVIPManager, NSMutableSet, EDMailboxPredictionController, EDThreadPersistence, EDConversationPersistence;
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
@property (readonly, nonatomic) id<EFScheduler> updateThrottlerResetScheduler;
@property (weak, nonatomic) id /* block */ updateThrottlerResetBlock;
@property (readonly, copy, nonatomic) NSSet *test_activeQueryCancelationTokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signpostLog;

- (void)contentProtectionStateChanged:(int)a0 previousState:(int)a1;
- (void)test_tearDown;
- (unsigned long long)signpostID;
- (void)performMessageChangeAction:(id)a0 requestID:(unsigned long long)a1 returnUndoAction:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)resetPrecomputedThreadScopesForMailboxScope:(id)a0;
- (void)getCachedMetadataJSONForKey:(id)a0 messageID:(id)a1 completionHandler:(id /* block */)a2;
- (void)predictMailboxForMovingMessages:(id)a0 withObserver:(id)a1 completionHandler:(id /* block */)a2;
- (void)messageObjectIDForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)messageObjectIDsForSearchableItemIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)performCountQuery:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)performQuery:(id)a0 limit:(long long)a1 completionHandler:(id /* block */)a2;
- (id)messageReconciliationQueries;
- (id)threadReconciliationQueries;
- (void)accountBecameActive:(id)a0;
- (void)accountBecameInactive:(id)a0;
- (id)requestRepresentationForMessageWithID:(id)a0 requestID:(unsigned long long)a1 options:(id)a2 delegate:(id)a3 completionHandler:(id /* block */)a4;
- (void)setCachedMetadataJSON:(id)a0 forKey:(id)a1 messageID:(id)a2;
- (void)loadOlderMessagesForMailboxes:(id)a0;
- (void)performQuery:(id)a0 withObserver:(id)a1 observationIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)startCountingQuery:(id)a0 includingServerCountsForMailboxScope:(id)a1 withObserver:(id)a2 completionHandler:(id /* block */)a3;
- (void)messageListItemsForObjectIDs:(id)a0 requestID:(unsigned long long)a1 observationIdentifier:(id)a2 loadSummaryForAdditionalObjectIDs:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithMessagePersistence:(id)a0 conversationPersistence:(id)a1 threadPersistence:(id)a2 messageChangeManager:(id)a3 hookRegistry:(id)a4 mailboxPersistence:(id)a5 remoteSearchProvider:(id)a6 userProfileProvider:(id)a7 vipManager:(id)a8 fetchController:(id)a9 observerResumer:(id)a10;
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
