@protocol NNMKMessagesSyncServiceClientDelegate;

@interface NNMKMessagesSyncServiceClient : NNMKSyncServiceEndpoint

@property (weak, nonatomic) id<NNMKMessagesSyncServiceClientDelegate> delegate;

- (id)sendMessage:(id)a0;
- (id)initWithQueue:(id)a0;
- (id)deleteMessages:(id)a0;
- (id)updateMailboxSelection:(id)a0;
- (void).cxx_destruct;
- (void)failedSendingProtobufWithIDSIdentifier:(id)a0 errorCode:(long long)a1;
- (id)updateMessagesStatus:(id)a0;
- (void)connectivityChanged;
- (void)successfullySentProtobufWithIDSIdentifier:(id)a0;
- (void)readProtobufData:(id)a0 type:(unsigned long long)a1;
- (void)warnMessagesFilteredOut:(id)a0;
- (void)requestCompactMessages:(id)a0;

@end
