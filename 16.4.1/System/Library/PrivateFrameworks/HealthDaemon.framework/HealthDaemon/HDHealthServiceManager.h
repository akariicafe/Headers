@class NSLock, NSString, CBUUID, NSSet, NSMutableDictionary, CBCentralManager, HDProfile, HDIdentifierTable, HDDataCollectionManager, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDHealthServiceManager : NSObject <CBCentralManagerPrivateDelegate, CBPairingAgentDelegate> {
    int _privacyNotificationToken;
    CBCentralManager *_central;
    NSObject<OS_dispatch_queue> *_queue;
    HDDataCollectionManager *_dataCollectionManager;
    HDProfile *_profile;
    NSLock *_discoveryLock;
    HDIdentifierTable *_discoveryInfosTable;
    NSMutableDictionary *_discoveryInfosByServiceUUID;
    NSSet *_scanServiceUUIDs;
    CBUUID *_allServicesUUID;
    NSLock *_connectionLock;
    HDIdentifierTable *_connectionInfosTable;
    NSMutableDictionary *_connectionInfosByPeripheralUUID;
    NSMutableDictionary *_connectedPeripheralsByPeripheralUUID;
    NSMutableDictionary *_bluetoothUpdateHandlers;
    NSObject<OS_dispatch_source> *_privateModeTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (id)initWithProfile:(id)a0;
- (void)pairingAgent:(id)a0 peerDidFailToCompletePairing:(id)a1 error:(id)a2;
- (void)pairingAgent:(id)a0 peerDidRequestPairing:(id)a1 type:(long long)a2 passkey:(id)a3;
- (void)releasePrivateMode;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)pairingAgent:(id)a0 peerDidUnpair:(id)a1;
- (id)retrieveOOBData:(id *)a0;
- (unsigned long long)discoverHealthServicesWithType:(long long)a0 timeout:(unsigned long long)a1 alwaysNotify:(BOOL)a2 handler:(id /* block */)a3 error:(id *)a4;
- (void)centralManager:(id)a0 willRestoreState:(id)a1;
- (void)enablePrivateModeForSessionWithIdentifier:(id)a0;
- (void)getProperty:(id)a0 forSession:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)getSupportedPropertyNamesWithHandler:(id /* block */)a0;
- (void)pairingAgent:(id)a0 peerDidCompletePairing:(id)a1;
- (void)performOperation:(id)a0 onSession:(unsigned long long)a1 withParameters:(id)a2 completion:(id /* block */)a3;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)discoveredCharacteristics:(id)a0 forDevice:(id)a1 service:(id)a2;
- (void)resetOOBState;
- (void)discoveredServices:(id)a0 forPeripheral:(id)a1;
- (id)allServicesWithError:(id *)a0;
- (void)sendBluetoothStatusUpdatesForServer:(id)a0 updateHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (unsigned long long)connectHealthService:(id)a0 sessionHandler:(id /* block */)a1 dataHandler:(id /* block */)a2 error:(id *)a3;
- (BOOL)healthUpdatesEnabledFromDevice:(id)a0 error:(id *)a1;
- (void)disconnectHealthService:(unsigned long long)a0;
- (void)dealloc;
- (void)unpairHealthServiceIfNecessary:(id)a0;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (id)reviewSavedHealthServiceSessionsWithError:(id *)a0;
- (unsigned long long)connectHealthService:(id)a0 sessionHandler:(id /* block */)a1 dataHandler:(id /* block */)a2 characteristicsHandler:(id /* block */)a3 error:(id *)a4;
- (id)_healthServiceForPeriperalID:(id)a0 serviceType:(long long)a1;
- (void)servicesInvalidatedForDevice:(id)a0 withError:(id)a1;
- (void)stopDiscoveryWithIdentifier:(unsigned long long)a0;
- (id)initWithProfile:(id)a0 centralManager:(id)a1 queue:(id)a2;
- (void).cxx_destruct;
- (void)characteristicReceived:(id)a0 device:(id)a1;
- (unsigned long long)connectHealthService:(id)a0 connectionOptions:(unsigned long long)a1 sessionHandler:(id /* block */)a2 dataHandler:(id /* block */)a3 mfaSuccessHandler:(id /* block */)a4 autoPairData:(id)a5 error:(id *)a6;
- (BOOL)setHealthUpdatesEnabled:(BOOL)a0 fromDevice:(id)a1 error:(id *)a2;
- (void)writeCharacteristic:(id)a0 onSession:(unsigned long long)a1 expectResponse:(BOOL)a2 completion:(id /* block */)a3;

@end
