@class EDMessageQueryHelper, NSString, NSArray, NSMutableOrderedSet, EFProcessTransaction, NSMutableDictionary, EMCollectionItemIDStateCapturer, NSObject, EMMailboxScope, EDVIPManager, EDUpdateThrottler, EDThreadReloadSummaryHelper;
@protocol OS_os_log, EDRemoteSearchProvider, EMMessageListItemQueryResultsObserver, EFScheduler, OS_dispatch_queue;

@interface EDInMemoryThreadQueryHandler : EDMessageRepositoryQueryHandler <EDMessageQueryHelperDelegate, EFLoggable, EFContentProtectionObserver, EMCollectionItemIDStateCapturerDelegate> {
    NSMutableOrderedSet *_conversationIDs;
    NSMutableDictionary *_threadsByConversationID;
    NSMutableDictionary *_changesWhilePaused;
    NSMutableDictionary *_oldestThreadsByMailboxObjectIDs;
    EFProcessTransaction *_processTransaction;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _threadsLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDVIPManager *vipManager;
@property (readonly, nonatomic) id<EDRemoteSearchProvider> remoteSearchProvider;
@property (readonly, nonatomic) id<EMMessageListItemQueryResultsObserver> resultsObserverIfNotPaused;
@property (retain, nonatomic) EDMessageQueryHelper *messageQueryHelper;
@property (readonly, copy, nonatomic) NSArray *messageSortDescriptors;
@property (readonly, nonatomic) id /* block */ comparator;
@property (readonly, nonatomic) EDUpdateThrottler *updateThrottler;
@property (readonly, nonatomic) EDThreadReloadSummaryHelper *reloadSummaryHelper;
@property (readonly, nonatomic) id<EFScheduler> scheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resultQueue;
@property (nonatomic) BOOL didCancel;
@property (nonatomic) BOOL isInitialized;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) BOOL hasChangesWhilePaused;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope;
@property (readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)contentProtectionStateChanged:(int)a0 previousState:(int)a1;
- (void)test_tearDown;
- (void)_blockedSendersDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)labelForStateCapture;
- (id)itemIDsForStateCaptureWithErrorString:(id *)a0;
- (void)start;
- (void)tearDown;
- (void)_vipsDidChange:(id)a0;
- (id)_inMemoryThreadSortDescriptorsForThreadSortDescriptors:(id)a0;
- (void)_createHelperAndReconcileJournal:(BOOL)a0;
- (void)_refreshObserver;
- (void)_notifyObserverOfOldestThreadsByMailboxObjectIDs;
- (id)_messageQueryFromThreadsQuery:(id)a0;
- (void)_contentProtectionChangedToUnlocked;
- (void)_contentProtectionChangedToLocked;
- (void)_restartHelper;
- (BOOL)_queryHelperIsCurrent:(id)a0;
- (void)_messagesWereAdded:(id)a0;
- (void)_initializeOldestThreadsByMailbox;
- (id)_messagesByConversationIDForMessages:(id)a0;
- (BOOL)_messageListItemChangeAffectsSorting:(id)a0;
- (void)_prepareToSendUpdates;
- (BOOL)_reportChanges:(id)a0;
- (BOOL)_mergeInThreads:(id)a0 forMove:(BOOL)a1;
- (void)_didSendUpdates;
- (void)_messagesWereChanged:(id)a0 forKeyPaths:(id)a1 deleted:(BOOL)a2;
- (BOOL)_reportDeletes:(id)a0;
- (BOOL)_removeThreadsForInMemoryThreads:(id)a0 forMove:(BOOL)a1;
- (BOOL)_didMergeInThreads:(id)a0;
- (BOOL)_threadsWereDeleted;
- (BOOL)_updateOldestThreadsForMailboxes:(id)a0;
- (BOOL)_updateCurrentOldestThreadWithThreadIfApplicable:(id)a0 forMailbox:(id)a1;
- (void)queryHelper:(id)a0 didFindMessages:(id)a1;
- (void)queryHelperDidFindAllMessages:(id)a0;
- (void)queryHelper:(id)a0 didAddMessages:(id)a1;
- (void)queryHelper:(id)a0 messageFlagsDidChangeForMessages:(id)a1;
- (void)queryHelper:(id)a0 conversationIDDidChangeForMessages:(id)a1 fromConversationID:(long long)a2;
- (void)queryHelper:(id)a0 conversationNotificationLevelDidChangeForConversation:(long long)a1 conversationID:(long long)a2;
- (void)queryHelper:(id)a0 objectIDDidChangeForMessage:(id)a1 oldObjectID:(id)a2 oldConversationID:(long long)a3;
- (void)queryHelper:(id)a0 didUpdateMessages:(id)a1 forKeyPaths:(id)a2;
- (void)queryHelper:(id)a0 didDeleteMessages:(id)a1;
- (void)queryHelperDidFinishRemoteSearch:(id)a0;
- (void)queryHelperNeedsRestart:(id)a0;
- (id)initWithQuery:(id)a0 messagePersistence:(id)a1 hookRegistry:(id)a2 vipManager:(id)a3 remoteSearchProvider:(id)a4 observer:(id)a5 observationIdentifier:(id)a6 observationResumer:(id)a7;
- (id)threadForObjectID:(id)a0 error:(id *)a1;
- (id)messagesForThread:(id)a0;

@end
