@class EDMessageQueryEvaluator, EDRemindMeNotificationController, EDMessagePersistence, NSPredicate, EFCancelationToken, NSString, EFQuery, EDPersistenceHookRegistry, NSObject, NSMutableSet;
@protocol OS_os_log, EDRemoteSearchProvider, EFScheduler, EDMessageQueryHelperDelegate;

@interface EDMessageQueryHelper : NSObject <EDMessageChangeHookResponder, EDRemindMeNotificationControllerObserver, EDRemoteSearchDelegate, EDSenderBucketChangeHookResponder, EFLoggable, EDMessageQueryHelperMessageSource, EFCancelable> {
    struct atomic_flag { _Atomic BOOL _Value; } _didStart;
    NSMutableSet *_noLongerMatchingMessages;
    NSMutableSet *_ignoredMessages;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _noLongerMatchingMessagesLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ignoredMessagesLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly, nonatomic) id<EDRemoteSearchProvider> remoteSearchProvider;
@property (readonly, nonatomic) EDRemindMeNotificationController *remindMeNotificationController;
@property (readonly, nonatomic) id<EFScheduler> scheduler;
@property (readonly, weak, nonatomic) id<EDMessageQueryHelperDelegate> delegate;
@property (retain, nonatomic) EDMessageQueryEvaluator *queryEvaluator;
@property (retain, nonatomic) EFCancelationToken *cancelationToken;
@property (nonatomic) BOOL shouldReconcileJournal;
@property (nonatomic) BOOL keepMessagesInListOnBucketChange;
@property (readonly, nonatomic) BOOL updateDisplayDate;
@property (retain, nonatomic) NSPredicate *ignoreMessagesPredicate;
@property (nonatomic) BOOL addMessagesSynchronously;
@property (readonly) NSString *pendingFlagChangesKey;
@property (readonly) NSString *pendingConversationIDChangesKey;
@property (readonly) NSString *pendingJournaledMessageAddsKey;
@property (readonly) NSString *pendingSenderBucketChangesKey;
@property (readonly) NSString *pendingReadLaterDateChangesKey;
@property (readonly) NSString *pendingDisplayDateChangesKey;
@property (readonly, nonatomic) EFQuery *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)persistenceDidUpdateProperties:(id)a0 message:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidChangeReadLaterDate:(id)a0 messages:(id)a1 changeIsRemote:(BOOL)a2 generationWindow:(id)a3;
- (void)persistenceDidChangeFlags:(id)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidDeleteMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidDeleteAllMessagesInMailboxesWithURLs:(id)a0 generationWindow:(id)a1;
- (void)persistenceIsChangingConversationID:(long long)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;
- (void)cancel;
- (void)dealloc;
- (void)persistenceDidUpdateDisplayDateForMessages:(id)a0 changeIsRemote:(BOOL)a1 generation:(long long)a2;
- (void)persistenceWillChangeFlags:(id)a0 messages:(id)a1;
- (void)persistenceDidAddAddresses:(id)a0 toSender:(id)a1 generation:(long long)a2;
- (void)persistenceIsAddingMessages:(id)a0 journaled:(BOOL)a1 generationWindow:(id)a2;
- (void)persistenceDidRemoveAddresses:(id)a0 fromSender:(id)a1 generation:(long long)a2;
- (void)start;
- (void)persistenceDidChangeGlobalMessageID:(long long)a0 orConversationID:(long long)a1 message:(id)a2 generationWindow:(id)a3;
- (void).cxx_destruct;
- (void)persistenceDidChangeConversationNotificationLevel:(long long)a0 conversationID:(long long)a1 generationWindow:(id)a2;
- (void)persistenceDidReconcileJournaledMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceWillChangeConversationID:(long long)a0 messages:(id)a1;
- (void)persistenceWillChangeReadLaterDate:(id)a0 messages:(id)a1;
- (void)persistenceWillUpdateDisplayDateForMessages:(id)a0;
- (void)_foundMessages:(id)a0;
- (void)persistenceDidChangeSenderBucketForSenders:(id)a0 toBucket:(long long)a1 generation:(long long)a2;
- (void)_calculateAndReportChangesForPersistedMessages:(id)a0 withPendingChangesKey:(id)a1 changeBlock:(id /* block */)a2;
- (void)_getInitialResults;
- (id)_persistedMessagesFromSendersWithAddresses:(id)a0;
- (void)_persistenceDidDeleteMessages:(id)a0 includeMessagesWithDeletedFlag:(BOOL)a1;
- (id)_predicateWithAdditionalPredicates:(id)a0;
- (void)_prepareForSenderBucketChangeForThreadsWithSenderAddresses:(id)a0;
- (void)_reportChangesForCurrentlyMatchingMessages:(id)a0 previouslyMatchingMessages:(id)a1 keyPaths:(id)a2;
- (void)_reportChangesForPersistedMessages:(id)a0 withPendingChangesKey:(id)a1 keyPaths:(id)a2;
- (void)_reportSenderBucketChangeForThreadsWithSenderAddresses:(id)a0;
- (id)_transformAndFilterMessages:(id)a0 includeDeleted:(BOOL)a1 removeIgnoredMessages:(BOOL)a2;
- (void)_updateDisplayDateForMessagesIfNeeded;
- (void)controller:(id)a0 messageTimerFired:(id)a1;
- (id)initWithQuery:(id)a0 messagePersistence:(id)a1 hookRegistry:(id)a2 remoteSearchProvider:(id)a3 scheduler:(id)a4 remindMeNotificationController:(id)a5 delegate:(id)a6 shouldReconcileJournal:(BOOL)a7 shouldAddMessagesSynchronously:(BOOL)a8 keepMessagesInListOnBucketChange:(BOOL)a9;
- (id)messagesWithAdditionalPredicates:(id)a0 limit:(long long)a1;
- (void)persistenceWillAddAddresses:(id)a0 toSender:(id)a1;
- (void)persistenceWillChangeSenderBucketForAddresses:(id)a0 toBucket:(long long)a1;
- (void)persistenceWillChangeSenderBucketForSenders:(id)a0 toBucket:(long long)a1;
- (void)persistenceWillRemoveAddresses:(id)a0 fromSender:(id)a1;
- (void)remoteSearchDidFindMessages:(id)a0;
- (void)remoteSearchDidFinish;
- (id)sortableMessagesWithAdditionalPredicates:(id)a0 limit:(long long)a1;

@end
