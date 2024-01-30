@class CBCentralManager, NSString, CUSystemMonitor, NSMutableDictionary, NSMutableSet, NSObject, CBPeripheralManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUTDSAgent : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate> {
    unsigned char _advertiseBytes[32];
    unsigned long long _advertiseLen;
    unsigned long long _advertiserCount;
    unsigned long long _advertiseProviderCount;
    unsigned long long _advertiseSeekerCount;
    unsigned long long _advertiseTriggerCount;
    BOOL _advertisingStartCalled;
    struct { unsigned char bytes[6]; } _bleAddress48;
    BOOL _bleAddressOverride;
    BOOL _bleAddressValid;
    CUSystemMonitor *_bleAddressMonitor;
    CBCentralManager *_centralManager;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_devices;
    NSObject<OS_dispatch_source> *_lingerTimer;
    CBPeripheralManager *_peripheralManager;
    NSMutableSet *_providers;
    BOOL _scannerStartCalled;
    NSMutableSet *_seekers;
    NSMutableSet *_sessions;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    unsigned int _updateIDLast;
    BOOL _updatePending;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTDSAgent;

- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)addProvider:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeSession:(id)a0;
- (void)addSession:(id)a0;
- (void)peripheralManagerDidStartAdvertising:(id)a0 error:(id)a1;
- (void)_update;
- (void)addSeeker:(id)a0;
- (void)removeSeeker:(id)a0;
- (void)_advertiserEnsureStarted;
- (void)_advertiserEnsureStopped;
- (void)_bleAddressMonitorEnsureStarted;
- (void)_bleAddressMonitorEnsureStopped;
- (void)_bleAddressChanged;
- (void)_scannerEnsureStarted;
- (void)_scannerEnsureStopped;
- (void)_startLingerTimer;
- (void)_cancelLingerTimer;
- (void)_processChanges;
- (void)removeProvider:(id)a0;
- (void)_scheduleUpdate;
- (void)peripheralManagerDidUpdateState:(id)a0;

@end
