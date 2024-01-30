@class NSXPCConnection;

@interface THClient : NSObject {
    BOOL _isConnected;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) struct dispatch_queue_s { } *threadSafePropertyQueue;

- (BOOL)isConnected;
- (id)synchronousRemoteObjectProxy;
- (BOOL)initCommon;
- (void)dealloc;
- (id)init;
- (void)setIsConnected:(BOOL)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)handleXPCConnectionInterrupted;
- (void)handleXPCConnectionInvalidated;
- (void)ctcsRetrieveActiveDataSetRecordWithUniqueIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)asynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)checkPreferredNetworkForActiveOperationalDataset:(id)a0 completion:(id /* block */)a1;
- (id)clientProxyWithErrorHandler:(id /* block */)a0;
- (id)clientProxyWithErrorHandler:(id /* block */)a0 pingService:(BOOL)a1;
- (void)connectToXPCService;
- (void)ctcsAddPreferredNetworkWithCompletionInternally:(id)a0 extendedPANId:(id)a1 borderAgentID:(id)a2 ipV4NwSignature:(id)a3 ipv6NwSignature:(id)a4 wifiSSID:(id)a5 wifiPassword:(id)a6 completion:(id /* block */)a7;
- (void)ctcsCleanKeychainThreadNetworksWithCompletion:(id /* block */)a0;
- (void)ctcsCleanPreferredAndFrozenThreadNetworksWithCompletion:(id /* block */)a0;
- (void)ctcsDeleteActiveDataSetRecordWithUniqueIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)ctcsDeletePreferredNetworkWithCompletion:(id /* block */)a0;
- (void)ctcsRetrievePreferredNetworkInternallyWithCompletion:(id /* block */)a0;
- (void)ctcsStoreThreadNetworkCredentialActiveDataSetInternally:(id)a0 network:(id)a1 credentialsDataSet:(id)a2 waitForSync:(BOOL)a3 completion:(id /* block */)a4;
- (void)deleteCredentialsForBorderAgent:(id)a0 completion:(id /* block */)a1;
- (BOOL)getConnectionEntitlementValidity;
- (BOOL)getConnectionEntitlementValidity:(id)a0;
- (BOOL)initCommon:(id)a0;
- (id)initWithKeychainAccessGroup:(id)a0;
- (void)isPreferredNetworkAvailableWithCompletion:(id /* block */)a0;
- (id)performXPCRequestBlock:(id /* block */)a0 timeout:(double)a1 error:(id *)a2;
- (void)pingXPCService;
- (void)pingXPCServiceWithClientProxy:(id)a0 completion:(id /* block */)a1;
- (void)retrieveActiveDataSetRecordInternallyForExtendedPANID:(id)a0 completion:(id /* block */)a1;
- (void)retrieveAllActiveCredentials:(id /* block */)a0;
- (void)retrieveAllCredentials:(id /* block */)a0;
- (void)retrieveCredentialsForBorderAgent:(id)a0 completion:(id /* block */)a1;
- (void)retrieveCredentialsForExtendedPANID:(id)a0 completion:(id /* block */)a1;
- (void)retrieveCredentialsForUUID:(id)a0 completion:(id /* block */)a1;
- (void)retrievePreferredCredentials:(id /* block */)a0;
- (void)retrievePreferredCredentialsInternally:(id /* block */)a0;
- (void)retrievePreferredNetworkInternallyOnMdnsAndSig:(id /* block */)a0;
- (void)storeCredentialsForBorderAgent:(id)a0 activeOperationalDataSet:(id)a1 completion:(id /* block */)a2;
- (void)storeCredentialsForBorderAgentInternally:(id)a0 networkName:(id)a1 extendedPANId:(id)a2 activeOperationalDataSet:(id)a3 completion:(id /* block */)a4;
- (id)synchronousClientProxyWithErrorHandler:(id /* block */)a0;
- (void)updatePreferredCredentialsInternally:(id /* block */)a0;

@end
