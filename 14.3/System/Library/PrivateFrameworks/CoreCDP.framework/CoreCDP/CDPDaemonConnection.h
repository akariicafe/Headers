@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface CDPDaemonConnection : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint;

- (id)daemon;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (id)connection;

@end
