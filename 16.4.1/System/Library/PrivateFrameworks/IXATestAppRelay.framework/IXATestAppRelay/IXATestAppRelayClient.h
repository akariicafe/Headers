@class NSXPCConnection;

@interface IXATestAppRelayClient : NSObject <IXATestAppRelayProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;

- (void)_disconnect;
- (void)_initializeConnection;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)fetchEndpointForServiceName:(id)a0 completion:(id /* block */)a1;
- (void)registerEndpoint:(id)a0 forServiceName:(id)a1 withEntitlement:(id)a2 canReplace:(BOOL)a3 completion:(id /* block */)a4;
- (void)unregisterEndpointForServiceName:(id)a0 completion:(id /* block */)a1;

@end
