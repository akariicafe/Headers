@class BluetoothManager, NSSet;

@interface RTBluetoothManager_BluetoothManager : RTBluetoothManager

@property (readonly, nonatomic) BluetoothManager *bluetoothManager;
@property (retain, nonatomic) NSSet *connectedDevices;
@property (nonatomic) BOOL observingConnections;
@property (nonatomic) long long carKitConnectionState;

- (void)_shutdown;
- (void).cxx_destruct;
- (void)dealloc;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (long long)getCarKitConnectionStateFromConnectedDevices:(id)a0;
- (void)updateConnections;
- (void)shouldObserveConnections;
- (void)_fetchCarKitConnectedStateWithHandler:(id /* block */)a0;

@end
