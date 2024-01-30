@class NSObject, NSMutableSet, NSMutableArray;
@protocol WFScanManagerScanProxy, OS_dispatch_queue, WFScanManagerDelegate;

@interface WFScanManager : NSObject

@property (nonatomic) long long state;
@property (weak, nonatomic) id<WFScanManagerDelegate> delegate;
@property (nonatomic) double scanInterval;
@property (retain, nonatomic) id<WFScanManagerScanProxy> scanProxy;
@property (retain, nonatomic) NSMutableSet *networks;
@property (retain, nonatomic) NSMutableArray *scanQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scanDispatchQueue;
@property (copy, nonatomic) id /* block */ singleScanBlock;
@property (retain, nonatomic) NSMutableSet *hotspotPluginNetworks;
@property (nonatomic) BOOL supportsHotspotHelper;
@property (nonatomic) BOOL supportsUnfilteredScanning;
@property (nonatomic) BOOL hotspotHelperScanning;
@property long long numberOfScansPerformed;
@property unsigned long long consecutiveZeroFilteredScanResults;
@property unsigned long long consecutiveZeroUnFilteredScanResults;
@property BOOL doUnFilteredScanning;

- (id)_knownNetworks;
- (void)_scan;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)pause;
- (void)resume;
- (void)stop;
- (BOOL)_isScanning;
- (id)initWithScanProxy:(id)a0 delegate:(id)a1;
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
- (void)_resetNoNetworksFoundCounters;
- (void)_checkForNoNetworksFound;

@end
