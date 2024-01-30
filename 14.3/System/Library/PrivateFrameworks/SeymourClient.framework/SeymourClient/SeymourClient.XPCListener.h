@interface SeymourClient.XPCListener : NSObject <NSXPCListenerDelegate, SeymourClient.TransportServer> {
    void /* unknown type, empty encoding */ dispatchService;
    void /* unknown type, empty encoding */ clients;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ requiredEntitlements;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)receiveRequest:(long long)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)receiveEvent:(long long)a0 data:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
