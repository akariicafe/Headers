@class EMRemoteConnection;
@protocol EMRemoteProxyGenerator;

@interface _EMRemoteInterfaceDistantObject : NSObject <EMXPCProxyCreating>

@property (readonly, nonatomic) EMRemoteConnection *remoteInterface;
@property (retain, nonatomic) id<EMRemoteProxyGenerator> proxyGenerator;
@property (readonly, copy, nonatomic) id /* block */ reattemptHandler;
@property (readonly, nonatomic, getter=isSynchronous) BOOL synchronous;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)remoteObjectProxy;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (void)_forwardStackInvocation:(id)a0;
- (id)initWithRemoteInterface:(id)a0 proxyGenerator:(id)a1 synchronous:(BOOL)a2 reattemptHandler:(id /* block */)a3;
- (id)reattemptingRemoteObjectProxy;
- (id)reattemptingRemoteObjectProxyWithReattemptHandler:(id /* block */)a0;

@end
