@class _EDGroupedSenderList, NSString, EDMessageQueryHelper, NSObject, EMThreadScope;
@protocol OS_dispatch_queue, EFScheduler, EMMessageListItemQueryResultsObserver;

@interface EDGroupedSenderQueryHandler : EDMessageRepositoryQueryHandler <EDMessageQueryHelperDelegate>

@property (retain, nonatomic) EDMessageQueryHelper *messageQueryHelper;
@property (readonly, nonatomic) id<EMMessageListItemQueryResultsObserver> resultsObserverIfUncanceled;
@property (retain, nonatomic) _EDGroupedSenderList *groupedSenders;
@property (readonly, nonatomic) id<EFScheduler> scheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resultQueue;
@property BOOL didCancel;
@property (nonatomic) BOOL keepMessagesInListOnBucketChange;
@property (readonly, nonatomic) EMThreadScope *filteredMailboxScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tearDown;
- (void)cancel;
- (void)test_tearDown;
- (BOOL)start;
- (void).cxx_destruct;
- (void)_filterGroupedSenderChanges:(id)a0 withVisibleSenders:(id)a1;
- (id)_messageQueryFromGroupedQuery:(id)a0;
- (void)_messagesWereAdded:(id)a0;
- (void)_messagesWereChanged:(id)a0 forKeyPaths:(id)a1 deleted:(BOOL)a2;
- (void)_notifyResultsObserverOfChangesToVisibleGroupedSendersFrom:(id)a0 to:(id)a1 logMessage:(id)a2;
- (BOOL)_queryHelperIsCurrent:(id)a0;
- (id)groupedSenderForObjectID:(id)a0;
- (id)initWithQuery:(id)a0 messagePersistence:(id)a1 hookRegistry:(id)a2 remindMeNotificationController:(id)a3 observer:(id)a4 observationIdentifier:(id)a5 keepMessagesInListOnBucketChange:(BOOL)a6;
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
