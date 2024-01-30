@class NSLock, NSXPCConnection;

@interface DCDeviceMetadataDaemonConnection : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

- (id)connection;
- (id)synchronousRemoteObjectProxy:(id /* block */)a0;
- (id)remoteObjectProxy:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
