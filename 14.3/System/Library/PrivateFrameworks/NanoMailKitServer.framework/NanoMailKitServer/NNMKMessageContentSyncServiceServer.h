@protocol NNMKMessageContentSyncServiceServerDelegate;

@interface NNMKMessageContentSyncServiceServer : NNMKSyncServiceEndpoint

@property (weak, nonatomic) id<NNMKMessageContentSyncServiceServerDelegate> delegate;

- (id)notifyInitialContentSyncCompleted:(id)a0;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)syncMessageContent:(id)a0 notificationPriority:(BOOL)a1 userRequested:(BOOL)a2;
- (void)failedSendingProtobufWithIDSIdentifier:(id)a0 errorCode:(long long)a1;
- (id)syncImageAttachment:(id)a0 notificationPriority:(BOOL)a1 userRequested:(BOOL)a2;
- (void)successfullySentProtobufWithIDSIdentifier:(id)a0;
- (void)readProtobufData:(id)a0 type:(unsigned long long)a1;

@end
