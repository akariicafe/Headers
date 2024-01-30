@class NSArray, AXRDeviceDiscoveryManager, NSString;

@interface AXRNearbyDevicesViewController : UITableViewController <AXRDeviceDiscoveryObserver, AXRemoteViewServiceInterface>

@property (retain, nonatomic) AXRDeviceDiscoveryManager *discoveryManager;
@property (retain, nonatomic) NSArray *discoveredDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_dismissPresentedViewController;
- (void)deviceDiscoveryManager:(id)a0 updatedDevices:(id)a1;
- (void)_connectToDevice:(id)a0;
- (void)_showActiveDeviceConnectionAlertWithDevice:(id)a0;
- (void)_showFailedToConnectAlert;

@end
