@class EDMessageChangeManager, NSString, EDMessagePersistence, EDSendLaterPersistence, NSObject;
@protocol OS_dispatch_queue;

@interface EDOutgoingMessageRepository : NSObject <EMOutgoingMessageRepositoryInterface> {
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (retain, nonatomic) EDMessagePersistence *messagePersistence;
@property (retain, nonatomic) EDSendLaterPersistence *sendLaterPersistence;
@property (readonly, nonatomic) EDMessageChangeManager *messageChangeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)signpostLog;

- (unsigned long long)signpostID;
- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancelLastDelayedMessage:(id /* block */)a0;
- (void)cancelObservation:(id)a0;
- (void)deleteDraftsInMailboxID:(id)a0 documentID:(id)a1 previousDraftObjectID:(id)a2;
- (void)deliverMessage:(id)a0 usingMailDrop:(BOOL)a1 isCancelable:(BOOL)a2 completion:(id /* block */)a3;
- (void)isProcessingWithCompletion:(id /* block */)a0;
- (void)numberOfPendingMessagesWithCompletion:(id /* block */)a0;
- (void)outboxContainsMessageFromAccountObjectID:(id)a0 completion:(id /* block */)a1;
- (void)processAllQueuedMessages;
- (void)removeSendLaterDateFromMessage:(id)a0 draftsMailboxObjectID:(id)a1 completion:(id /* block */)a2;
- (void)resumeDeliveryQueue;
- (void)saveDraftMessage:(id)a0 mailboxID:(id)a1 previousDraftObjectID:(id)a2 completion:(id /* block */)a3;
- (void)saveSendLaterMessage:(id)a0 sendLaterDate:(id)a1 completion:(id /* block */)a2;
- (void)scheduleAlarmForSendLaterDate:(id)a0 completion:(id /* block */)a1;
- (void)startObservingPendingMessageChangesWithChangeObserver:(id)a0 observationIdentifier:(id)a1;
- (void)suspendDeliveryQueue;
- (void)updateSendLaterDate:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (id)initWithMessagePersistence:(id)a0 messageChangeManager:(id)a1 sendLaterPersistence:(id)a2;
- (id)messagesForDocumentID:(id)a0 mailboxID:(id)a1;
- (id)outgoingMessageFromPersistedMessage:(id)a0;
- (id)urlForSendLaterFolder;

@end
