@protocol NNMKMessageContentSyncServiceClientDelegate;

@interface NNMKMessageContentSyncServiceClient : NNMKSyncServiceEndpoint

@property (weak, nonatomic) id<NNMKMessageContentSyncServiceClientDelegate> delegate;

- (void)failedSendingProtobufWithIDSIdentifier:(id)a0 errorCode:(long long)a1;
- (void)readProtobufData:(id)a0 type:(unsigned long long)a1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
