@class NSString, PKEntitlementWhitelist, PDDeviceRegistrationServiceCoordinator;

@interface PDDeviceRegistrationService : PDXPCService <PDDeviceRegistrationServiceExportedInterface> {
    PKEntitlementWhitelist *_whitelist;
}

@property (retain, nonatomic) PDDeviceRegistrationServiceCoordinator *deviceRegistrationServiceCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)performDeviceRegistrationForReason:(id)a0 brokerURL:(id)a1 actionType:(long long)a2 completion:(id /* block */)a3;

@end
