@class NSXPCConnection;

@interface SafariSandboxBrokerConnection : WBSUISafariSandboxBrokerConnection {
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)_connectionWithCompletionHandler:(id /* block */)a0;

@end
