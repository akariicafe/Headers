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

- (void)pause;
- (void)stop;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)resume;
- (BOOL)_isScanning;
- (void)_scan;
- (BOOL)_canResumeScanning;
- (void)_cancelQueuedScan;
- (void)_checkForNoNetworksFound;
- (id)_knownHiddenNetworkNames;
- (void)_processNextScan;
- (void)_queueScan;
- (void)_removeQueuedScans;
- (void)_resetNoNetworksFoundCounters;
- (void)_scanningDidFinishWithError:(id)a0;
- (void)_scanningWillStart;
- (void)_startHotspotPluginScan;
- (void)_stopNetworkPluginScan;
- (void)_updatePartialScanResults:(id)a0;
- (id)hotspotHelperForScanRecord:(id)a0;
- (id)initWithScanProxy:(id)a0 delegate:(id)a1;
- (double)setTwentyPercentSkew:(double)a0;

@end
