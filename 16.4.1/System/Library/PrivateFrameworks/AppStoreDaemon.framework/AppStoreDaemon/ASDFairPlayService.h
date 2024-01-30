@class NSString, ASDServiceBroker;

@interface ASDFairPlayService : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (class, readonly) ASDFairPlayService *defaultService;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;

- (void).cxx_destruct;
- (BOOL)importSubscriptionKeybag:(id)a0 error:(id *)a1;
- (id)generateKeybagRequestForDSID:(unsigned long long)a0 error:(id *)a1;
- (id)generateSubscriptionRequestForDSID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)importKeybag:(id)a0 error:(id *)a1;

@end
