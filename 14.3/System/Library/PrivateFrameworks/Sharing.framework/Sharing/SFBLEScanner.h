@class NSData, NSString, NSArray, WPAWDL, NSSet, NSMutableDictionary, SFBLERecorder, CBCentralManager, NSObject, CURetrier, WPNearby, WPPairing;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFBLEScanner : NSObject <CBCentralManagerDelegate, WPAWDLDelegate, WPNearbyDelegate> {
    BOOL _activateCalled;
    BOOL _activated;
    BOOL _activeScan;
    struct BTSessionImpl { } *_btSession;
    BOOL _btStarted;
    CBCentralManager *_centralManager;
    NSMutableDictionary *_devices;
    BOOL _invalidateCalled;
    NSObject<OS_dispatch_source> *_lostTimer;
    BOOL _needDups;
    long long _payloadType;
    BOOL _poweredOffSleep;
    int _rescanSecondsActual;
    NSObject<OS_dispatch_source> *_rescanTimer;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_rssiEventLogFile;
    BOOL _scanStarted;
    CURetrier *_startRetrier;
    BOOL _timeoutFired;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSSet *_trackedPeersApplied;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    BOOL _updating;
    BOOL _scanParamActive;
    BOOL _scanParamCache;
    BOOL _scanParamDups;
    NSData *_scanParamFilterData;
    NSData *_scanParamFilterMask;
    long long _scanParamInterval;
    long long _scanParamWindow;
    long long _scanParamMode;
    NSArray *_scanParamPeers;
    long long _scanParamRSSI;
    WPAWDL *_wpAirDrop;
    WPNearby *_wpNearby;
    long long _wpNearbyType;
    WPPairing *_wpPairing;
}

@property (copy, nonatomic) id /* block */ bluetoothStateChangedHandler;
@property (nonatomic) unsigned int changeFlags;
@property (copy, nonatomic) NSArray *deviceFilter;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, copy, nonatomic) NSData *payloadFilterData;
@property (readonly, copy, nonatomic) NSData *payloadFilterMask;
@property (nonatomic) double rescanInterval;
@property (nonatomic) BOOL rssiLog;
@property (nonatomic) BOOL rssiLogStdOut;
@property (retain, nonatomic) SFBLERecorder *recorder;
@property (nonatomic) long long rssiThreshold;
@property (nonatomic) BOOL scanCache;
@property (nonatomic) long long scanInterval;
@property (nonatomic) long long scanRate;
@property (readonly, nonatomic) long long scanState;
@property (copy, nonatomic) id /* block */ scanStateChangedHandler;
@property (nonatomic) long long scanWindow;
@property (nonatomic) double timeout;
@property (copy, nonatomic) id /* block */ timeoutHandler;
@property (copy, nonatomic) NSSet *trackedPeers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_startTimeoutIfNeeded;
- (void)nearby:(id)a0 didStartScanningForType:(long long)a1;
- (id)modelWithProductID:(unsigned short)a0;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)centralManagerDidUpdateState:(id)a0;
- (BOOL)_btSessionUsable;
- (void)performUpdate:(id /* block */)a0;
- (void)awdlDidUpdateState:(id)a0;
- (void)_rssiLogOpen;
- (BOOL)_updateCounterpart:(id)a0;
- (void).cxx_destruct;
- (void)_removeAllDevicesWithReason:(id)a0;
- (unsigned int)statusToHeadsetStatus:(unsigned char)a0 forProductID:(unsigned short)a1;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_updateRescanTimer;
- (void)_foundDevice:(id)a0 advertisementData:(id)a1 rssi:(long long)a2 fields:(id)a3;
- (void)dealloc;
- (void)nearbyDidUpdateState:(id)a0;
- (void)pairingStartedScanning:(id)a0;
- (void)_rescanTimerFired;
- (BOOL)_needActiveScan;
- (void)setPayloadFilterData:(id)a0 mask:(id)a1;
- (void)pairingDidUpdateState:(id)a0;
- (void)_poweredOff;
- (void)_poweredOn;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)awdl:(id)a0 failedToStartScanningWithError:(id)a1;
- (id)initWithType:(long long)a0;
- (void)foundPairingDevice:(id)a0 payload:(id)a1 rssi:(id)a2 peerInfo:(id)a3;
- (void)parseStatus3:(unsigned char)a0 productID:(unsigned int)a1 caseLEDColor:(char *)a2 caseLEDStatus:(char *)a3;
- (void)_watchSetupParseName:(id)a0 fields:(id)a1;
- (void)_invokeBlockActivateSafe:(id /* block */)a0;
- (void)foundNearbyDevice:(id)a0 data:(id)a1 peerInfo:(id)a2;
- (void)foundAWDLDevice:(id)a0 rssi:(id)a1;
- (BOOL)pairingUpdatePairedInfo:(id)a0 fields:(id)a1 bleDevice:(id)a2;
- (void)_nearbyParseNearbyActionPtr:(const char *)a0 end:(const char *)a1 fields:(id)a2;
- (void)_restartIfNeeded:(BOOL)a0;
- (void)_invalidate;
- (void)_recordDevice:(id)a0 data:(id)a1 rssi:(id)a2 info:(id)a3;
- (void)pairing:(id)a0 foundDevice:(id)a1 payload:(id)a2 rssi:(id)a3 peerInfo:(id)a4;
- (void)_updateTrackedPeers;
- (void)_btSessionEnsureStopped;
- (BOOL)pairingUpdatePairedInfoMB:(id)a0 fields:(id)a1 bleDevice:(id)a2;
- (int)_btSessionEnsureStarted;
- (void)awdl:(id)a0 foundDevice:(id)a1 rssi:(id)a2;
- (void)_timeoutTimerFired;
- (BOOL)_needDups;
- (void)foundPeripheralDevice:(id)a0 advertisementData:(id)a1 RSSI:(id)a2;
- (void)awdlStartedScanning:(id)a0;
- (void)_rescanLostFired;
- (void)nearby:(id)a0 didLosePeer:(id)a1 type:(long long)a2;
- (void)_nearbyParseNearbyInfoPtr:(const char *)a0 end:(const char *)a1 fields:(id)a2;
- (void)_restartIfNeeded;
- (void)pairing:(id)a0 failedToStartScanningWithError:(id)a1;
- (void)nearby:(id)a0 didDiscoverType:(long long)a1 withData:(id)a2 fromPeer:(id)a3 peerInfo:(id)a4;
- (void)invalidate;
- (void)_rssiLogClose;
- (void)nearby:(id)a0 didFailToStartScanningForType:(long long)a1 WithError:(id)a2;
- (id)pairingParsePayload:(id)a0 identifier:(id)a1 bleDevice:(id)a2;
- (void)_nearbyParseManufacturerData:(id)a0 fields:(id)a1;

@end
