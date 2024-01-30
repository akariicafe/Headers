@class NSString, WPAWDL, NSMutableSet, WPNearby, NSObject, WPPairing;
@protocol OS_dispatch_queue;

@interface SFBLEClient : NSObject <WPAWDLDelegate, WPNearbyDelegate, WPPairingDelegate> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_wpAirDropDelegates;
    WPAWDL *_wpAirDrop;
    NSMutableSet *_wpNearbyDelegates;
    WPNearby *_wpNearby;
    NSMutableSet *_wpPairingDelegates;
    WPPairing *_wpPairing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedClient;

- (void)nearby:(id)a0 didStartScanningForType:(long long)a1;
- (void)nearby:(id)a0 didFailToStartAdvertisingOfType:(long long)a1 withError:(id)a2;
- (void)awdlDidUpdateState:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)nearby:(id)a0 didReceiveData:(id)a1 fromPeer:(id)a2;
- (void)nearbyDidUpdateState:(id)a0;
- (void)pairingStartedScanning:(id)a0;
- (id)addPairingDelegate:(id)a0;
- (void)removeNearbyDelegate:(id)a0;
- (void)pairingDidUpdateState:(id)a0;
- (void)awdl:(id)a0 failedToStartAdvertisingWithError:(id)a1;
- (void)nearby:(id)a0 didDeferAdvertisingType:(long long)a1;
- (void)awdl:(id)a0 failedToStartScanningWithError:(id)a1;
- (id)addNearbyDelegate:(id)a0;
- (void)nearby:(id)a0 didStopAdvertisingType:(long long)a1 withError:(id)a2;
- (void)nearbyDidChangeBluetoothBandwidthState:(id)a0;
- (void)removeAirDropDelegate:(id)a0;
- (void)nearby:(id)a0 didSendData:(id)a1 toPeer:(id)a2 error:(id)a3;
- (void)awdlStartedAdvertising:(id)a0;
- (void)nearby:(id)a0 didDisconnectFromPeer:(id)a1 error:(id)a2;
- (void)pairing:(id)a0 foundDevice:(id)a1 payload:(id)a2 rssi:(id)a3 peerInfo:(id)a4;
- (void)awdl:(id)a0 foundDevice:(id)a1 rssi:(id)a2;
- (void)nearby:(id)a0 didConnectToPeer:(id)a1 transport:(long long)a2 error:(id)a3;
- (void)removePairingDelegate:(id)a0;
- (void)awdlAdvertisingPending:(id)a0;
- (void)awdlStartedScanning:(id)a0;
- (void)nearby:(id)a0 didLosePeer:(id)a1 type:(long long)a2;
- (void)pairing:(id)a0 failedToStartScanningWithError:(id)a1;
- (void)pairingStoppedScanning:(id)a0;
- (void)nearby:(id)a0 didDiscoverType:(long long)a1 withData:(id)a2 fromPeer:(id)a3 peerInfo:(id)a4;
- (id)addAirDropDelegate:(id)a0;
- (void)nearby:(id)a0 didStartAdvertisingType:(long long)a1;
- (void)nearby:(id)a0 didFailToStartScanningForType:(long long)a1 WithError:(id)a2;

@end
