@class ASDServiceBroker;

@interface ASDDiagnosticService : NSObject {
    ASDServiceBroker *_serviceBroker;
}

+ (id)interface;
+ (id)defaultService;

- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)addSubscriberWithEndpoint:(id)a0;
- (id)sendDetailsCommand:(long long)a0 timeout:(id)a1 withError:(id *)a2;
- (id)_asynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)activeClientsWithError:(id *)a0;
- (BOOL)pingWithError:(id *)a0;
- (BOOL)sendCommand:(long long)a0 withError:(id *)a1;
- (id)sendDetailsCommand:(long long)a0 withError:(id *)a1;
- (void)_remoteObjectProxyWithErrorHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)initWithServiceBroker:(id)a0;

@end
