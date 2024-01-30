@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface FLDaemon : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint;

+ (id)sharedInstance;
+ (id)daemonWithErrorHandler:(id /* block */)a0;

- (void)invalidateConnection;
- (id)connection;
- (id)remoteObjectInterface;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
