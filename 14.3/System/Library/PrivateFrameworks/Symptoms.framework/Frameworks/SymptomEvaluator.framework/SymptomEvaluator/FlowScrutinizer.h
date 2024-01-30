@class FlowOracle, NSMutableDictionary, NSMutableArray;

@interface FlowScrutinizer : NSObject {
    long long _numNotedAsFGAudioVideoTC;
    long long _totalRxIfTypeBytes;
    long long _totalTxIfTypeBytes;
    long long _lastSampledRxIfTypeBytes;
    long long _lastSampledTxIfTypeBytes;
    double _lastSampleTimeIntervalSinceReferenceDate;
    double _minCoreMediaAssetDownloadEstimatedDuration;
    double _transferSizeFlowFailedThresholdQuarantineTime;
    double _maxFlowIdleTimeWhileMarkedWithTransferSize;
    double _lastInterfaceTrafficTimestamp;
    unsigned long long _numFlowsScrutinized;
    unsigned long long _numExpectedTransferSymptoms;
    unsigned long long _numMatchedExpectedTransferSymptoms;
    unsigned long long _numDelayedMatchExpectedTransferSymptoms;
    unsigned long long _numDupDelayedMatchExpectedTransferSymptoms;
    unsigned long long _numClosedFlowsForExpectedTransferSymptoms;
    unsigned long long _maxContinuouslyActiveSamples;
    unsigned long long _maxAlternatingIdleNonIdleSamples;
}

@property (retain, nonatomic) NSMutableDictionary *transferSizeFlows;
@property (retain, nonatomic) NSMutableDictionary *originLedgers;
@property (retain, nonatomic) NSMutableArray *interfaceSamples;
@property (nonatomic) long long flavor;
@property (retain, nonatomic) FlowOracle *oracle;
@property (readonly, nonatomic) BOOL hasForegroundAVTrafficClassFlows;
@property (readonly, nonatomic) BOOL hasForegroundLikelyAVFlows;
@property (readonly, nonatomic) BOOL pendingInterfaceSampleIsIdle;
@property (readonly, nonatomic) double lastInterfaceTrafficTimestamp;

+ (id)sharedInstanceForInterfaceType:(long long)a0;

- (id)init;
- (int)setConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)getState:(BOOL)a0;
- (void)restoreDefaults;
- (void)scrutinizeFlow:(id)a0 withClassification:(id)a1 scrutinizedAsSignificantChange:(BOOL *)a2;
- (void)noteCoreMediaAssetDownloadEvent:(unsigned long long)a0 downloadUUID:(id)a1 onBehalfOf:(id)a2 duration:(double)a3;
- (void)noteExpectedTransfer:(unsigned long long)a0 inbound:(BOOL)a1 upperThreshold:(BOOL)a2 flowUUID:(id)a3 at:(double)a4 scrutinizedAsSignificantChange:(BOOL *)a5;
- (void)coreMediaAssetDownloadCompletion:(id)a0 for:(id)a1 at:(double)a2;
- (void)handleFlowDeltas:(id)a0 snapshot:(id)a1;
- (void)addStateForOrigin:(id)a0 named:(id)a1 array:(id)a2 isDelegate:(BOOL)a3;
- (void)noteInterfaceTraffic:(id)a0;
- (void)updateInterfaceSamplesWithTime:(double)a0 bumpSamples:(BOOL)a1;
- (void)updateTransferSizeFlowsWithTime:(double)a0;

@end
