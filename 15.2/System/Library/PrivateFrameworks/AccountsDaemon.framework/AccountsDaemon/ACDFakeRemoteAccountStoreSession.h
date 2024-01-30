@class NSObject;

@interface ACDFakeRemoteAccountStoreSession : ACRemoteAccountStoreSession {
    NSObject *_proxy;
}

- (id)remoteObjectProxy;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFakeProxy:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
