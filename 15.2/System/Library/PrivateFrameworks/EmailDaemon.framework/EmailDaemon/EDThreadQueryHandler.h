@class NSString, EDMessagePersistence, EFQuery, EMObjectID, EFLocked, NSObject, EDVIPManager, EDThreadPersistence, EDPersistenceHookRegistry, EMThreadScope;
@protocol OS_os_log, EDRemoteSearchProvider, EMMessageListItemQueryResultsObserver, EDThreadQueryHandlerDelegate, EDResumable;

@interface EDThreadQueryHandler : NSObject <EDThreadChangeHookResponder, EDThreadMigratorDelegate, EMMessageListItemQueryResultsObserver, EFLoggable, EDMessageRepositoryQueryHandler> {
    _Atomic char _state;
    struct atomic_flag { _Atomic BOOL _Value; } _isRunning;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) id<EMMessageListItemQueryResultsObserver> resultsObserver;
@property (readonly, nonatomic) EMObjectID *observationIdentifier;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDThreadPersistence *threadPersistence;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly, nonatomic) EDVIPManager *vipManager;
@property (readonly, nonatomic) id<EDRemoteSearchProvider> remoteSearchProvider;
@property (readonly, nonatomic) EFLocked *underlyingHandler;
@property (readonly, weak, nonatomic) id<EDThreadQueryHandlerDelegate> delegate;
@property (readonly, nonatomic) id<EDResumable> observerResumer;
@property (readonly, nonatomic) EMThreadScope *threadScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) EFQuery *query;

- (void)tearDown;
- (void)test_tearDown;
- (id)threadReconciliationQueries;
- (BOOL)start;
- (id)messageReconciliationQueries;
- (void).cxx_destruct;
- (void)requestSummaryForMessageObjectID:(id)a0;
- (BOOL)isStarted;
- (void)cancel;
- (void)observer:(id)a0 wasUpdated:(id)a1;
- (void)observer:(id)a0 matchedAddedObjectIDs:(id)a1 before:(id)a2 extraInfo:(id)a3;
- (void)observer:(id)a0 matchedAddedObjectIDs:(id)a1 after:(id)a2 extraInfo:(id)a3;
- (void)observer:(id)a0 matchedMovedObjectIDs:(id)a1 before:(id)a2;
- (void)observer:(id)a0 matchedMovedObjectIDs:(id)a1 after:(id)a2;
- (void)observer:(id)a0 matchedChangesForObjectIDs:(id)a1;
- (void)observer:(id)a0 matchedDeletedObjectIDs:(id)a1;
- (void)observer:(id)a0 replacedExistingObjectID:(id)a1 withNewObjectID:(id)a2;
- (void)observer:(id)a0 matchedOldestItemsUpdatedForMailboxes:(id)a1;
- (void)observerDidFinishInitialLoad:(id)a0;
- (void)observerWillRestart:(id)a0;
- (void)observerDidFinishRemoteSearch:(id)a0;
- (id)initWithQuery:(id)a0 messagePersistence:(id)a1 threadPersistence:(id)a2 hookRegistry:(id)a3 vipManager:(id)a4 remoteSearchProvider:(id)a5 observer:(id)a6 observationIdentifier:(id)a7 delegate:(id)a8 observationResumer:(id)a9;
- (void)checkIfPrecomputedStateIsAvailable;
- (void)triggerMigration;
- (id)threadForObjectID:(id)a0 isPersisted:(BOOL *)a1 error:(id *)a2;
- (id)inMemoryMessageObjectIDsForThread:(id)a0;
- (void)persistenceDidResetThreadScope:(id)a0;
- (void)threadMigratorDidComplete:(id)a0;
- (void)_createUnderlyingHandlerIfNeededAndStart;
- (void)_tearDownWithQueryHandlerBlock:(id /* block */)a0;

@end
