@interface ABRequestHandler : NSObject <AuthBrokerQuery> {
    struct AuthBrokerAuthenticator { void /* function */ **x0; void /* function */ **x1; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x2; void /* function */ **x3; struct _CFURLCredentialStorage *x4; struct __CFSet *x5; struct RetainableTypedDict<_CFURLProtectionSpace *const, NetworkProxyCredential *> { void /* function */ **x0; struct __CFDictionary *x1; } x6; struct unique_ptr<NSObject<OS_dispatch_queue>, Deleter_DispatchRelease<NSObject<OS_dispatch_queue> *> > { struct __compressed_pair<NSObject<OS_dispatch_queue> *, Deleter_DispatchRelease<NSObject<OS_dispatch_queue> *> > { id x0; } x0; } x7; } *authenticator;
}

- (id)init;
- (void)fetchProxyCredential:(id)a0 reply:(id /* block */)a1;

@end
