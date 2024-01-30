@class NSString, CUTWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface _IDSContinuity : NSObject <IDSDaemonListenerProtocol> {
    id _delegateContext;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopTrackingPeer:(id)a0 forType:(long long)a1;
- (void)_callDelegateWithBlock:(id /* block */)a0;
- (void)startTrackingPeer:(id)a0 forType:(long long)a1;
- (id)initWithDelegate:(id)a0 queue:(id)a1 delegateContext:(id)a2;
- (void)stopAdvertisingOfType:(long long)a0;
- (void)continuityDidStopTrackingPeer:(id)a0 forType:(long long)a1;
- (void).cxx_destruct;
- (void)stopScanningForType:(long long)a0;
- (void)continuityDidStopAdvertisingOfType:(long long)a0;
- (void)continuityDidStartTrackingPeer:(id)a0 forType:(long long)a1 error:(id)a2;
- (void)dealloc;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 peers:(id)a3 boostedScan:(BOOL)a4 duplicates:(BOOL)a5;
- (void)_handleReconnect;
- (void)continuityDidStartScanningForType:(long long)a0;
- (void)continuityDidUpdateStateToState:(long long)a0;
- (void)continuityDidDiscoverType:(long long)a0 withData:(id)a1 fromPeer:(id)a2;
- (void)continuityDidStopTrackingPeer:(id)a0;
- (void)continuityDidStartTrackingPeer:(id)a0 error:(id)a1;
- (void)continuityDidStopAdvertisingOfType:(long long)a0 withError:(id)a1;
- (void)continuityDidFailToStartAdvertisingOfType:(long long)a0 withError:(id)a1;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2;
- (void)continuityDidFailToStartScanningForType:(long long)a0 withError:(id)a1;
- (void)continuityDidLosePeer:(id)a0;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 peers:(id)a3;
- (void)startScanningForType:(long long)a0 withData:(id)a1 mask:(id)a2 boostedScan:(BOOL)a3 duplicates:(BOOL)a4;
- (void)continuityDidStartAdvertisingOfType:(long long)a0;
- (void)continuityDidLosePeer:(id)a0 forType:(long long)a1;
- (void)continuityDidStopScanningForType:(long long)a0;
- (void)startAdvertisingOfType:(long long)a0 withData:(id)a1 withOptions:(id)a2;
- (void)_daemonDied:(id)a0;

@end
