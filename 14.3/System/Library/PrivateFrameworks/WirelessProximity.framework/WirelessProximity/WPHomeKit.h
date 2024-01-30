@protocol WPHomeKitDelegate;

@interface WPHomeKit : WPClient

@property (weak, nonatomic) id<WPHomeKitDelegate> delegate;

- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (unsigned char)clientTypeFromHomeKitType:(long long)a0;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void).cxx_destruct;
- (void)deviceDiscovered:(id)a0;
- (void)stopScanningForType:(long long)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)stateDidChange:(long long)a0;
- (void)scanningStartedOfType:(unsigned char)a0;
- (id)clientAsString;
- (long long)homeKitTypeFromClientType:(unsigned char)a0;
- (void)startScanningWithData:(id)a0 forType:(long long)a1;
- (void)checkAllowDuplicate;
- (struct { long long x0; long long x1; long long x2; })dutyCycleToScanningRates:(long long)a0;
- (void)invalidate;

@end
