@class NSMutableDictionary;
@protocol WPContinuityDelegate;

@interface WPContinuity : WPClient

@property (weak, nonatomic) id<WPContinuityDelegate> delegate;
@property long long btBandwidthState;
@property (retain) NSMutableDictionary *transfers;
@property long long connectionUseCase;
@property long long maxAllowedConnectionDelayMs;

+ (unsigned char)clientTypeFromContinuityType:(long long)a0;
+ (long long)continuityTypeFromClientType:(unsigned char)a0;

- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)receivedData:(id)a0 fromEndpoint:(id)a1 forPeripheral:(id)a2;
- (void)sentData:(id)a0 forCharacteristic:(id)a1 inService:(id)a2 forPeripheral:(id)a3 withError:(id)a4;
- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)central:(id)a0 subscribed:(BOOL)a1 toCharacteristic:(id)a2 inService:(id)a3;
- (void)disconnectedDeviceOverLEPipe:(id)a0 withError:(id)a1;
- (void)peerTrackingFull;
- (void)disconnectFromPeer:(id)a0;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)discoveredCharacteristicsAndServices:(id)a0 forPeripheral:(id)a1;
- (void)bandwidthStateUpdated:(id)a0;
- (void)peerTrackingAvailable;
- (void)connectedDeviceOverLEPipe:(id)a0;
- (void)connectedDevice:(id)a0 withError:(id)a1 shouldDiscover:(BOOL)a2;
- (void)updatedNotificationState:(BOOL)a0 forCharacteristic:(id)a1 inService:(id)a2 withPeripheral:(id)a3;
- (void)foundPeer:(id)a0 ofType:(unsigned char)a1;
- (void)stoppedTrackingPeer:(id)a0 ofType:(unsigned char)a1;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (void)lostPeer:(id)a0 ofType:(unsigned char)a1;
- (void)sentData:(id)a0 toEndpoint:(id)a1 forPeripheral:(id)a2 withError:(id)a3;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 peers:(id)a3;
- (void)stopScanningForType:(long long)a0;
- (void)connectToPeer:(id)a0;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)disconnectedDevice:(id)a0 withError:(id)a1;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 peers:(id)a3 boostedScan:(BOOL)a4 duplicates:(BOOL)a5;
- (void)stopTrackingPeer:(id)a0 forType:(long long)a1;
- (void)updateAdvertisingRequest:(id)a0 withUpdate:(id /* block */)a1;
- (void)startedTrackingPeer:(id)a0 ofType:(unsigned char)a1;
- (void)startScanningForType:(long long)a0 withData:(id)a1;
- (void)populateClientGATT:(id /* block */)a0;
- (void)startAdvertisingOfType:(long long)a0 withData:(id)a1;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)stateDidChange:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)deviceDiscovered:(id)a0;
- (void)updateScanningRequest:(id)a0 withUpdate:(id /* block */)a1;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 peers:(id)a3 boostedScan:(BOOL)a4;
- (void)invalidate;
- (void)startTrackingPeer:(id)a0 forType:(long long)a1;
- (void)sendData:(id)a0 toPeer:(id)a1;
- (void)stopAdvertisingOfType:(long long)a0;
- (id)clientAsString;
- (void)startScanningForType:(long long)a0 withData:(id)a1 peers:(id)a2;
- (void)failedToStartTrackingPeer:(id)a0 error:(id)a1;
- (void)receivedData:(id)a0 forCharacteristic:(id)a1 inService:(id)a2 forPeripheral:(id)a3;

@end
