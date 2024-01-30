@class NSArray, NSMutableDictionary;
@protocol WPNearbyDelegate;

@interface WPNearby : WPClient {
    unsigned long long _nearbySignPostID;
}

@property (weak, nonatomic) id<WPNearbyDelegate> delegate;
@property long long btBandwidthState;
@property (retain) NSMutableDictionary *transfers;
@property (retain) NSArray *leCapablePeers;
@property long long connectionUseCase;
@property long long maxAllowedConnectionDelayMs;

+ (unsigned char)clientTypeFromNearbyType:(long long)a0;
+ (long long)holdVouchers;
+ (long long)nearbyTypeFromClientType:(unsigned char)a0;

- (void)deviceDiscovered:(id)a0;
- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)lostPeer:(id)a0 ofType:(unsigned char)a1;
- (void)startedTrackingPeer:(id)a0 ofType:(unsigned char)a1;
- (void)sentData:(id)a0 toEndpoint:(id)a1 forPeripheral:(id)a2 withError:(id)a3;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)failedToStartTrackingPeer:(id)a0 error:(id)a1;
- (void)updatedNotificationState:(BOOL)a0 forCharacteristic:(id)a1 inService:(id)a2 withPeripheral:(id)a3;
- (void)stoppedTrackingPeer:(id)a0 ofType:(unsigned char)a1;
- (void)central:(id)a0 subscribed:(BOOL)a1 toCharacteristic:(id)a2 inService:(id)a3;
- (void)foundPeer:(id)a0 ofType:(unsigned char)a1;
- (id)clientAsString;
- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)connectedDevice:(id)a0 withError:(id)a1 shouldDiscover:(BOOL)a2;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)stateDidChange:(long long)a0;
- (void)sentData:(id)a0 forCharacteristic:(id)a1 inService:(id)a2 forPeripheral:(id)a3 withError:(id)a4;
- (void)discoveredCharacteristicsAndServices:(id)a0 forPeripheral:(id)a1;
- (void)populateClientGATT:(id /* block */)a0;
- (void)disconnectedDevice:(id)a0 withError:(id)a1;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (void)receivedData:(id)a0 forCharacteristic:(id)a1 inService:(id)a2 forPeripheral:(id)a3;
- (void)updateAdvertisingRequest:(id)a0 withUpdate:(id /* block */)a1;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)stopScanningForType:(long long)a0;
- (void)startScanningForType:(long long)a0 data:(id)a1 mask:(id)a2 peers:(id)a3 scanMode:(long long)a4 rssi:(id)a5 duplicates:(BOOL)a6;
- (void)bandwidthStateUpdated:(id)a0;
- (void)startAdvertisingOfType:(long long)a0 data:(id)a1 priority:(long long)a2 mode:(long long)a3;
- (void)disconnectedDeviceOverLEPipe:(id)a0 withError:(id)a1;
- (void)sendData:(id)a0 toPeer:(id)a1;
- (void)startAdvertisingOfType:(long long)a0 withData:(id)a1;
- (void)disconnectFromPeer:(id)a0;
- (void)receivedData:(id)a0 fromEndpoint:(id)a1 forPeripheral:(id)a2;
- (void)stopTrackingPeer:(id)a0 forType:(long long)a1;
- (void)startScanningForType:(long long)a0 data:(id)a1 mask:(id)a2 peers:(id)a3 scanMode:(long long)a4;
- (void)startScanningForType:(long long)a0 data:(id)a1 mask:(id)a2 peers:(id)a3 scanMode:(long long)a4 rssi:(id)a5 duplicates:(BOOL)a6 scanCache:(BOOL)a7 useCaseList:(id)a8;
- (void)startTrackingPeer:(id)a0 forType:(long long)a1;
- (void)startAdvertisingOfType:(long long)a0 data:(id)a1 priority:(long long)a2 mode:(long long)a3 options:(id)a4;
- (id)init;
- (void)startScanningForType:(long long)a0 data:(id)a1 mask:(id)a2 peers:(id)a3 scanMode:(long long)a4 rssi:(id)a5 duplicates:(BOOL)a6 scanCache:(BOOL)a7;
- (void)connectToPeer:(id)a0;
- (void)startAdvertisingOfType:(long long)a0 withData:(id)a1 priority:(long long)a2;
- (void)invalidate;
- (void)stopAdvertisingOfType:(long long)a0;
- (void)connectToPeer:(id)a0 withOptions:(id)a1;
- (void).cxx_destruct;
- (void)connectedDeviceOverLEPipe:(id)a0;

@end
