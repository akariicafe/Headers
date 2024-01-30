@class CBCentralManager, NSString, NSMutableDictionary, NSDictionary, CUSystemMonitor, NSObject;
@protocol OS_dispatch_queue;

@interface CUBLEScanner : NSObject <CBCentralManagerDelegate> {
    BOOL _activateCalled;
    CBCentralManager *_centralManager;
    BOOL _changesPending;
    NSMutableDictionary *_devices;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    int _rssiThreshold;
    NSDictionary *_scanParametersCurrent;
    BOOL _scannerStartCalled;
    CUSystemMonitor *_systemMonitor;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (nonatomic) int bluetoothState;
@property (copy, nonatomic) id /* block */ bluetoothStateChangedHandler;
@property (nonatomic) unsigned int changeFlags;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property int rssiThreshold;
@property (nonatomic) unsigned int scanFlags;
@property (nonatomic) int scanRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)_updateIfNeededWithBlock:(id /* block */)a0;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)_invalidate;
- (id)_scanParameters;
- (id)_scanParametersSummary:(id)a0;
- (BOOL)_shouldScan;
- (void)_stopScanIfNeededWithReason:(const char *)a0;
- (void)_updateScanRules:(id *)a0 payloadType:(unsigned char)a1 rssiThreshold:(int)a2;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)invalidate;
- (void)_update;
- (void)_invalidated;
- (void)dealloc;

@end
