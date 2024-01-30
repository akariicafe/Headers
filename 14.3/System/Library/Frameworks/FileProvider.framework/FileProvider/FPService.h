@class NSXPCInterface, NSXPCConnection;
@protocol FPDLifetimeServicing, NSXPCProxyCreating;

@interface FPService : NSObject <FPDLifetimeServicing> {
    id<FPDLifetimeServicing> _extender;
    NSXPCConnection *_connection;
    id<NSXPCProxyCreating> _proxy;
    NSXPCInterface *_interface;
}

@property (readonly) id remoteObjectProxy;
@property (readonly) id synchronousRemoteObjectProxy;

- (id)initWithProxy:(id)a0 interface:(id)a1 lifetimeExtender:(id)a2 providerDomainID:(id)a3;
- (id)initWithEndpoint:(id)a0 interface:(id)a1 lifetimeExtender:(id)a2 providerDomainID:(id)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (void)stopExtendingLifetime;
- (id)remoteObjectProxyCreating;

@end
