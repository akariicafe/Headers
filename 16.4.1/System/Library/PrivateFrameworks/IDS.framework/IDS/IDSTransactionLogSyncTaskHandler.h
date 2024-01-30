@class IDSTransactionLogSyncTask, NSObject;
@protocol OS_dispatch_queue, IDSTransactionLogTaskHandlerDelegate;

@interface IDSTransactionLogSyncTaskHandler : IDSTransactionLogTaskHandler

@property (retain, nonatomic) IDSTransactionLogSyncTask *syncTask;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<IDSTransactionLogTaskHandlerDelegate> delegate;

- (void)perform;
- (void)_completeWithError:(id)a0;
- (void).cxx_destruct;
- (id)_destinationsInMessages:(id)a0;
- (id)_groupIDsFromMessages:(id)a0;
- (id)_groupsByGroupIDFromGroups:(id)a0;
- (id)_participantsByAliasFromParticipants:(id)a0;
- (id)_transactionMessageFromTransportMessage:(id)a0 groups:(id)a1 participants:(id)a2 accountInfo:(id)a3;
- (id)_transactionMessageFromTransportMessage:(id)a0 withDecryptedPayload:(id)a1 accountInfo:(id)a2;
- (id)_transactionMessageFromTransportMessage:(id)a0 withGroupID:(id)a1 groups:(id)a2 accountInfo:(id)a3;
- (id)_transactionMessageFromTransportMessage:(id)a0 withParticipants:(id)a1 accountInfo:(id)a2;
- (void)_transactionMessagesFromTransportMessages:(id)a0 withParticipants:(id)a1 groups:(id)a2 accountInfo:(id)a3 completion:(id /* block */)a4;
- (id)initWithTask:(id)a0 delegate:(id)a1 queue:(id)a2;
- (void)qFetchParticipantsFromDeviceMessges:(id)a0 andGroupsFromGroupMessages:(id)a1 completion:(id /* block */)a2;
- (void)qIngestMessages:(id)a0 completion:(id /* block */)a1;
- (void)qPerformWithToken:(id)a0;

@end
