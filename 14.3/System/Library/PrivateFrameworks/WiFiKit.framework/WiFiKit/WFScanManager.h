@class WFClient, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, WFScanManagerDelegate;

@interface WFScanManager : NSObject

@property (nonatomic) long long state;
@property (weak, nonatomic) id<WFScanManagerDelegate> delegate;
@property (nonatomic) double scanInterval;
@property (retain, nonatomic) WFClient *wifiClient;
@property (retain, nonatomic) NSMutableSet *networks;
@property (retain, nonatomic) NSMutableArray *scanQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scanDispatchQueue;
@property (copy, nonatomic) id /* block */ singleScanBlock;
@property (retain, nonatomic) NSMutableSet *hotspotPluginNetworks;
@property (nonatomic) BOOL supportsHotspotHelper;
@property (nonatomic) BOOL supportsUnfilteredScanning;
@property (nonatomic) BOOL hotspotHelperScanning;
@property (nonatomic) BOOL isUsingCoreWiFi;
@property long long numberOfScansPerformed;
@property unsigned long long consecutiveZeroFilteredScanResults;
@property unsigned long long consecutiveZeroUnFilteredScanResults;
@property BOOL doUnFilteredScanning;

- (id)init;
- (void).cxx_destruct;
- (void)_scan;
- (BOOL)_isScanning;
- (void)stop;
- (id)_knownNetworks;
- (void)pause;
- (void)start;
- (void)resume;
- (id)initWithClient:(id)a0 scanInterval:(double)a1 delegate:(id)a2;
- (id)hotspotHelperForScanRecord:(id)a0;
- (void)_startHotspotPluginScan;
- (void)_cancelQueuedScan;
- (void)_stopNetworkPluginScan;
- (void)_queueScan;
- (double)setTwentyPercentSkew:(double)a0;
- (void)_scanningWillStart;
- (void)_scanningDidFinishWithError:(id)a0;
- (void)_processNextScan;
- (void)_updatePartialScanResults:(id)a0;
- (id)_scanRecordsFromScanResults:(id)a0;
- (void)_resetNoNetworksFoundCounters;
- (void)_checkForNoNetworksFound;

@end
