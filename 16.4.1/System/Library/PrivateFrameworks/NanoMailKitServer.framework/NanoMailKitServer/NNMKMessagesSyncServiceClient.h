@protocol NNMKMessagesSyncServiceClientDelegate;

@interface NNMKMessagesSyncServiceClient : NNMKSyncServiceEndpoint

@property (weak, nonatomic) id<NNMKMessagesSyncServiceClientDelegate> delegate;

- (id)deleteMessages:(id)a0;
- (id)sendMessage:(id)a0;
- (id)updateMessagesStatus:(id)a0;
- (void)failedSendingProtobufWithIDSIdentifier:(id)a0 errorCode:(long long)a1;
- (void)readProtobufData:(id)a0 type:(unsigned long long)a1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)a0;
- (id)updateMailboxSelection:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)connectivityChanged;
- (id)moveMessages:(id)a0;
- (void)requestCompactMessages:(id)a0;
- (id)sendAttachmentAtURL:(id)a0 forComposedMessageId:(id)a1;
- (void)warnMessagesFilteredOut:(id)a0;

@end
