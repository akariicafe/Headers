@protocol NNMKMessageContentSyncServiceServerDelegate;

@interface NNMKMessageContentSyncServiceServer : NNMKSyncServiceEndpoint

@property (weak, nonatomic) id<NNMKMessageContentSyncServiceServerDelegate> delegate;

- (void)failedSendingProtobufWithIDSIdentifier:(id)a0 errorCode:(long long)a1;
- (void)readProtobufData:(id)a0 type:(unsigned long long)a1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)notifyInitialContentSyncCompleted:(id)a0;
- (id)syncAttachment:(id)a0 notificationPriority:(BOOL)a1 userRequested:(BOOL)a2;
- (id)syncMessageContent:(id)a0 notificationPriority:(BOOL)a1 userRequested:(BOOL)a2;

@end
