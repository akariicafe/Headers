@class EDMessageChangeManager, NSString, EDMessagePersistence, NSObject;
@protocol OS_dispatch_queue;

@interface EDOutgoingMessageRepository : NSObject <EMOutgoingMessageRepositoryInterface> {
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (retain, nonatomic) EDMessagePersistence *messagePersistence;
@property (retain, nonatomic) EDMessageChangeManager *messageChangeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signpostLog;
+ (id)log;

- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (unsigned long long)signpostID;
- (void)cancelObservation:(id)a0;
- (void)saveDraftMessage:(id)a0 mailboxID:(id)a1 previousDraftObjectID:(id)a2 completion:(id /* block */)a3;
- (void)deleteDraftsInMailboxID:(id)a0 documentID:(id)a1 previousDraftObjectID:(id)a2;
- (void)deliverMessage:(id)a0 usingMailDrop:(BOOL)a1 completion:(id /* block */)a2;
- (void)outboxContainsMessageFromAccountObjectID:(id)a0 completion:(id /* block */)a1;
- (void)suspendDeliveryQueue;
- (void)resumeDeliveryQueue;
- (void)processAllQueuedMessages;
- (void)isProcessingWithCompletion:(id /* block */)a0;
- (void)numberOfPendingMessagesWithCompletion:(id /* block */)a0;
- (void)startObservingPendingMessageChangesWithChangeObserver:(id)a0 observationIdentifier:(id)a1;
- (id)messagesForDocumentID:(id)a0 mailboxID:(id)a1;
- (id)initWithMessagePersistence:(id)a0 messageChangeManager:(id)a1;

@end
