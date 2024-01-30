@class NSData, NSError;

@interface FitnessCoaching.XPCListener : NSObject <NSXPCListenerDelegate, FCCTransportInterface> {
    void /* unknown type, empty encoding */ transportDispatchService;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ requiredEntitlements;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)transportMessage:(unsigned long long)a0 data:(NSData *)a1 completion:(void (^)(NSError *))a2;
- (void)transportRequest:(unsigned long long)a0 data:(NSData *)a1 completion:(void (^)(NSData *, NSError *))a2;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
