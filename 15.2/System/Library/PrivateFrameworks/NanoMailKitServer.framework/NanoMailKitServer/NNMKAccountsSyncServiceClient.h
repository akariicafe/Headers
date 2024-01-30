@protocol NNMKAccountsSyncServiceClientDelegate;

@interface NNMKAccountsSyncServiceClient : NNMKSyncServiceEndpoint

@property (weak, nonatomic) id<NNMKAccountsSyncServiceClientDelegate> delegate;

- (id)initWithQueue:(id)a0;
- (void)successfullySentProtobufWithIDSIdentifier:(id)a0;
- (void)readProtobufData:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)failedSendingProtobufWithIDSIdentifier:(id)a0 errorCode:(long long)a1;
- (id)updateAccountSourceTypeForAccount:(id)a0;
- (id)sendAccountAuthenticationStatus:(id)a0;

@end
