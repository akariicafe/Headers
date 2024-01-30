@class EMMailboxScope, EMThreadScope, EDThreadPersistence, NSString, NSMutableDictionary, EFCancelationToken, EMCollectionItemIDStateCapturer, NSMutableArray, NSMutableSet, EDUpdateThrottler, NSObject, EDThreadReloadSummaryHelper;
@protocol OS_os_log, EFScheduler, EFCancelable;

@interface EDPrecomputedThreadQueryHandler : EDMessageRepositoryQueryHandler <EDMessageChangeHookResponder, EDRemindMeNotificationControllerObserver, EDThreadChangeHookResponder, EFLoggable, EMCollectionItemIDStateCapturerDelegate>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) id<EFScheduler> changeScheduler;
@property (readonly, nonatomic) id<EFScheduler> backgroundWorkScheduler;
@property (retain, nonatomic) EFCancelationToken *cancelationToken;
@property (retain, nonatomic) NSMutableDictionary *pendingChanges;
@property (retain, nonatomic) NSMutableArray *pendingPositionChanges;
@property (retain, nonatomic) NSMutableSet *unreportedJournaledObjectIDs;
@property (retain, nonatomic) NSMutableDictionary *reportedJournaledObjectIDs;
@property (retain, nonatomic) NSMutableDictionary *oldestThreadObjectIDsByMailbox;
@property (retain, nonatomic) id<EFCancelable> updateOldestThreadsCancelationToken;
@property (readonly, nonatomic) EDUpdateThrottler *updateThrottler;
@property (readonly, nonatomic) EDThreadReloadSummaryHelper *reloadSummaryHelper;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope;
@property (readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer;
@property (readonly, nonatomic) BOOL updateDisplayDate;
@property (readonly, nonatomic) EMThreadScope *threadScope;
@property (readonly, nonatomic) EDThreadPersistence *threadPersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)persistenceDidUpdateProperties:(id)a0 message:(id)a1 generationWindow:(id)a2;
- (void)cancel;
- (void)test_tearDown;
- (BOOL)start;
- (id)labelForStateCapture;
- (void)persistenceDidChangeGlobalMessageID:(long long)a0 orConversationID:(long long)a1 message:(id)a2 generationWindow:(id)a3;
- (void).cxx_destruct;
- (void)persistenceDidChangeConversationNotificationLevel:(long long)a0 conversationID:(long long)a1 generationWindow:(id)a2;
- (void)persistenceDidFinishThreadUpdates;
- (void)persistenceIsReconcilingJournaledThreadsWithObjectIDs:(id)a0 generationWindow:(id)a1;
- (id)itemIDsForStateCaptureWithErrorString:(id *)a0;
- (void)_addChangeToPendingChanges:(id)a0 forThreadObjectID:(id)a1;
- (void)_flushUpdatesWithReason:(id)a0;
- (void)_getInitialResults;
- (BOOL)_isAddingOrDeletingObjectID:(id)a0;
- (id)_messageForPersistedMessage:(id)a0;
- (void)_oldestThreadsNeedUpdate;
- (void)_onScheduler:(id)a0 performCancelableBlock:(id /* block */)a1;
- (void)_persistenceIsAddingThreadWithObjectID:(id)a0;
- (void)_persistenceIsChangingThreadWithObjectID:(id)a0 changedKeyPaths:(id)a1;
- (void)_updateDisplayDateForMessagesIfNeeded;
- (void)controller:(id)a0 messageTimerFired:(id)a1;
- (id)initWithQuery:(id)a0 threadScope:(id)a1 messagePersistence:(id)a2 threadPersistence:(id)a3 hookRegistry:(id)a4 remindMeNotificationController:(id)a5 observer:(id)a6 observationIdentifier:(id)a7 observationResumer:(id)a8;
- (void)persistenceIsAddingThreadWithObjectID:(id)a0 journaled:(BOOL)a1 generationWindow:(id)a2;
- (void)persistenceIsChangingThreadWithObjectID:(id)a0 changedKeyPaths:(id)a1 generationWindow:(id)a2;
- (void)persistenceIsDeletingThreadWithObjectID:(id)a0 generationWindow:(id)a1;
- (void)persistenceIsMarkingThreadAsJournaledWithObjectID:(id)a0 generationWindow:(id)a1;
- (id)threadForObjectID:(id)a0 error:(id *)a1;

@end
