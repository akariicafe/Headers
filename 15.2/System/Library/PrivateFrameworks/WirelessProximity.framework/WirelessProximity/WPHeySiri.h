@protocol WPHeySiriProtocol;

@interface WPHeySiri : WPClient

@property (weak, nonatomic) id<WPHeySiriProtocol> delegate;
@property BOOL isScanning;

+ (long long)holdVouchers;

- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)startScanningAndAdvertisingWithData:(id)a0;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)updateAdvertisingRequest:(id)a0 withUpdate:(id /* block */)a1;
- (void)stopScanning;
- (void)startScanningAndAdvertisingWithOptions:(id)a0;
- (void)stopAdvertising;
- (void)startAdvertisingWithData:(id)a0;
- (void)stopScanningAndAdvertising;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)stateDidChange:(long long)a0;
- (void).cxx_destruct;
- (void)deviceDiscovered:(id)a0;
- (void)updateScanningRequest:(id)a0 withUpdate:(id /* block */)a1;
- (void)invalidate;
- (id)clientAsString;
- (void)startScanning;

@end
