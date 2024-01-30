@class NSXPCConnection, NSXPCInterface;
@protocol SKPresenceConnectionDelegateProtocol, SKPresenceDaemonDelegateProtocol;

@interface SKPresenceDaemonConnection : NSObject

@property (class, readonly, nonatomic) NSXPCInterface *daemonXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *daemonDelegateXPCInterface;

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (weak, nonatomic) id<SKPresenceDaemonDelegateProtocol> presenceDaemonDelegate;
@property (weak, nonatomic) id<SKPresenceConnectionDelegateProtocol> connectionDelegate;

+ (id)logger;

- (void)setXPCConnection:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_resetConnectionHandlers;
- (unsigned long long)_xpcConnectionOptions;
- (id)asynchronousRemoteDaemonWithErrorHandler:(id /* block */)a0;
- (id)initWithPresenceDaemonDelegate:(id)a0 connectionDelegate:(id)a1;
- (id)synchronousRemoteDaemonWithErrorHandler:(id /* block */)a0;

@end
