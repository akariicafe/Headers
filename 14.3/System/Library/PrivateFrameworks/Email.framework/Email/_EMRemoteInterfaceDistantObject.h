@class EMRemoteConnection;

@interface _EMRemoteInterfaceDistantObject : NSObject <EMXPCProxyCreating>

@property (readonly, nonatomic) EMRemoteConnection *remoteInterface;
@property (readonly, copy, nonatomic) id /* block */ reattemptHandler;
@property (readonly, nonatomic, getter=isSynchronous) BOOL synchronous;

- (void)forwardInvocation:(id)a0;
- (id)reattemptingRemoteObjectProxy;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)_forwardStackInvocation:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)reattemptingRemoteObjectProxyWithReattemptHandler:(id /* block */)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithRemoteInterface:(id)a0 synchronous:(BOOL)a1 reattemptHandler:(id /* block */)a2;

@end
