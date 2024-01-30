@class NSSet, FlowOriginLedger, NSMutableSet, ContinuousAVFlowDetector, StrictlyPeriodicAVFlowDetector, FlowScrutinizer;

@interface FlowOracle : NSObject {
    NSMutableSet *_expectedTransferOrigins;
    NSMutableSet *_coreMediaAssetDownloadOrigins;
    NSMutableSet *_likelyBelowThresholdAVFlows;
    NSMutableSet *_likelyOverThresholdAVFlows;
    NSMutableSet *_suppressedAVFlows;
    NSMutableSet *_accumulatedTransferOrigins;
    NSMutableSet *_accumulatedCoreMediaAssetDownloadOrigins;
    ContinuousAVFlowDetector *_continuousAVDetector;
    StrictlyPeriodicAVFlowDetector *_strictlyPeriodicAVDetector;
    double _prevStateRefreshTimestamp;
    double _prevStateRefreshTimestampForTputEstimates;
    double _olderSateRefreshTimestampForTputEstimates;
    BOOL _avUseCasesSupported;
    BOOL _hasSustainedInterfaceTraffic;
    BOOL _hasSustainedInterfaceRxTraffic;
    BOOL _hasSustainedInterfaceTxTraffic;
    double _thresholdAudioVideoFlowsClassifiedIntensive;
    unsigned long long _maxAppFlowMetricForAVDetermination;
    unsigned long long _numPhysicalInterfaceSamplesForSustainedHighThroughput;
    double _minPhysicalInterfaceRxUsageForSustainedHighThroughput;
    double _minInitialInterfaceRxUsageForSustainedHighThroughput;
    double _minPhysicalInterfaceTxUsageForSustainedHighThroughput;
    double _minInitialInterfaceTxUsageForSustainedHighThroughput;
    double _coreMediaAssetDownloadThresholdFailureQuarantineTime;
}

@property (retain, nonatomic) FlowScrutinizer *flowScrutinizer;
@property (readonly, nonatomic) int activeLimitedThroughputAudioVideoTrafficForegroundFlowScore;
@property (readonly, nonatomic) int activeHighThroughputAudioVideoTrafficForegroundFlowScore;
@property (readonly, nonatomic) unsigned long long numLowerThresholdTransferSizes;
@property (readonly, nonatomic) unsigned long long numUpperThresholdTransferSizes;
@property (readonly, nonatomic) unsigned long long numActiveTransferSizes;
@property (readonly, nonatomic) double transferSizeRelatedRecentThroughput;
@property (readonly, nonatomic) double transferSizeRelatedRecentRxThroughput;
@property (readonly, nonatomic) double transferSizeRelatedRecentTxThroughput;
@property (readonly, nonatomic) unsigned long long numCandidateCoreMediaAssetDownloads;
@property (readonly, nonatomic) unsigned long long numActiveCoreMediaAssetDownloads;
@property (readonly, nonatomic) double coreMediaAssetDownloadRelatedRecentThroughput;
@property (readonly, nonatomic) BOOL hasSustainedHighInterfaceThroughput;
@property (readonly, nonatomic) BOOL hasSustainedHighInterfaceRxThroughput;
@property (readonly, nonatomic) BOOL hasSustainedHighInterfaceTxThroughput;
@property (readonly, nonatomic) double busiestOriginRecentThroughput;
@property (readonly, nonatomic) FlowOriginLedger *busiestOrigin;
@property (readonly, nonatomic) NSSet *transferContributors;
@property (readonly, nonatomic) NSMutableSet *highInterfaceUseContributors;
@property (readonly, nonatomic) NSSet *coreMediaAssetDownloadContributors;
@property (readonly, nonatomic) NSSet *allContributors;

+ (id)sharedInstanceForInterfaceType:(long long)a0;

- (void)_clearState;
- (id)init;
- (int)setConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)getState:(BOOL)a0;
- (void)restoreDefaults;
- (void)startSamplingPeriod:(id)a0;
- (void)logCoreMediaAssetDownloadContributors:(unsigned long long)a0;
- (void)logTransferContributors:(unsigned long long)a0;
- (void)logInterfaceUseContributors:(unsigned long long)a0;
- (void)markCoreMediaAssetDownloadsAsActive;
- (void)markCoreMediaAssetDownloadsAsInactiveAt:(double)a0;
- (void)markTransferSizeFlowsAsInactive;
- (void)markTransferSizeFlowsAsActive;
- (BOOL)hadZeroInterfaceTrafficOn:(id)a0 forLast:(double)a1;
- (void)refreshState:(id)a0;
- (void)refreshTransferSizeState;
- (void)noteClosingFlow:(id)a0 ledger:(id)a1 originLedger:(id)a2;
- (BOOL)flowQualfiesForAVHeuristics:(id)a0;
- (void)applyFlowHeuristics:(id)a0 onBehalfOf:(id)a1;
- (void)evaluatePossibleAVFlows:(id)a0 currentFlowCount:(unsigned long long)a1 activeFlowCount:(unsigned long long)a2;
- (void)ensureNonZeroPysicalInterfaceThroughputParameters;

@end
