@class NSXPCConnection;

@interface THClient : NSObject {
    BOOL _isConnected;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) struct dispatch_queue_s { } *threadSafePropertyQueue;
@property (nonatomic) BOOL isConnected;

- (id)synchronousRemoteObjectProxy;
- (void)handleXPCConnectionInterrupted;
- (void)handleXPCConnectionInvalidated;
- (BOOL)initCommon;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)retrievePreferredCredentialsInternally:(id /* block */)a0;
- (id)initWithKeychainAccessGroup:(id)a0;
- (void)retrieveCredentialsForUUID:(id)a0 completion:(id /* block */)a1;
- (BOOL)initCommon:(id)a0;
- (BOOL)getConnectionEntitlementValidity:(id)a0;
- (BOOL)getConnectionEntitlementValidity;
- (id)clientProxyWithErrorHandler:(id /* block */)a0 pingService:(BOOL)a1;
- (void)connectToXPCService;
- (void)pingXPCServiceWithClientProxy:(id)a0 completion:(id /* block */)a1;
- (id)synchronousClientProxyWithErrorHandler:(id /* block */)a0;
- (void)pingXPCService;
- (id)clientProxyWithErrorHandler:(id /* block */)a0;
- (id)performXPCRequestBlock:(id /* block */)a0 timeout:(double)a1 error:(id *)a2;
- (id)asynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)ctcsStoreThreadNetworkCredentialActiveDataSetInternally:(id)a0 network:(id)a1 credentialsDataSet:(id)a2 waitForSync:(BOOL)a3 completion:(id /* block */)a4;
- (void)ctcsDeleteActiveDataSetRecordWithUniqueIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)ctcsRetrieveActiveDataSetRecordWithUniqueIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)ctcsRetrievePreferredNetworkInternallyWithCompletion:(id /* block */)a0;
- (void)ctcsDeletePreferredNetworkWithCompletion:(id /* block */)a0;
- (void)storeCredentialsForBorderAgentInternally:(id)a0 networkName:(id)a1 extendedPANId:(id)a2 activeOperationalDataSet:(id)a3 completion:(id /* block */)a4;
- (void)deleteCredentialsForBorderAgent:(id)a0 completion:(id /* block */)a1;
- (void)storeCredentialsForBorderAgent:(id)a0 activeOperationalDataSet:(id)a1 completion:(id /* block */)a2;
- (void)retrieveAllCredentials:(id /* block */)a0;
- (void)retrieveCredentialsForBorderAgent:(id)a0 completion:(id /* block */)a1;
- (void)retrievePreferredCredentials:(id /* block */)a0;
- (void)retrieveCredentialsForExtendedPANID:(id)a0 completion:(id /* block */)a1;

@end
