@class NSXPCConnection, NSObject;

@interface RMConfigurationSubscriberClient : NSObject {
    NSObject *_connectionLock;
    NSXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_connection;
- (void)_asynchronousProxyWithHandler:(id /* block */)a0;
- (void)fetchConfigurationsWithTypes:(id)a0 completionHandler:(id /* block */)a1;

@end
