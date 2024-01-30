@class NSMutableDictionary, APBluetoothClient, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface APBrowserBTLEManager : NSObject <APBluetoothClientDelegate> {
    unsigned short _btleMode;
    BOOL _p2pSoloSupported;
    BOOL _p2pSoloSupportedIsSet;
    BOOL _trackingEnabled;
}

@property (retain, nonatomic) APBluetoothClient *btleClient;
@property (nonatomic) void *eventHandlerContext;
@property (nonatomic) void /* function */ *eventHandlerFunc;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL isAdvertising;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isScanning;
@property (nonatomic) BOOL isSoloBeaconDisabled;
@property (nonatomic) BOOL isInvalidated;
@property (nonatomic) BOOL preferencesUpdated;
@property (nonatomic) struct OpaqueAPBrowserBTLEManager { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *managerRef;
@property (retain, nonatomic) NSMutableDictionary *btleDevices;
@property (nonatomic) NSObject<OS_dispatch_source> *staleDevicesTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)createEventInfoDictionary:(id *)a0 withDeviceID:(id)a1 IPAddress:(id)a2 port:(id)a3 supportsSolo:(id)a4 rssi:(id)a5;

- (void)airPlaySoloStoppedScanning:(id)a0;
- (void)airPlaySolo:(id)a0 failedToStartScanningWithError:(id)a1;
- (int)startMode:(unsigned short)a0;
- (int)handleLostDevice:(id)a0;
- (void)airPlaySoloStoppedAdvertising:(id)a0;
- (int)setEventHandler:(void /* function */ *)a0 context:(void *)a1 managerRef:(struct OpaqueAPBrowserBTLEManager { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *)a2;
- (id)init;
- (void)airPlaySoloStartedScanning:(id)a0;
- (void)airPlaySoloDidUpdateState:(id)a0;
- (int)ensureScanningStarted;
- (void)dealloc;
- (int)ensureStaleDeviceTimerStarted;
- (int)stop;
- (int)ensureScanningStopped;
- (BOOL)shouldAdvertiseSourcePresence;
- (int)copyShowInfo:(id *)a0 verbose:(BOOL)a1;
- (id)stringForBTLEmode:(unsigned short)a0;
- (int)update;
- (int)setSupportsSolo:(BOOL)a0;
- (void)airPlaySolo:(id)a0 foundDevice:(id)a1 withData:(id)a2;
- (int)dispatchEvent:(unsigned int)a0 withEventInfo:(id)a1;
- (unsigned long long)nearbySoloDevicesCount;
- (void)airPlaySoloStartedAdvertising:(id)a0;
- (int)getTrackingEnabled:(BOOL *)a0;
- (int)setBTLEMode:(unsigned short)a0;
- (int)ensurePreferencesUpdatedWithShouldForce:(BOOL)a0;
- (int)handleFoundDevice:(id)a0 withAdvertisementData:(struct { unsigned char x0; unsigned char x1; unsigned char x2[4]; } *)a1 rssi:(int)a2;
- (int)ensureAdvertisingStopped;
- (int)ensureBTLEClientInitialized;
- (int)getBTLEMode:(unsigned short *)a0;
- (void)airPlaySolo:(id)a0 failedToStartAdvertisingWithError:(id)a1;
- (int)dispatchLostEventForAllDevices;
- (int)invalidate;
- (int)setTrackingEnabled:(BOOL)a0;
- (int)ensureAdvertisingStarted;

@end
