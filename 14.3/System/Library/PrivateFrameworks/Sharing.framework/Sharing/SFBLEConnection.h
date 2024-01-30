@class SFBLEDevice, NSString, WPNearby, SFBLEData, NSMutableArray, NSMutableSet, NSObject, CURetrier;
@protocol OS_dispatch_queue;

@interface SFBLEConnection : NSObject <WPNearbyDelegate> {
    BOOL _activateCalled;
    NSMutableSet *_clients;
    BOOL _connected;
    BOOL _connecting;
    double _connectStartTime;
    CURetrier *_connectRetrier;
    SFBLEData *_currentData;
    NSMutableArray *_dataSendQueue;
    BOOL _invalidateCalled;
    WPNearby *_wpNearby;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (nonatomic) BOOL bleEncrypted;
@property (nonatomic) BOOL latencyCritical;
@property (nonatomic) BOOL lePipeCapable;
@property (retain, nonatomic) SFBLEDevice *peerDevice;
@property (nonatomic) BOOL acceptor;
@property (copy, nonatomic) id /* block */ bluetoothBandwidthChangedHandler;
@property (copy, nonatomic) id /* block */ bluetoothStateChangedHandler;
@property (readonly, nonatomic) long long connectionState;
@property (copy, nonatomic) id /* block */ connectionStateChangedHandler;
@property (copy, nonatomic) id /* block */ dataHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) unsigned int sessionFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addClient:(id)a0;
- (BOOL)removeClient:(id)a0;
- (void).cxx_destruct;
- (void)nearby:(id)a0 didReceiveData:(id)a1 fromPeer:(id)a2;
- (void)dealloc;
- (void)nearbyDidUpdateState:(id)a0;
- (void)_activate;
- (void)nearbyDidChangeBluetoothBandwidthState:(id)a0;
- (void)activate;
- (void)nearby:(id)a0 didSendData:(id)a1 toPeer:(id)a2 error:(id)a3;
- (void)_invalidate;
- (void)nearby:(id)a0 didDisconnectFromPeer:(id)a1 error:(id)a2;
- (void)nearby:(id)a0 didConnectToPeer:(id)a1 transport:(long long)a2 error:(id)a3;
- (void)_connectIfNeeded;
- (void)invalidate;
- (void)_processQueuedData;
- (void)_cleanupQueuedData:(int)a0;
- (void)sendDataDirect:(id)a0 completion:(id /* block */)a1;
- (id)initWithDevice:(id)a0 acceptor:(BOOL)a1;
- (void)activateDirect;
- (void)sendData:(id)a0 completion:(id /* block */)a1;

@end
