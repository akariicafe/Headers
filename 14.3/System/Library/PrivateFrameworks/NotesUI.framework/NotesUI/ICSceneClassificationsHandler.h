@class NSDictionary, NSXPCConnection;

@interface ICSceneClassificationsHandler : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSDictionary *cachedRequestContextDictionary;

+ (id)sharedHandler;

- (id)requestContextDictionary;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)cancelOperationsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)searchResultNodesForSceneClassifications:(id)a0 error:(id *)a1;
- (id)requestContextDictionaryWithOperationId:(BOOL)a0;
- (void)setupXpcConnection;
- (void)configureXPCConnection;

@end
