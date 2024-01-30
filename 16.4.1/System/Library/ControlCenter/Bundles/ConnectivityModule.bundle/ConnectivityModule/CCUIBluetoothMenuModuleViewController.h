@class NSString, NSMutableSet, CBCentralManager;

@interface CCUIBluetoothMenuModuleViewController : CCUIAlwaysExpandedMenuModuleViewController <CBCentralManagerPrivateDelegate> {
    NSMutableSet *_busyIdentifiers;
    CBCentralManager *_centralManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)centralManagerDidUpdateState:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)centralManager:(id)a0 didUpdatePeripheralConnectionState:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_shouldHideBluetoothPeripheral:(id)a0;
- (void)_bluetoothAvailabilityChanged:(id)a0;
- (void)_bluetoothDeviceConnectionStatusDidChange:(id)a0;
- (void)_bluetoothDeviceRemoved:(id)a0;
- (id)_menuItemForBluetoothDevice:(id)a0;
- (id)_menuItemForBluetoothPeripheral:(id)a0;
- (id)_subtitleForConnected:(BOOL)a0;
- (void)_updateBluetoothMenuItems;

@end
