@protocol NNMKFetchesSyncServiceServerDelegate;

@interface NNMKFetchesSyncServiceServer : NNMKSyncServiceEndpoint

@property (weak, nonatomic) id<NNMKFetchesSyncServiceServerDelegate> delegate;

- (void)notifyOldMessagesAvailable:(id)a0;
- (void)requestPrepareForFullSync:(id)a0;
- (void)failedSendingProtobufWithIDSIdentifier:(id)a0 errorCode:(long long)a1;
- (void)readProtobufData:(id)a0 type:(unsigned long long)a1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)a0;
- (void)notifyFetchRequestCompleted:(id)a0;
- (id)reportComposedMessageSendingProgress:(id)a0;
- (void)warnErrorDownloadingContentForMessage:(id)a0 notificationPriority:(BOOL)a1 userRequested:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
