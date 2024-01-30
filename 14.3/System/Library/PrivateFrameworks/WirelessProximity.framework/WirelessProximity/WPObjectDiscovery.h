@class NSObject;
@protocol OS_dispatch_queue, WPObjectDiscoveryDelegate;

@interface WPObjectDiscovery : WPClient

@property (weak, nonatomic) id<WPObjectDiscoveryDelegate> delegate;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)startTest;
- (void)stopTest;
- (void)receivedTestResponse:(id)a0;
- (void)stopScanning;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)devicesDiscovered:(id)a0;
- (id)init;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void).cxx_destruct;
- (void)deviceDiscovered:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)updateBeaconingStatus:(id)a0;
- (void)stateDidChange:(long long)a0;
- (void)scanningStartedOfType:(unsigned char)a0;
- (id)clientAsString;
- (void)updateScanningRequest:(id)a0 withUpdate:(id /* block */)a1;
- (void)updateBeaconingState:(id)a0;
- (id)scanRequestFromScanMode:(long long)a0 UpdateTime:(double)a1;
- (void)startScanningWithMode:(long long)a0 Timeout:(double)a1;
- (void)startScanning;
- (void)updateBeaconingExtended:(id)a0;
- (void)updateBeaconingKeys:(id)a0;
- (void)updateNearOwnerTokens:(id)a0;
- (void)startScanningWithMode:(long long)a0;
- (void)invalidate;

@end
