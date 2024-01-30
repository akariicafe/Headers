@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface CDPDaemonConnection : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint;

- (id)daemon;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)connection;
- (void)dealloc;
- (id)daemonWithErrorHandler:(id /* block */)a0;

@end
