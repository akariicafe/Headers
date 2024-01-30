@protocol NNMKMessageContentSyncServiceServerDelegate;

@interface NNMKMessageContentSyncServiceServer : NNMKSyncServiceEndpoint

@property (weak, nonatomic) id<NNMKMessageContentSyncServiceServerDelegate> delegate;

- (id)initWithQueue:(id)a0;
- (void)successfullySentProtobufWithIDSIdentifier:(id)a0;
- (void)readProtobufData:(id)a0 type:(unsigned long long)a1;
- (id)notifyInitialContentSyncCompleted:(id)a0;
- (void).cxx_destruct;
- (id)syncAttachment:(id)a0 notificationPriority:(BOOL)a1 userRequested:(BOOL)a2;
- (id)syncMessageContent:(id)a0 notificationPriority:(BOOL)a1 userRequested:(BOOL)a2;
- (void)failedSendingProtobufWithIDSIdentifier:(id)a0 errorCode:(long long)a1;

@end
