@class NSMutableSet;
@protocol WPPairingDelegate;

@interface WPPairing : WPClient

@property (weak, nonatomic) id<WPPairingDelegate> delegate;
@property (retain) NSMutableSet *ignoredDevices;
@property BOOL allowScreenOffScanning;

- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)startProximityPairingServiceScanningWithRSSI:(id)a0 duplicates:(BOOL)a1;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void).cxx_destruct;
- (void)deviceDiscovered:(id)a0;
- (void)ignoreDeviceUntilNextUnlock:(id)a0 ignoreDevice:(BOOL)a1;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)stateDidChange:(long long)a0;
- (void)scanningStartedOfType:(unsigned char)a0;
- (id)clientAsString;
- (void)stopProximityPairingServiceScanning;
- (id)initWithDelegate:(id)a0 queue:(id)a1 machName:(id)a2;
- (id)initWithDelegate:(id)a0;
- (void)startProximityPairingServiceScanning;
- (void)startProximityPairingServiceScanningWithRSSI:(id)a0 duplicates:(BOOL)a1 scanMode:(long long)a2;
- (void)invalidate;

@end
