@class NSMutableDictionary, NSPredicate, EFStoppableScheduler, EDMessagePersistence, EFCancelationToken, NSObject, EDUpdateThrottler, EDMessageQueryEvaluator, EMMailboxScope, EFMutableInt64Set, NSString, EDPersistenceHookRegistry, NSMutableSet, EFQuery, EMObjectID;
@protocol OS_os_log, EMMessageRepositoryCountQueryObserver_xpc;

@interface EDMessageCountQueryHandler : NSObject <EFLoggable, EDMailboxChangeHookResponder, EDMessageChangeHookResponder, EMMailboxChangeObserver, EFCancelable> {
    NSMutableDictionary *_serverCounts;
    NSMutableSet *_mailboxesBeingSynced;
    long long _resyncDatabaseGeneration;
    EMObjectID *_mailboxObserverID;
    EFMutableInt64Set *_seenMessageIDs;
    EFMutableInt64Set *_newMessageIDs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _seenMessageIDsLock;
    _Atomic unsigned long long _recalculationPending;
    struct EFAtomicObject { _Atomic long long cfObject; } _atomicQueryDescription;
    struct EFAtomicObject { _Atomic long long cfObject; } _atomicMailboxScopeDescription;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EFStoppableScheduler *scheduler;
@property (retain, nonatomic) EFQuery *query;
@property (retain, nonatomic) EFQuery *expandedQuery;
@property (retain, nonatomic) NSPredicate *predicateIgnoringFlags;
@property (readonly, nonatomic) EMMailboxScope *serverCountMailboxScope;
@property (retain, nonatomic) EDMessageQueryEvaluator *queryEvaluator;
@property (retain, nonatomic) id<EMMessageRepositoryCountQueryObserver_xpc> resultsObserver;
@property (retain, nonatomic) EDMessagePersistence *messagePersistence;
@property (retain, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (retain, nonatomic) EFCancelationToken *cancelationToken;
@property (retain, nonatomic) EDUpdateThrottler *updateThrottler;
@property (readonly) NSString *pendingFlagChangesKey;
@property (nonatomic) long long localCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)test_tearDown;
- (void)persistenceWillChangeFlags:(id)a0 messages:(id)a1;
- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;
- (void)mailboxListChanged:(id)a0;
- (void)willSyncMailbox:(id)a0;
- (void).cxx_destruct;
- (void)persistenceDidChangeGlobalMessageID:(long long)a0 orConversationID:(long long)a1 message:(id)a2 generationWindow:(id)a3;
- (BOOL)_moreThan:(long long)a0 messagesExistWithGlobalMessageID:(long long)a1;
- (void)persistenceDidUpdateProperties:(id)a0 message:(id)a1 generationWindow:(id)a2;
- (void)_notifyObserverWithLogMessage:(id)a0;
- (void)dealloc;
- (void)persistenceDidChangeFlags:(id)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)_prepareForChangeWithMessages:(id)a0 changeKey:(id)a1;
- (id)_originalMessagesKeyForKey:(id)a0;
- (void)persistenceDidUpdateLastSyncAndMostRecentStatusCount:(long long)a0 forMailboxWithObjectID:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidUpdateServerCount:(long long)a0 forMailboxWithObjectID:(id)a1 generationWindow:(id)a2;
- (void)didSyncMailbox:(id)a0;
- (void)persistenceDidUpdateMostRecentStatusCount:(long long)a0 forMailboxWithObjectID:(id)a1 generationWindow:(id)a2;
- (void)_processChangedMessages:(id)a0 changeKey:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidDeleteMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceIsAddingMailboxWithDatabaseID:(long long)a0 objectID:(id)a1 generationWindow:(id)a2;
- (id)_filterMessages:(id)a0 potentiallyMatchingMessages:(id *)a1;
- (id)initWithQuery:(id)a0 serverCountMailboxScope:(id)a1 messagePersistence:(id)a2 hookRegistry:(id)a3 observer:(id)a4;
- (void)_scheduleCountCalculationWithReason:(id)a0;
- (void)_decrementLocalCount:(long long)a0 logMessage:(id)a1 generationWindow:(id)a2;
- (void)_incrementLocalCount:(long long)a0 logMessage:(id)a1 generationWindow:(id)a2;
- (void)_fireCountCalculation;
- (void)_persistenceDidDeleteMessages:(id)a0 includeMessagesWithDeletedFlag:(BOOL)a1 generationWindow:(id)a2;

@end
