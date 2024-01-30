@class _IDSContinuity;

@interface IDSContinuity : NSObject {
    _IDSContinuity *_internal;
}

@property (readonly) long long state;

- (void)disconnectFromPeer:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 withOptions:(id)a3;
- (void)stopScanningForType:(long long)a0;
- (void)connectToPeer:(id)a0;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 peers:(id)a3 withOptions:(id)a4 boostedScan:(BOOL)a5;
- (void)startScanningForType:(long long)a0 withData:(id)a1 withOptions:(id)a2;
- (void)startTrackingPeer:(id)a0;
- (void)stopTrackingPeer:(id)a0;
- (void)stopTrackingPeer:(id)a0 forType:(long long)a1;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 withOptions:(id)a3 boostedScan:(BOOL)a4 duplicates:(BOOL)a5;
- (void).cxx_destruct;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 peers:(id)a3 withOptions:(id)a4;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 peers:(id)a3 withOptions:(id)a4 boostedScan:(BOOL)a5 duplicates:(BOOL)a6;
- (void)startTrackingPeer:(id)a0 forType:(long long)a1;
- (void)stopAdvertisingOfType:(long long)a0;
- (void)dealloc;
- (void)startAdvertisingOfType:(long long)a0 withData:(id)a1 withOptions:(id)a2;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 withOptions:(id)a3 boostedScan:(BOOL)a4;
- (void)startScanningForType:(long long)a0 withData:(id)a1 peers:(id)a2 withOptions:(id)a3;

@end
