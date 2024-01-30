@class CRPairedVehicleManager;

@interface RTStarkManager_CarKit : RTStarkManager

@property (nonatomic) BOOL trustedConnectionEstablished;
@property (retain, nonatomic) CRPairedVehicleManager *pairedVehicleManager;

- (id)initWithDefaultsManager:(id)a0;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)setup;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_setup;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_fetchConnectionStateWithHandler:(id /* block */)a0;
- (void)_updateTrustedConnectionEstablished;
- (void)onPairedVehiclesDidChange:(id)a0;

@end
