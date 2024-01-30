@class NSMapTable, WPHomeKit, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, HAPAccessoryServerBrowserWiProxBTLEDelegate;

@interface HAPAccessoryServerBrowserWiProxBTLE : HMFObject <WPHomeKitDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_trackedPeripherals;
    NSMutableSet *_trackedIdentifiers;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) id<HAPAccessoryServerBrowserWiProxBTLEDelegate> delegate;
@property (readonly, nonatomic) WPHomeKit *wpHomeKit;
@property (nonatomic) long long currentScanState;
@property (nonatomic) long long currentScanType;
@property (nonatomic) BOOL scanInBackground;
@property (readonly, weak) NSMapTable *reachabilityScanTuples;
@property (nonatomic) unsigned char routeMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (id)logIdentifier;
- (void)pauseScans;
- (void).cxx_destruct;
- (void)updateStateForIdentifier:(id)a0 stateNumber:(id)a1;
- (id)trackedPeripheralForIdentifier:(id)a0;
- (unsigned long long)_getLinkQuality:(id)a0;
- (id)_lock_trackedPeripheralWithIdentifier:(id)a0;
- (id)_parseAdvertisementData:(id)a0 forPeripheral:(id)a1 RSSI:(id)a2;
- (void)_probeReachabilityForTrackedAccessories;
- (void)_removeTrackedPeripheral:(id)a0;
- (void)_reportHAPPeripheral:(id)a0;
- (void)_reportReachabilityForHAPPeripheral:(id)a0;
- (void)_startBrowsingForHAPBLEAccessories;
- (void)_startScanningWithScanType:(long long)a0;
- (void)_startTrackingHAPBLEAccessoriesWithIdentifiers:(id)a0 restartScan:(BOOL)a1;
- (void)_stopBrowsingForHAPBLEAccessories:(BOOL)a0;
- (void)_stopScanning;
- (void)_stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)a0;
- (void)homeKit:(id)a0 failedToStartScanningWithError:(id)a1;
- (void)homeKit:(id)a0 foundDevice:(id)a1 withData:(id)a2;
- (void)homeKit:(id)a0 foundDevice:(id)a1 withData:(id)a2 RSSI:(id)a3;
- (void)homeKit:(id)a0 foundDevice:(id)a1 withData:(id)a2 RSSI:(id)a3 type:(long long)a4;
- (void)homeKitDidUpdateState:(id)a0;
- (void)homeKitStartedScanning:(id)a0;
- (void)homeKitStoppedScanning:(id)a0;
- (void)probeReachabilityForTrackedAccessoriesWithScanTuples:(id)a0;
- (BOOL)removeTrackedPeripheralWithStableIdentifier:(id)a0;
- (void)resetLastSeenForTrackedAccessories:(id)a0;
- (void)restartScans;
- (void)retrieveStateForTrackedAccessoryWithIdentifier:(id)a0 stateNumber:(id *)a1 isReachable:(BOOL *)a2 linkQuality:(unsigned long long *)a3 lastSeen:(id *)a4;
- (void)startBrowsingForHAPBLEAccessories;
- (void)startTrackingHAPBLEAccessoriesWithIdentifiers:(id)a0;
- (void)stopBrowsingForHAPBLEAccessories:(BOOL)a0;
- (void)stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)a0;
- (id)trackedIdentifiers;
- (id)trackedPeripheralWithIdentifier:(id)a0;
- (id)trackedPeripherals;

@end
