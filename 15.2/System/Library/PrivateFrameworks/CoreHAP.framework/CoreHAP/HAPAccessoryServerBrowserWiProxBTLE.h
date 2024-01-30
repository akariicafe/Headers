@class NSString, WPHomeKit, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, HAPAccessoryServerBrowserWiProxBTLEDelegate;

@interface HAPAccessoryServerBrowserWiProxBTLE : HMFObject <WPHomeKitDelegate, HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) id<HAPAccessoryServerBrowserWiProxBTLEDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) WPHomeKit *wpHomeKit;
@property (nonatomic) long long currentScanState;
@property (nonatomic) BOOL scanInBackground;
@property (readonly, nonatomic) NSMutableSet *trackedIdentifiers;
@property (readonly, nonatomic) NSMutableSet *trackedPeripherals;
@property (nonatomic) unsigned char wholeHomeBluetooth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)pauseScans;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)updateStateForIdentifier:(id)a0 stateNumber:(id)a1;
- (void).cxx_destruct;
- (void)homeKitDidUpdateState:(id)a0;
- (void)homeKit:(id)a0 foundDevice:(id)a1 withData:(id)a2 RSSI:(id)a3 type:(long long)a4;
- (void)_startScanningWithData:(id)a0;
- (void)_stopScanning;
- (void)startBrowsingForHAPBLEAccessories;
- (void)_startBrowsingForHAPBLEAccessories;
- (void)stopBrowsingForHAPBLEAccessories:(BOOL)a0;
- (void)_stopBrowsingForHAPBLEAccessories:(BOOL)a0;
- (void)startTrackingHAPBLEAccessoriesWithIdentifiers:(id)a0;
- (void)_startTrackingHAPBLEAccessoriesWithIdentifiers:(id)a0 restartScan:(BOOL)a1;
- (void)stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)a0;
- (void)_stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)a0;
- (void)resetLastSeenForTrackedAccessories:(id)a0;
- (void)retrieveStateForTrackedAccessoryWithIdentifier:(id)a0 onQueue:(id)a1 withCompletion:(id /* block */)a2;
- (unsigned long long)_getLinkQuality:(id)a0;
- (void)probeReachabilityForTrackedAccessories;
- (void)_probeReachabilityForTrackedAccessories;
- (id)_parseAdvertisementData:(id)a0 forPeripheral:(id)a1 RSSI:(id)a2;
- (void)homeKit:(id)a0 foundDevice:(id)a1 withData:(id)a2;
- (void)homeKit:(id)a0 foundDevice:(id)a1 withData:(id)a2 RSSI:(id)a3;
- (void)homeKitStartedScanning:(id)a0;
- (void)homeKitStoppedScanning:(id)a0;
- (void)homeKit:(id)a0 failedToStartScanningWithError:(id)a1;
- (id)_getTrackedPeripheralWithIdentifier:(id)a0;
- (void)_removeTrackedPeripheral:(id)a0;
- (void)_reportHAPPeripheral:(id)a0;

@end
