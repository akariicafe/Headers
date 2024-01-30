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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)pauseScans;
- (void)updateStateForIdentifier:(id)a0 stateNumber:(id)a1;
- (void)homeKitDidUpdateState:(id)a0;
- (void)homeKit:(id)a0 foundDevice:(id)a1 withData:(id)a2 RSSI:(id)a3 type:(long long)a4;
- (void)resetLastSeenForTrackedAccessories:(id)a0;
- (void)startBrowsingForHAPBLEAccessories;
- (void)stopBrowsingForHAPBLEAccessories;
- (void)startTrackingHAPBLEAccessoriesWithIdentifiers:(id)a0;
- (void)retrieveStateForTrackedAccessoryWithIdentifier:(id)a0 onQueue:(id)a1 withCompletion:(id /* block */)a2;
- (void)stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)a0;
- (void)probeReachabilityForTrackedAccessories;
- (void)_stopScanning;
- (void)_startBrowsingForHAPBLEAccessories;
- (void)_startScanningWithData:(id)a0;
- (void)_stopBrowsingForHAPBLEAccessories;
- (void)_startTrackingHAPBLEAccessoriesWithIdentifiers:(id)a0 restartScan:(BOOL)a1;
- (void)_stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)a0;
- (void)_removeTrackedPeripheral:(id)a0;
- (id)_getTrackedPeripheralWithIdentifier:(id)a0;
- (unsigned long long)_getLinkQuality:(id)a0;
- (void)_probeReachabilityForTrackedAccessories;
- (void)_reportHAPPeripheral:(id)a0;
- (void)homeKit:(id)a0 foundDevice:(id)a1 withData:(id)a2 RSSI:(id)a3;
- (id)_parseAdvertisementData:(id)a0 forPeripheral:(id)a1 RSSI:(id)a2;
- (void)homeKit:(id)a0 foundDevice:(id)a1 withData:(id)a2;
- (void)homeKitStartedScanning:(id)a0;
- (void)homeKitStoppedScanning:(id)a0;
- (void)homeKit:(id)a0 failedToStartScanningWithError:(id)a1;

@end
