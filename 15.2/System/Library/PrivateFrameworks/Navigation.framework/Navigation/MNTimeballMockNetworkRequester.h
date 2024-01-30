@interface MNTimeballMockNetworkRequester : MNTimeballNetworkRequester

+ (void)setExpectedRouteUpdate:(id)a0;

- (void)requestRoutingOptions:(long long)a0 forDestinations:(id)a1 fromOrigin:(id)a2 auditToken:(id)a3 callbackBlock:(id /* block */)a4 callbackQueue:(id)a5;

@end
