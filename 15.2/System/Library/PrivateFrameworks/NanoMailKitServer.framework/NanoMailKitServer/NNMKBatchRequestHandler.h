@class NSMutableDictionary, NNMKSyncController, NNMKResendScheduler, NSDate, NSObject;
@protocol OS_dispatch_source, NNMKBatchRequestHandlerDelegate, OS_dispatch_queue;

@interface NNMKBatchRequestHandler : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *fetchTimeoutTimer;
@property (retain, nonatomic) NSMutableDictionary *batchedRequestByMailboxId;
@property (nonatomic) unsigned long long retryCountForRequestingMissingHeadersInBatchedResponse;
@property (retain, nonatomic) NSDate *lastRetryDate;
@property (weak, nonatomic) id<NNMKBatchRequestHandlerDelegate> delegate;
@property (retain, nonatomic) NNMKResendScheduler *resendScheduler;
@property (retain, nonatomic) NNMKSyncController *syncController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue;

- (void)cancelFetchTimeout;
- (void)_rescheduleFetchTimeout;
- (void)handleMessageDeleted:(id)a0 mailboxId:(id)a1;
- (void).cxx_destruct;
- (void)startFetchTimeout;
- (void)handleBatchRequest:(id)a0;
- (id)init;
- (id)firstMessageIds:(unsigned long long)a0 fromBatchedFetchResults:(id)a1;
- (id)_batchedFetchResultForBatchedRequest:(id)a0 mailbox:(id)a1 diff:(id)a2 localSyncedMessagesByMessageId:(id)a3;
- (id)_checkBatchFetchedMessagesWithMailbox:(id)a0 messageHeadersToFetch:(id *)a1 attemptsFailed:(BOOL *)a2;
- (id)checkBatchFetchedMessages;
- (void)handleMessageAdded:(id)a0;
- (void)reset;

@end
