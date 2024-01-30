@class NSString, PKEntitlementWhitelist, PDDeviceRegistrationServiceCoordinator;

@interface PDDeviceRegistrationService : PDXPCService <PDDeviceRegistrationServiceExportedInterface> {
    PKEntitlementWhitelist *_whitelist;
}

@property (retain, nonatomic) PDDeviceRegistrationServiceCoordinator *deviceRegistrationServiceCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performDeviceRegistrationForReason:(id)a0 actionType:(long long)a1 completion:(id /* block */)a2;
- (id)initWithConnection:(id)a0;

@end
