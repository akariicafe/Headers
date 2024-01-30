@class NSMutableDictionary, WPAirPlaySolo, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface APAdvertiserBTLEManager : NSObject <WPAirPlaySoloDelegate> {
    struct { unsigned char flags; unsigned char config; unsigned char ipv4[4]; } _advertisementData;
    unsigned short _btleMode;
    BOOL _isP2PAllowed;
    BOOL _p2pSolo;
    BOOL _p2pSoloQueried;
    NSObject<OS_dispatch_source> *_p2pSoloQueryTimer;
}

@property (retain, nonatomic) WPAirPlaySolo *btleServer;
@property (nonatomic) void *eventHandlerContext;
@property (nonatomic) void /* function */ *eventHandlerFunc;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) BOOL isAdvertising;
@property (nonatomic) BOOL isScanning;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) struct OpaqueAPAdvertiserBTLEManager { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *managerRef;
@property (nonatomic) struct __SCDynamicStore { } *scStore;
@property (nonatomic) unsigned char seed;
@property (retain, nonatomic) NSMutableDictionary *soloDevices;
@property (nonatomic) NSObject<OS_dispatch_source> *staleDevicesTimer;
@property (nonatomic) int touchSetupActiveNotifyToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dispatchEvent:(unsigned int)a0;
- (int)updatePreferences;
- (void)airPlaySolo:(id)a0 failedToStartAdvertisingWithError:(id)a1;
- (int)setBTLEMode:(unsigned short)a0;
- (void)stopScanning;
- (void)airPlaySoloDidUpdateState:(id)a0;
- (void)stopAdvertising;
- (int)start;
- (int)update;
- (id)init;
- (int)getBTLEMode:(unsigned short *)a0;
- (void)airPlaySoloStoppedAdvertising:(id)a0;
- (void)airPlaySoloStoppedScanning:(id)a0;
- (void)airPlaySoloStartedScanning:(id)a0;
- (void)invalidate;
- (void)airPlaySolo:(id)a0 foundDevice:(id)a1 withData:(id)a2;
- (void)dealloc;
- (void)airPlaySolo:(id)a0 failedToStartScanningWithError:(id)a1;
- (void)airPlaySoloStartedAdvertising:(id)a0;
- (void)startAdvertising;
- (int)stop;
- (void)startScanning;
- (int)startP2PSoloQueryTimer;
- (void)handleP2PSoloQueryTimerFired;
- (void)handleP2PSoloQueryTimerCancelled;
- (int)updateSupportsSoloAndForceReadFromPrefs:(BOOL)a0;
- (int)supportsSolo:(BOOL *)a0;
- (id)stringForBTLEMode:(unsigned short)a0;
- (int)setIsP2PAllowed:(BOOL)a0;
- (int)setProperty:(id)a0 withValue:(id)a1;
- (int)startListeningForNetworkChanges;
- (int)stopListeningForNetworkChanges;
- (int)startStaleDeviceTimer;
- (void)updateAdvertisementData;
- (int)showDebugWithDataBuffer:(struct { char *x0; unsigned long long x1; unsigned long long x2; char *x3; unsigned long long x4; unsigned long long x5; unsigned char x6; int x7; } *)a0 verbose:(BOOL)a1;

@end
