@class NSString, ASDServiceBroker;

@interface ASDManagedAppService : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (id)defaultService;

- (id)init;
- (void).cxx_destruct;
- (void)requestStatusWithResultHandler:(id /* block */)a0;
- (id)showVPPInviteForCurrentUser:(id)a0 orgName:(id)a1;
- (void)submitManifestRequest:(id)a0 withResultHandler:(id /* block */)a1;
- (void)submitVPPRequest:(id)a0 withResultHandler:(id /* block */)a1;

@end
