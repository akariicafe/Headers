@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface FLDaemon : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint;

+ (id)sharedInstance;
+ (id)daemonWithErrorHandler:(id /* block */)a0;

- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (void)invalidateConnection;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectInterface;
- (id)connection;

@end
