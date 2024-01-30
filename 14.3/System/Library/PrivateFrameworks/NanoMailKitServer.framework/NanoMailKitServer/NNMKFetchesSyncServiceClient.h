@protocol NNMKFetchesSyncServiceClientDelegate;

@interface NNMKFetchesSyncServiceClient : NNMKSyncServiceEndpoint

@property (weak, nonatomic) id<NNMKFetchesSyncServiceClientDelegate> delegate;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)failedSendingProtobufWithIDSIdentifier:(id)a0 errorCode:(long long)a1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)a0;
- (void)readProtobufData:(id)a0 type:(unsigned long long)a1;
- (id)requestFetch:(id)a0;
- (id)requestMoreMessagesInBatch:(id)a0;
- (void)requestMoreMessagesForConversation:(id)a0;
- (id)requestContent:(id)a0 highPriority:(BOOL)a1;
- (id)requestFullSync:(id)a0;
- (id)requestHaltSync:(id)a0;
- (id)notifyInitialSyncFinished:(id)a0;
- (id)notifyCompanionAboutWebKitStatus:(id)a0;

@end
