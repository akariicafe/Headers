@class NSString, EDMessagePersistence, EDMessageQueryEvaluator, EFQuery, EFCancelationToken, EDPersistenceHookRegistry, NSObject, NSMutableSet;
@protocol OS_os_log, EDRemoteSearchProvider, EFScheduler, EDMessageQueryHelperDelegate;

@interface EDMessageQueryHelper : NSObject <EDMessageChangeHookResponder, EDRemoteSearchDelegate, EFLoggable, EDMessageQueryHelperMessageSource, EFCancelable> {
    struct atomic_flag { _Atomic BOOL _Value; } _didStart;
    NSMutableSet *_noLongerMatchingMessages;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _noLongerMatchingMessagesLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly, nonatomic) id<EDRemoteSearchProvider> remoteSearchProvider;
@property (readonly, nonatomic) id<EFScheduler> scheduler;
@property (readonly, weak, nonatomic) id<EDMessageQueryHelperDelegate> delegate;
@property (retain, nonatomic) EDMessageQueryEvaluator *queryEvaluator;
@property (retain, nonatomic) EFCancelationToken *cancelationToken;
@property (nonatomic) BOOL shouldReconcileJournal;
@property (nonatomic) BOOL addMessagesSynchronously;
@property (readonly) NSString *pendingFlagChangesKey;
@property (readonly) NSString *pendingConversationIDChangesKey;
@property (readonly) NSString *pendingJournaledMessageAddsKey;
@property (readonly, nonatomic) EFQuery *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)persistenceDidChangeGlobalMessageID:(long long)a0 orConversationID:(long long)a1 message:(id)a2 generationWindow:(id)a3;
- (void)persistenceDidChangeFlags:(id)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidDeleteAllMessagesInMailboxesWithURLs:(id)a0 generationWindow:(id)a1;
- (void)persistenceWillChangeFlags:(id)a0 messages:(id)a1;
- (void)persistenceIsChangingConversationID:(long long)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidUpdateProperties:(id)a0 message:(id)a1 generationWindow:(id)a2;
- (void)start;
- (void).cxx_destruct;
- (void)persistenceDidDeleteMessages:(id)a0 generationWindow:(id)a1;
- (void)dealloc;
- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;
- (void)cancel;
- (void)persistenceIsAddingMessages:(id)a0 journaled:(BOOL)a1 generationWindow:(id)a2;
- (void)persistenceWillChangeConversationID:(long long)a0 messages:(id)a1;
- (void)persistenceDidReconcileJournaledMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidChangeConversationNotificationLevel:(long long)a0 conversationID:(long long)a1 generationWindow:(id)a2;
- (id)initWithQuery:(id)a0 messagePersistence:(id)a1 hookRegistry:(id)a2 remoteSearchProvider:(id)a3 scheduler:(id)a4 delegate:(id)a5 shouldReconcileJournal:(BOOL)a6 shouldAddMessagesSynchronously:(BOOL)a7;
- (id)messagesWithAdditionalPredicates:(id)a0 limit:(long long)a1;
- (void)_getInitialResults;
- (id)_transformAndFilterMessages:(id)a0 includeDeleted:(BOOL)a1;
- (void)_foundMessages:(id)a0;
- (void)_persistenceDidDeleteMessages:(id)a0 includeMessagesWithDeletedFlag:(BOOL)a1;
- (void)remoteSearchDidFindMessages:(id)a0;
- (void)remoteSearchDidFinish;

@end
