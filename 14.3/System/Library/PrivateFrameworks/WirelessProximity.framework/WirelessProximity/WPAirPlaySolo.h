@protocol WPAirPlaySoloDelegate;

@interface WPAirPlaySolo : WPClient

@property (weak, nonatomic) id<WPAirPlaySoloDelegate> delegate;

+ (unsigned char)puckStringToType:(id)a0;
+ (id)puckTypeToString:(unsigned char)a0;

- (void)startedTrackingPeer:(id)a0 ofType:(unsigned char)a1;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)peerTrackingFull;
- (id)init;
- (void)lostPeer:(id)a0 ofType:(unsigned char)a1;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)stoppedTrackingPeer:(id)a0 ofType:(unsigned char)a1;
- (void)failedToStartTrackingPeer:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)foundPeer:(id)a0 ofType:(unsigned char)a1;
- (void)deviceDiscovered:(id)a0;
- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)peerTrackingAvailable;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)stateDidChange:(long long)a0;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (void)scanningStartedOfType:(unsigned char)a0;
- (id)clientAsString;
- (void)startConnectionlessAdvertisingWithData:(id)a0;
- (void)startConnectionlessScanningWithData:(id)a0;
- (void)stopConnectionlessAdvertising;
- (void)stopConnectionlessScanningWithData:(id)a0;
- (void)stopTrackingPeer:(id)a0 withData:(id)a1;
- (void)stopConnectionlessAdvertising:(id)a0;
- (void)invalidate;
- (void)startTrackingPeer:(id)a0 withData:(id)a1;

@end
