@protocol NNMKMessagesSyncServiceServerDelegate;

@interface NNMKMessagesSyncServiceServer : NNMKSyncServiceEndpoint

@property (weak, nonatomic) id<NNMKMessagesSyncServiceServerDelegate> delegate;

- (id)initWithQueue:(id)a0;
- (id)sendInitialMessagesSync:(id)a0;
- (id)updateMailboxSelection:(id)a0;
- (void).cxx_destruct;
- (id)updateMessagesStatus:(id)a0 notificationPriority:(BOOL)a1;
- (void)failedSendingProtobufWithIDSIdentifier:(id)a0 errorCode:(long long)a1;
- (id)deleteMessages:(id)a0 notificationPriority:(BOOL)a1;
- (id)sendBatchedInitialMessagesSync:(id)a0;
- (void)spaceBecameAvailable;
- (id)addMessages:(id)a0 notificationPriority:(BOOL)a1;
- (id)sendMoreMessagesForConversation:(id)a0;
- (void)connectivityChanged;
- (id)sendBatchedFetchResult:(id)a0;
- (id)sendCoalescedBatchedFetchResult:(id)a0;
- (id)sendMoreMessages:(id)a0;
- (void)successfullySentProtobufWithIDSIdentifier:(id)a0;
- (void)readProtobufData:(id)a0 type:(unsigned long long)a1;

@end
