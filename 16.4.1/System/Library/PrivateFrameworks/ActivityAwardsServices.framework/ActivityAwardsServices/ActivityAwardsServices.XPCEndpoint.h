@class NSData, NSError;

@interface ActivityAwardsServices.XPCEndpoint : NSObject <NSXPCListenerDelegate, AACTransportInterface> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ requiredEntitlements;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ transportDispatchService;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ connection;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)transportRequest:(unsigned long long)a0 data:(NSData *)a1 completion:(void (^)(NSData *, NSError *))a2;
- (void)transportEvent:(unsigned long long)a0 data:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
