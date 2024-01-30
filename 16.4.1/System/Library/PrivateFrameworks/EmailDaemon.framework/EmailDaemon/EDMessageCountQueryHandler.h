@class NSMutableDictionary, NSPredicate, EFStoppableScheduler, EDMessagePersistence, NSObject, EFCancelationToken, EFMutableInt64Set, EDMessageQueryEvaluator, EMMailboxScope, EDUpdateThrottler, NSString, EDPersistenceHookRegistry, NSMutableSet, EFQuery, EFListStateCapturer, EFDebouncer, EMObjectID;
@protocol OS_os_log, EFAssertableScheduler, EMMessageRepositoryCountQueryObserver_xpc;

@interface EDMessageCountQueryHandler : NSObject <EFListStateCapturerDelegate, EFLoggable, EDMailboxChangeHookResponder, EDMessageChangeHookResponder, EMMailboxChangeObserver, EFCancelable> {
    NSMutableDictionary *_serverCounts;
    NSMutableSet *_mailboxesBeingSynced;
    long long _resyncDatabaseGeneration;
    EMObjectID *_mailboxObserverID;
    EFQuery *_expandedQuery;
    EFMutableInt64Set *_seenMessageIDs;
    EFMutableInt64Set *_newMessageIDs;
    _Atomic unsigned long long _recalculationPending;
    struct EFAtomicObject { _Atomic long long cfObject; } _atomicQueryDescription;
    struct EFAtomicObject { _Atomic long long cfObject; } _atomicMailboxScopeDescription;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _seenMessageIDsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _expandedQueryLock;
    EFStoppableScheduler<EFAssertableScheduler> *_scheduler;
    EFQuery *_query;
    NSPredicate *_predicateIgnoringFlags;
    EMMailboxScope *_serverCountMailboxScope;
    EDMessageQueryEvaluator *_queryEvaluator;
    id<EMMessageRepositoryCountQueryObserver_xpc> _resultsObserver;
    EDMessagePersistence *_messagePersistence;
    EDPersistenceHookRegistry *_hookRegistry;
    EFCancelationToken *_cancelationToken;
    EDUpdateThrottler *_updateThrottler;
    EFListStateCapturer *_stateCapturer;
    EFDebouncer *_refireDebouncer;
    NSString *_pendingFlagChangesKey;
    long long _localCount;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)persistenceDidUpdateProperties:(id)a0 message:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidUpdateFollowUpForMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidUpdateLastSyncAndMostRecentStatusCount:(long long)a0 forMailboxWithObjectID:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidUpdateServerCount:(long long)a0 forMailboxWithObjectID:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidChangeReadLaterDate:(id)a0 messages:(id)a1 changeIsRemote:(BOOL)a2 generationWindow:(id)a3;
- (id)itemsForStateCaptureWithErrorString:(id *)a0;
- (void)persistenceDidChangeFlags:(id)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidDeleteMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidUpdateMostRecentStatusCount:(long long)a0 forMailboxWithObjectID:(id)a1 generationWindow:(id)a2;
- (id)initWithQuery:(id)a0 serverCountMailboxScope:(id)a1 messagePersistence:(id)a2 hookRegistry:(id)a3 observer:(id)a4;
- (void)willSyncMailbox:(id)a0;
- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;
- (void)cancel;
- (void)dealloc;
- (void)persistenceDidUpdateDisplayDateForMessages:(id)a0 changeIsRemote:(BOOL)a1 generation:(long long)a2;
- (void)persistenceWillChangeFlags:(id)a0 messages:(id)a1;
- (void)didSyncMailbox:(id)a0;
- (void)mailboxListChanged:(id)a0;
- (void)persistenceDidChangeVIPStatus:(BOOL)a0 messages:(id)a1;
- (id)descriptionForItem:(id)a0;
- (void)test_tearDown;
- (id)labelForStateCapture;
- (id)initWithQuery:(id)a0 serverCountMailboxScope:(id)a1 messagePersistence:(id)a2 hookRegistry:(id)a3 observer:(id)a4 refireDebounceInterval:(double)a5;
- (void)persistenceIsAddingMailboxWithDatabaseID:(long long)a0 objectID:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidChangeGlobalMessageID:(long long)a0 orConversationID:(long long)a1 message:(id)a2 generationWindow:(id)a3;
- (void).cxx_destruct;
- (void)persistenceDidUpdateSendLaterDate:(id)a0 messages:(id)a1 generationWindow:(id)a2;

@end
