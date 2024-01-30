@class NSObject;
@protocol TSBonjourAdvertiseDelegate, OS_dispatch_queue;

@interface TSBonjourAdvertise : NSObject {
    struct _DNSServiceRef_t { } *_sdRef;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) id<TSBonjourAdvertiseDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)stopAdvertising;
- (void)registeredServiceWithName:(const char *)a0 regType:(const char *)a1 domain:(const char *)a2 withFlags:(unsigned int)a3;
- (BOOL)startAdvertisingWithError:(id *)a0;

@end
