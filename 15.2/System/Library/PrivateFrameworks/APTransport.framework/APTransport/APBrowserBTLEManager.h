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

- (int)handleFoundDevice:(id)a0 withAdvertisementData:(struct { unsigned char x0; unsigned char x1; unsigned char x2[4]; } *)a1 rssi:(int)a2;
- (unsigned long long)nearbySoloDevicesCount;
- (id)stringForBTLEmode:(unsigned short)a0;
- (int)startMode:(unsigned short)a0;
- (int)ensureAdvertisingStarted;
- (int)getTrackingEnabled:(BOOL *)a0;
- (int)dispatchEvent:(unsigned int)a0 withEventInfo:(id)a1;
- (int)setTrackingEnabled:(BOOL)a0;
- (int)setSupportsSolo:(BOOL)a0;
- (int)ensurePreferencesUpdatedWithShouldForce:(BOOL)a0;
- (int)dispatchLostEventForAllDevices;
- (void)airPlaySolo:(id)a0 failedToStartAdvertisingWithError:(id)a1;
- (int)setEventHandler:(void /* function */ *)a0 context:(void *)a1 managerRef:(struct OpaqueAPBrowserBTLEManager { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *)a2;
- (int)setBTLEMode:(unsigned short)a0;
- (void)airPlaySoloDidUpdateState:(id)a0;
- (int)ensureStaleDeviceTimerStarted;
- (int)update;
- (int)ensureAdvertisingStopped;
- (int)handleLostDevice:(id)a0;
- (int)ensureBTLEClientInitialized;
- (id)init;
- (int)getBTLEMode:(unsigned short *)a0;
- (BOOL)shouldAdvertiseSourcePresence;
- (void)airPlaySoloStoppedAdvertising:(id)a0;
- (void)airPlaySoloStoppedScanning:(id)a0;
- (void)airPlaySoloStartedScanning:(id)a0;
- (int)invalidate;
- (void)airPlaySolo:(id)a0 foundDevice:(id)a1 withData:(id)a2;
- (void)dealloc;
- (void)airPlaySolo:(id)a0 failedToStartScanningWithError:(id)a1;
- (void)airPlaySoloStartedAdvertising:(id)a0;
- (int)ensureScanningStarted;
- (int)ensureScanningStopped;
- (int)copyShowInfo:(id *)a0 verbose:(BOOL)a1;
- (int)stop;

@end
