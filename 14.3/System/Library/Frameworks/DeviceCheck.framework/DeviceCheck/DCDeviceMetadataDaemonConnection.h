@class NSLock, NSXPCConnection;

@interface DCDeviceMetadataDaemonConnection : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

- (id)init;
- (void).cxx_destruct;
- (id)connection;
- (id)remoteObjectProxy:(id /* block */)a0;
- (id)synchronousRemoteObjectProxy:(id /* block */)a0;

@end
