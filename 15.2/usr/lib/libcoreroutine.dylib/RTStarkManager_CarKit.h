@class CRPairedVehicleManager;

@interface RTStarkManager_CarKit : RTStarkManager

@property (nonatomic) BOOL trustedConnectionEstablished;
@property (retain, nonatomic) CRPairedVehicleManager *pairedVehicleManager;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_setup;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_fetchConnectionStateWithHandler:(id /* block */)a0;
- (void)setup;
- (void)onPairedVehiclesDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefaultsManager:(id)a0;
- (void)_updateTrustedConnectionEstablished;

@end
