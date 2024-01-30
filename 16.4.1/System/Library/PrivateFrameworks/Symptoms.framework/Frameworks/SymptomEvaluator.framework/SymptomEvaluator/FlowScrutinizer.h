@class PhysicalInterfaceSampler, NSMutableDictionary, NSMutableArray;

@interface FlowScrutinizer : NSObject {
    long long _numNotedAsFGAudioVideoTC;
    long long _numNotedAsCellFGAudioVideoTC;
    long long _numNotedAsWiFiFGAudioVideoTC;
    double _lastSampleTimeIntervalSinceReferenceDate;
    long long _totalCellAudioVideoRxBytes;
    long long _totalCellAudioVideoTxBytes;
    long long _totalWiFiAudioVideoRxBytes;
    long long _totalWiFiAudioVideoTxBytes;
    long long _lastSampledCellAudioVideoRxBytes;
    long long _lastSampledCellAudioVideoTxBytes;
    long long _lastSampledWiFiAudioVideoRxBytes;
    long long _lastSampledWiFiAudioVideoTxBytes;
    double _lastAudioVideoSampleTimeIntervalSinceReferenceDate;
    double _minCoreMediaAssetDownloadEstimatedDuration;
    double _transferSizeFlowFailedThresholdQuarantineTime;
    double _maxFlowIdleTimeWhileMarkedWithTransferSize;
    unsigned long long _numFlowsScrutinized;
    unsigned long long _numExpectedTransferSymptoms;
    unsigned long long _numMatchedExpectedTransferSymptoms;
    unsigned long long _numDelayedMatchExpectedTransferSymptoms;
    unsigned long long _numDupDelayedMatchExpectedTransferSymptoms;
    unsigned long long _numClosedFlowsForExpectedTransferSymptoms;
    unsigned long long _maxContinuouslyActiveSamples;
    unsigned long long _maxAlternatingIdleNonIdleSamples;
    double _idleDurationStopNonCoreMediaThroughputReporting;
}

@property (retain, nonatomic) NSMutableDictionary *transferSizeFlows;
@property (retain, nonatomic) NSMutableDictionary *originLedgers;
@property (retain, nonatomic) NSMutableArray *cellAudioVideoSamples;
@property (retain, nonatomic) NSMutableArray *wifiAudioVideoSamples;
@property (nonatomic) BOOL hasForegroundAVTrafficClassFlows;
@property (nonatomic) BOOL hasForegroundCellAVTrafficClassFlows;
@property (nonatomic) BOOL hasForegroundWiFiAVTrafficClassFlows;
@property (nonatomic) long long numExpectedTransferSignificantChanges;
@property (readonly, nonatomic) BOOL hasForegroundLikelyAVFlows;
@property (nonatomic) BOOL cellThroughputAdviserShouldRun;
@property (readonly, nonatomic) PhysicalInterfaceSampler *cellInterfaceSampler;
@property (readonly, nonatomic) PhysicalInterfaceSampler *wifiInterfaceSampler;
@property (readonly, nonatomic) double lastCellInterfaceTrafficTimestamp;
@property (readonly, nonatomic) double lastWiFiInterfaceTrafficTimestamp;
@property (nonatomic) BOOL accumulateCellAppHistoryEpisodes;

+ (id)sharedInstance;

- (id)getState:(BOOL)a0;
- (void)restoreDefaults;
- (void)scrutinizeFlow:(id)a0 withClassification:(id)a1;
- (void)updateTransferSizeFlowsWithTime:(double)a0;
- (void)noteExpectedTransfer:(unsigned long long)a0 inbound:(BOOL)a1 upperThreshold:(BOOL)a2 flowUUID:(id)a3 at:(double)a4;
- (void)addStateForOrigin:(id)a0 named:(id)a1 array:(id)a2 isDelegate:(BOOL)a3;
- (void)updateAudioVideoSamplesWithTime:(double)a0 bumpSamples:(BOOL)a1;
- (void)coreMediaAssetDownloadCompletion:(id)a0 for:(id)a1 at:(double)a2;
- (void)clearAVSamplesIfAllIdle:(id)a0 time:(double)a1;
- (id)init;
- (void)handleFlowDeltas:(id)a0 snapshot:(id)a1;
- (void)updateInterfaceSamplesWithTime:(double)a0 bumpSamples:(BOOL)a1;
- (int)setConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)noteCoreMediaAssetDownloadEvent:(unsigned long long)a0 downloadUUID:(id)a1 onBehalfOf:(id)a2 duration:(double)a3 at:(double)a4;

@end
