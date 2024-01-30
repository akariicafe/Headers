@class NSString, NSObject;
@protocol OS_dispatch_queue, PLXPCProxyCreating;

@interface PLAssetsdServiceProxyFactory : NSObject <PLXPCProxyCreating, PLXPCAsyncProxyCreating> {
    SEL _proxyGetterSelector;
    id<PLXPCProxyCreating> _serviceProxy;
    id<PLXPCProxyCreating> _proxyCreating;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_inq_createServiceProxyWithErrorHandler:(id /* block */)a0;
- (void)remoteObjectProxyWithErrorHandler:(id /* block */)a0 handler:(id /* block */)a1;
- (void)addBarrierBlock:(id /* block */)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)serviceProxyWithErrorHandler:(id /* block */)a0;
- (id)_unboostingRemoteObjectProxy;
- (id)initWithQueue:(id)a0 proxyCreating:(id)a1 proxyGetter:(SEL)a2;
- (void)_logReplyError:(id)a0 withCallStackSymbols:(id)a1;
- (void).cxx_destruct;
- (id)_inq_createServiceProxyWithCallStackSymbols:(id)a0 errorHandler:(id /* block */)a1;

@end
