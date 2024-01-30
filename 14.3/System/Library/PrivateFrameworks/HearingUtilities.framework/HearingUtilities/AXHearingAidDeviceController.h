@class CBCentralManager, NSString, NSObject, NSMutableDictionary, AXDispatchTimer, NSMutableArray, NSLock;
@protocol OS_dispatch_queue;

@interface AXHearingAidDeviceController : HUDeviceController <CBCentralManagerDelegate, AXHADeviceControllerProtocol> {
    CBCentralManager *_bluetoothManager;
    NSLock *_centralRequestsLock;
    BOOL _isScanning;
    BOOL _centralIsOn;
    NSObject<OS_dispatch_queue> *_bluetoothCentralQueue;
    NSObject<OS_dispatch_queue> *_deviceUpdatesQueue;
    NSMutableDictionary *_deviceUpdatesDescription;
    AXDispatchTimer *_advertisingTimeoutTimer;
    NSMutableDictionary *_advertisingTimestamps;
    AXDispatchTimer *_availableDeviceTimer;
}

@property (retain, nonatomic) NSMutableArray *availablePeripherals;
@property (retain) NSMutableArray *loadedDevices;
@property (retain, nonatomic) NSMutableArray *connectedDevices;
@property (retain, nonatomic) NSMutableArray *persistentDevices;
@property (retain, nonatomic) NSMutableArray *updateDeviceBlocks;
@property (retain, nonatomic) NSMutableArray *centralRequestBlocks;
@property (retain, nonatomic) NSMutableArray *availableSearchBlocks;
@property (retain, nonatomic) NSMutableArray *connectedSearchBlocks;
@property (nonatomic) BOOL shouldActiveScan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (BOOL)isPaired;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (BOOL)isScanning;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)stopSearching;
- (id)init;
- (void).cxx_destruct;
- (void)pairingAgent:(id)a0 peerDidCompletePairing:(id)a1;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (BOOL)representsLocalDevices;
- (void)centralManager:(id)a0 didRetrievePeripherals:(id)a1;
- (void)centralManager:(id)a0 didRetrieveConnectedPeripherals:(id)a1;
- (void)dealloc;
- (id)hearingAidForDeviceID:(id)a0;
- (void)pairingAgent:(id)a0 peerDidFailToCompletePairing:(id)a1 error:(id)a2;
- (BOOL)isConnected;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)pairingAgent:(id)a0 peerDidUnpair:(id)a1;
- (void)forgetDevice:(id)a0;
- (void)connectToPeripheral:(id)a0;
- (void)disconnectFromPeripheral:(id)a0;
- (void)unpairPeripheralWithUUID:(id)a0;
- (void)resetConnectionToPeripheral:(id)a0;
- (void)mergeDevice:(id)a0 withDevice:(id)a1;
- (void)replaceDevice:(id)a0 withDevice:(id)a1;
- (void)checkPeripheralPaired:(id)a0 withCompletion:(id /* block */)a1;
- (id)hearingAidsForUUID:(id)a0;
- (void)deviceDidFinishLoading:(id)a0;
- (void)checkPartiallyPairedWithCompletion:(id /* block */)a0;
- (void)searchForAvailableDevicesWithCompletion:(id /* block */)a0;
- (void)disconnectFromHearingAidWithDeviceUUID:(id)a0;
- (void)cancelPendingConnections;
- (id)valueForProperty:(unsigned long long)a0 forDeviceID:(id)a1;
- (BOOL)isPartiallyConnected;
- (void)persistPairedHearingAids;
- (BOOL)isBluetoothAvailable;
- (void)shouldRelinquishForPartialConnection:(id /* block */)a0;
- (void)searchForAvailableDevices;
- (void)pairedHearingAidsDidChange;
- (void)removeLoadedDevice:(id)a0;
- (void)removeAvailableDevice:(id)a0;
- (void)clearMissingHearingAids;
- (void)sendRequestToCentralManager:(id /* block */)a0;
- (void)loadedDevicesDidChange;
- (id)hearingAidForPeripheral:(id)a0;
- (void)removeConnectedDevice:(id)a0;
- (void)addConnectedDevice:(id)a0;
- (void)addLoadedDevice:(id)a0;
- (void)addAvailableDevice:(id)a0;
- (void)clearAvailableDevices;
- (void)clearConnectedDevices;
- (void)clearLoadedDevices;
- (id)hearingAidsForPeripheral:(id)a0;
- (void)searchForConnectedDevices;

@end
