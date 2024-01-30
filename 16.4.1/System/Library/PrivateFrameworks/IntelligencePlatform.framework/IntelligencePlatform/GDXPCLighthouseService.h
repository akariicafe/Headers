@class NSXPCInterface, NSXPCConnection;

@interface GDXPCLighthouseService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)collectDBStats:(id *)a0;
- (id)collectDBStatus:(id *)a0;
- (void)locked_establishConnection;

@end
