@protocol NNMKAccountsSyncServiceServerDelegate;

@interface NNMKAccountsSyncServiceServer : NNMKSyncServiceEndpoint

@property (weak, nonatomic) id<NNMKAccountsSyncServiceServerDelegate> delegate;

- (id)requestWatchAccountsStatus:(id)a0;
- (void)failedSendingProtobufWithIDSIdentifier:(id)a0 errorCode:(long long)a1;
- (void)readProtobufData:(id)a0 type:(unsigned long long)a1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)a0;
- (id)sendStandaloneAccountIdentity:(id)a0;
- (id)syncVIPList:(id)a0;
- (id)deleteAccount:(id)a0;
- (id)sendInitialAccountsSync:(id)a0;
- (id)addOrUpdateAccount:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
