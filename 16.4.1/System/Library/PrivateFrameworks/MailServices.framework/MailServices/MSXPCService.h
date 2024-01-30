@class NSLock, NSXPCConnection, NSXPCInterface;

@interface MSXPCService : NSObject {
    NSLock *_lock;
    NSXPCInterface *_remoteObjectInterface;
    NSXPCConnection *_connection;
}

@property (nonatomic) BOOL shouldLaunchMobileMail;

+ (id)remoteProxyForXPCInterface:(id)a0 connectionErrorHandler:(id /* block */)a1;
+ (id)remoteProxyForXPCInterface:(id)a0 shouldLaunchMobileMail:(BOOL)a1 connectionErrorHandler:(id /* block */)a2;

- (id)connection;
- (id)newConnectionForInterface:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithRemoteObjectInterface:(id)a0;
- (void)dealloc;
- (id)init;
- (id)remoteObjectProxy;
- (void).cxx_destruct;

@end
