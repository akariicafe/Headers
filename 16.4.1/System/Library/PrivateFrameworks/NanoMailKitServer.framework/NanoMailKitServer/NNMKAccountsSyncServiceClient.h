@protocol NNMKAccountsSyncServiceClientDelegate;

@interface NNMKAccountsSyncServiceClient : NNMKSyncServiceEndpoint

@property (weak, nonatomic) id<NNMKAccountsSyncServiceClientDelegate> delegate;

- (void)failedSendingProtobufWithIDSIdentifier:(id)a0 errorCode:(long long)a1;
- (void)readProtobufData:(id)a0 type:(unsigned long long)a1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)sendAccountAuthenticationStatus:(id)a0;
- (id)updateAccountSourceTypeForAccount:(id)a0;

@end
