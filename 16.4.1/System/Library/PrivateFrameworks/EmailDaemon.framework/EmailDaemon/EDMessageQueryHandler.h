@class NSMutableDictionary, EMCollectionItemIDStateCapturer, NSString, EDMessageQueryHelper, NSObject;
@protocol OS_os_log, EDRemoteSearchProvider, EFScheduler, OS_dispatch_queue;

@interface EDMessageQueryHandler : EDMessageRepositoryQueryHandler <EMCollectionItemIDStateCapturerDelegate, EDMessageQueryHelperDelegate, EFLoggable, EFContentProtectionObserver> {
    struct EFAtomicObject { _Atomic long long cfObject; } _updateOldestMessagesCancelationToken;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) id<EDRemoteSearchProvider> remoteSearchProvider;
@property (retain, nonatomic) EDMessageQueryHelper *currentQueryHelper;
@property (readonly, nonatomic) id<EFScheduler> scheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resultQueue;
@property (nonatomic) BOOL didCancel;
@property (nonatomic) BOOL isInitialized;
@property (nonatomic) BOOL hasEverReconciledJournal;
@property (readonly, copy, nonatomic) NSMutableDictionary *oldestMessageIDsByMailboxObjectIDs;
@property (readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)findMessagesByPreviousObjectIDForAddedMessages:(id)a0 messageSource:(id)a1;

- (void)cancel;
- (void)dealloc;
- (BOOL)start;
- (id)labelForStateCapture;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (void).cxx_destruct;
- (id)itemIDsForStateCaptureWithErrorString:(id *)a0;
- (void)_contentProtectionChangedToLocked;
- (void)_contentProtectionChangedToUnlocked;
- (id)_createChangesForMessagesWithConversationID:(long long)a0 block:(id /* block */)a1;
- (void)_createHelper;
- (void)_initializeOldestMessagesByMailbox;
- (id)_objectIDsAndUnreadObjectIDsFromMessages:(id)a0 unreadObjectIDs:(id *)a1;
- (id)_oldestItemQueryForMailbox:(id)a0;
- (void)_oldestMessagesByMailboxObjectIDsWasUpdated;
- (void)_oldestMessagesNeedUpdate;
- (BOOL)_queryHelperIsCurrent:(id)a0;
- (void)_restartHelper;
- (void)_updateOldestMessagesForMailboxes:(id)a0 cancelationToken:(id)a1;
- (id)findMessagesByPreviousObjectIDForAddedMessages:(id)a0 helper:(id)a1;
- (id)initWithQuery:(id)a0 messagePersistence:(id)a1 hookRegistry:(id)a2 remindMeNotificationController:(id)a3 remoteSearchProvider:(id)a4 observer:(id)a5 observationIdentifier:(id)a6;
- (void)queryHelper:(id)a0 conversationIDDidChangeForMessages:(id)a1 fromConversationID:(long long)a2;
- (void)queryHelper:(id)a0 conversationNotificationLevelDidChangeForConversation:(long long)a1 conversationID:(long long)a2;
- (void)queryHelper:(id)a0 didAddMessages:(id)a1;
- (void)queryHelper:(id)a0 didDeleteMessages:(id)a1;
- (void)queryHelper:(id)a0 didFindMessages:(id)a1;
- (void)queryHelper:(id)a0 didUpdateMessages:(id)a1 forKeyPaths:(id)a2;
- (void)queryHelper:(id)a0 messageFlagsDidChangeForMessages:(id)a1;
- (void)queryHelper:(id)a0 objectIDDidChangeForMessage:(id)a1 oldObjectID:(id)a2 oldConversationID:(long long)a3;
- (void)queryHelperDidFindAllMessages:(id)a0;
- (void)queryHelperDidFinishRemoteSearch:(id)a0;
- (void)queryHelperNeedsRestart:(id)a0;

@end
