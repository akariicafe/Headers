@class BLSHXPCAssertionServiceHostServer, BLSHLocalAssertionService;

@interface BLSHAssertionService : NSObject {
    BLSHXPCAssertionServiceHostServer *_server;
}

@property (readonly, nonatomic) BLSHLocalAssertionService *localAssertionService;

+ (id)serviceForService:(id)a0 withOSInterfaceProvider:(id)a1;

- (void).cxx_destruct;
- (id)initWithService:(id)a0 osInterfaceProvider:(id)a1;

@end
