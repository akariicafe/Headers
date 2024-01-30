@class NSLock, NSXPCConnection, NSXPCInterface;

@interface MSXPCService : NSObject {
    NSLock *_lock;
    NSXPCInterface *_remoteObjectInterface;
    NSXPCConnection *_connection;
}

@property (nonatomic) BOOL shouldLaunchMobileMail;

+ (id)remoteProxyForXPCInterface:(id)a0 shouldLaunchMobileMail:(BOOL)a1 connectionErrorHandler:(id /* block */)a2;
+ (id)remoteProxyForXPCInterface:(id)a0 connectionErrorHandler:(id /* block */)a1;

- (id)newConnectionForInterface:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRemoteObjectInterface:(id)a0;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)connection;

@end
