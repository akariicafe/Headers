@protocol NNMKMessagesSyncServiceClientDelegate;

@interface NNMKMessagesSyncServiceClient : NNMKSyncServiceEndpoint

@property (weak, nonatomic) id<NNMKMessagesSyncServiceClientDelegate> delegate;

- (id)deleteMessages:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)successfullySentProtobufWithIDSIdentifier:(id)a0;
- (id)sendMessage:(id)a0;
- (id)updateMailboxSelection:(id)a0;
- (void)readProtobufData:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)failedSendingProtobufWithIDSIdentifier:(id)a0 errorCode:(long long)a1;
- (void)connectivityChanged;
- (id)updateMessagesStatus:(id)a0;
- (id)moveMessages:(id)a0;
- (void)warnMessagesFilteredOut:(id)a0;
- (void)requestCompactMessages:(id)a0;
- (id)sendAttachmentAtURL:(id)a0 forComposedMessageId:(id)a1;

@end
