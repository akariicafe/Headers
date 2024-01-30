@interface AACClient.AECLifetimeConnection : NSObject <AELifecycleEventHandling, NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ invalidationHandler;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)handleEventDidBeginWithCompletion:(id /* block */)a0;
- (void)handleEventDidInvalidateWithError:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
