@class NSMutableDictionary;
@protocol WPTestDelegate;

@interface WPTest : WPClient

@property (weak, nonatomic) id<WPTestDelegate> delegate;
@property (retain) NSMutableDictionary *transfers;

+ (long long)holdVouchers;

- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)connectToPeer:(id)a0 withOptions:(id)a1;
- (void)receivedData:(id)a0 fromEndpoint:(id)a1 forPeripheral:(id)a2;
- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)central:(id)a0 subscribed:(BOOL)a1 toCharacteristic:(id)a2 inService:(id)a3;
- (void)disconnectedDeviceOverLEPipe:(id)a0 withError:(id)a1;
- (void)disconnectFromPeer:(id)a0;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)connectedDeviceOverLEPipe:(id)a0;
- (void)connectedDevice:(id)a0 withError:(id)a1 shouldDiscover:(BOOL)a2;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (void)sentData:(id)a0 toEndpoint:(id)a1 forPeripheral:(id)a2 withError:(id)a3;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)stopScanningForType:(unsigned char)a0;
- (void)startAdvertisingOfType:(unsigned char)a0 data:(id)a1 priority:(long long)a2 mode:(long long)a3 options:(id)a4;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)disconnectedDevice:(id)a0 withError:(id)a1;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)stateDidChange:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)deviceDiscovered:(id)a0;
- (void)startScanningForType:(unsigned char)a0 data:(id)a1 mask:(id)a2 peers:(id)a3 scanMode:(long long)a4 rssi:(id)a5 duplicates:(BOOL)a6 scanCache:(BOOL)a7;
- (void)invalidate;
- (void)sendData:(id)a0 toPeer:(id)a1;
- (void)stopAdvertisingOfType:(unsigned char)a0;
- (id)clientAsString;
- (void)receivedData:(id)a0 forCharacteristic:(id)a1 inService:(id)a2 forPeripheral:(id)a3;

@end
