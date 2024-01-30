@interface SeymourClient.XPCClient : _TtCs12_SwiftObject <SeymourClient.TransportServer> {
    void /* unknown type, empty encoding */ dispatchService;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ server;
    void /* unknown type, empty encoding */ state;
}

- (void)receiveRequest:(long long)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)receiveEvent:(long long)a0 data:(id)a1;

@end
