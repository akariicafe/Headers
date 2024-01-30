@class NSLock, NSXPCConnection;

@interface DCDeviceMetadataDaemonConnection : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

- (void).cxx_destruct;
- (id)init;
- (id)connection;
- (id)remoteObjectProxy:(id /* block */)a0;
- (id)synchronousRemoteObjectProxy:(id /* block */)a0;

@end
