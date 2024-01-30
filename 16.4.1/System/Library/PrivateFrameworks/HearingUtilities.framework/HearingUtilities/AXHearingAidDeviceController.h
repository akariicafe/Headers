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
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (BOOL)isConnected;
- (void)pairingAgent:(id)a0 peerDidFailToCompletePairing:(id)a1 error:(id)a2;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)pairingAgent:(id)a0 peerDidUnpair:(id)a1;
- (void)stopSearching;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)pairingAgent:(id)a0 peerDidCompletePairing:(id)a1;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (BOOL)isScanning;
- (void)dealloc;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (id)init;
- (void).cxx_destruct;
- (void)centralManager:(id)a0 didRetrieveConnectedPeripherals:(id)a1;
- (void)centralManager:(id)a0 didRetrievePeripherals:(id)a1;
- (void)forgetDevice:(id)a0;
- (void)addAvailableDevice:(id)a0;
- (void)addConnectedDevice:(id)a0;
- (void)addLoadedDevice:(id)a0;
- (void)cancelPendingConnections;
- (void)checkPartiallyPairedWithCompletion:(id /* block */)a0;
- (void)checkPeripheralPaired:(id)a0 withCompletion:(id /* block */)a1;
- (void)clearAvailableDevices;
- (void)clearConnectedDevices;
- (void)clearLoadedDevices;
- (void)clearMissingHearingAids;
- (void)connectToPeripheral:(id)a0;
- (void)deviceDidFinishLoading:(id)a0;
- (void)disconnectFromHearingAidWithDeviceUUID:(id)a0;
- (void)disconnectFromPeripheral:(id)a0;
- (id)hearingAidForDeviceID:(id)a0;
- (id)hearingAidForPeripheral:(id)a0;
- (id)hearingAidsForPeripheral:(id)a0;
- (id)hearingAidsForUUID:(id)a0;
- (BOOL)isBluetoothAvailable;
- (BOOL)isPartiallyConnected;
- (void)loadedDevicesDidChange;
- (void)mergeDevice:(id)a0 withDevice:(id)a1;
- (void)pairedHearingAidsDidChange;
- (void)persistPairedHearingAids;
- (void)removeAvailableDevice:(id)a0;
- (void)removeConnectedDevice:(id)a0;
- (void)removeLoadedDevice:(id)a0;
- (void)replaceDevice:(id)a0 withDevice:(id)a1;
- (BOOL)representsLocalDevices;
- (void)resetConnectionToPeripheral:(id)a0;
- (void)searchForAvailableDevices;
- (void)searchForAvailableDevicesWithCompletion:(id /* block */)a0;
- (void)searchForConnectedDevices;
- (void)sendRequestToCentralManager:(id /* block */)a0;
- (void)shouldRelinquishForPartialConnection:(id /* block */)a0;
- (void)unpairPeripheralWithUUID:(id)a0;
- (id)valueForProperty:(unsigned long long)a0 forDeviceID:(id)a1;

@end
