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
    unsigned int _nonCoreMediaAudioVideoOperation;
    double _averageTrafficClassAudioVideoRxThroughput;
    double _averageTrafficClassAudioVideoTxThroughput;
    double _thresholdAudioVideoFlowsClassifiedIntensive;
    unsigned long long _maxAppFlowMetricForAVDetermination;
    double _minPhysicalInterfaceDurationForSustainedHighThroughput;
    double _minDisplayOffPhysicalInterfaceDurationForSustainedHighThroughput;
    double _minDisplayOnPhysicalInterfaceDurationForSustainedHighThroughput;
    double _minPhysicalInterfaceRxUsageForSustainedHighThroughput;
    double _minInitialInterfaceRxUsageForSustainedHighThroughput;
    double _minPhysicalInterfaceTxUsageForSustainedHighThroughput;
    double _minInitialInterfaceTxUsageForSustainedHighThroughput;
    double _coreMediaAssetDownloadThresholdFailureQuarantineTime;
    double _minThroughputForNonIdleNonCoreMedia;
}

@property (retain, nonatomic) FlowScrutinizer *flowScrutinizer;
@property (readonly, nonatomic) int activeLimitedThroughputAudioVideoTrafficForegroundFlowScore;
@property (readonly, nonatomic) int activeHighThroughputAudioVideoTrafficForegroundFlowScore;
@property (readonly, nonatomic) unsigned long long numLowerThresholdTransferSizes;
@property (readonly, nonatomic) unsigned long long numUpperThresholdTransferSizes;
@property (readonly, nonatomic) unsigned long long numActiveTransferSizes;
@property (readonly, nonatomic) unsigned long long numCloakedTransferSizes;
@property (readonly, nonatomic) double transferSizeRelatedRecentThroughput;
@property (readonly, nonatomic) double transferSizeRelatedRecentRxThroughput;
@property (readonly, nonatomic) double transferSizeRelatedRecentTxThroughput;
@property (readonly, nonatomic) unsigned long long numCandidateCoreMediaAssetDownloads;
@property (readonly, nonatomic) unsigned long long numActiveCoreMediaAssetDownloads;
@property (readonly, nonatomic) double coreMediaAssetDownloadRelatedRecentThroughput;
@property (readonly, nonatomic) double backgroundTransferRecentThroughput;
@property (readonly, nonatomic) BOOL hasSustainedHighInterfaceThroughput;
@property (readonly, nonatomic) BOOL hasSustainedHighInterfaceRxThroughput;
@property (readonly, nonatomic) BOOL hasSustainedHighInterfaceTxThroughput;
@property (readonly, nonatomic) double busiestOriginRecentThroughput;
@property (readonly, nonatomic) FlowOriginLedger *busiestOrigin;
@property (readonly, nonatomic) unsigned int nonCoreMediaAudioVideoOperation;
@property (readonly, nonatomic) double averageTrafficClassAudioVideoRxThroughput;
@property (readonly, nonatomic) double averageTrafficClassAudioVideoTxThroughput;
@property (readonly, nonatomic) NSSet *transferContributors;
@property (readonly, nonatomic) NSMutableSet *highInterfaceUseContributors;
@property (readonly, nonatomic) NSSet *coreMediaAssetDownloadContributors;
@property (readonly, nonatomic) NSSet *allContributors;

+ (id)sharedInstanceForInterfaceType:(long long)a0;

- (void)_clearState;
- (int)setConfiguration:(id)a0;
- (void)restoreDefaults;
- (void).cxx_destruct;
- (id)init;
- (id)getState:(BOOL)a0;
- (void)startSamplingPeriod:(id)a0;
- (void)logCoreMediaAssetDownloadContributors:(unsigned long long)a0;
- (void)logTransferContributors:(unsigned long long)a0;
- (void)logInterfaceUseContributors:(unsigned long long)a0;
- (void)markCoreMediaAssetDownloadsAsActive;
- (void)markCoreMediaAssetDownloadsAsInactiveAt:(double)a0;
- (void)markTransferSizeFlowsAsInactive;
- (void)markTransferSizeFlowsAsActive;
- (void)setThresholdsOptimizedFor:(unsigned long long)a0;
- (BOOL)hadZeroInterfaceTrafficOn:(id)a0 forLast:(double)a1;
- (void)refreshState:(id)a0;
- (void)refreshTransferSizeState;
- (void)noteClosingFlow:(id)a0 ledger:(id)a1 originLedger:(id)a2;
- (BOOL)flowQualfiesForAVHeuristics:(id)a0;
- (void)applyFlowHeuristics:(id)a0 onBehalfOf:(id)a1;
- (void)evaluatePossibleAVFlows:(id)a0 currentFlowCount:(unsigned long long)a1 activeFlowCount:(unsigned long long)a2;
- (void)ensureNonZeroPhysicalInterfaceThroughputParameters;

@end
