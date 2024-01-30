@class CRPairedVehicleManager;

@interface RTStarkManager_CarKit : RTStarkManager

@property (nonatomic) BOOL trustedConnectionEstablished;
@property (retain, nonatomic) CRPairedVehicleManager *pairedVehicleManager;

- (void)_shutdown;
- (void)setup;
- (void)_setup;
- (void).cxx_destruct;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (id)initWithDefaultsManager:(id)a0;
- (void)onPairedVehiclesDidChange:(id)a0;
- (void)_updateTrustedConnectionEstablished;
- (void)_fetchConnectionStateWithHandler:(id /* block */)a0;

@end
