@class NSXPCConnection;

@interface LSDatabaseBlockingFetchClient : NSObject <LSDatabaseBlockingFetchProtocol> {
    NSXPCConnection *_connection;
}

- (id)initWithXPCConnection:(id)a0;
- (void).cxx_destruct;
- (void)getServerStoreBlockingWithCompletionHandler:(id /* block */)a0;

@end
