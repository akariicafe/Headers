@class NNMKSyncController;
@protocol NNMKResendSchedulerDelegate;

@interface NNMKResendScheduler : NSObject

@property (nonatomic) unsigned long long initialSyncResendInterval;
@property (weak, nonatomic) id<NNMKResendSchedulerDelegate> delegate;
@property (retain, nonatomic) NNMKSyncController *syncController;

- (void).cxx_destruct;
- (void)_resendPendingMessagesWithIds:(id)a0 forIDSIdentifier:(id)a1 newResendInterval:(unsigned long long)a2;
- (void)_resendPendingMessageContentWithId:(id)a0 sentBecauseUserRequested:(BOOL)a1 idsIdentifier:(id)a2 newResendInterval:(unsigned long long)a3;
- (void)registerIDSIdentifier:(id)a0 objectIds:(id)a1 type:(id)a2 resendInterval:(unsigned long long)a3;
- (void)handleIDSMessageSentSuccessfullyWithId:(id)a0;
- (void)_resendObjectIds:(id)a0 type:(id)a1 resendInterval:(unsigned long long)a2 idsIdentifier:(id)a3;
- (id)objectIdsForPendingIDSIdentifier:(id)a0;
- (void)_failPendingComposedMessages;
- (void)_executePendingResendsAndContentRequests;
- (void)deletePendingIDSMessagesForMailboxId:(id)a0;
- (void)forceRetryingAllPendingIDSMessages;
- (id)messageTypeForIDSIdentifier:(id)a0;
- (void)_resendInitialSyncWithIDSIdentifier:(id)a0 newResendInterval:(unsigned long long)a1 mailboxIds:(id)a2;
- (void)_scheduleIdsIdentifierForResend:(id)a0 currentResendInterval:(unsigned long long)a1 newResendInterval:(unsigned long long)a2 errorCode:(long long)a3;
- (void)_resendPendingAccountWithIds:(id)a0 forIDSIdentifier:(id)a1 newResendInterval:(unsigned long long)a2;
- (void)resetInitialSyncResendInterval;
- (void)_resendSendingProgressForComposedMessageWithId:(id)a0 forIDSIdentifier:(id)a1 newResendInterval:(unsigned long long)a2;
- (id)deviceRegistry;
- (void)handleIDSMessageFailedWithId:(id)a0 errorCode:(long long)a1;
- (void)resendObjectsForIDSIdentifier:(id)a0;

@end
