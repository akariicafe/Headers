@class VCHistogram, NSNumber, NSMutableDictionary;

@interface UplinkSegment : MultiwaySegment {
    NSMutableDictionary *_streamQualityAggregator;
    NSMutableDictionary *_streamGroupStats;
    unsigned int _audioFlushPacketCount;
    unsigned int _audioSentPacketCount;
}

@property unsigned long long packetSendSuccessCounter;
@property unsigned long long packetSendFailureCounter;
@property double averageSendBitrate;
@property (readonly) VCHistogram *SBR;
@property (readonly) VCHistogram *videoEncodingBitrate;
@property double totalAudioPauseTime;
@property unsigned long long videoFlushPacketCount;
@property unsigned long long videoSentPacketCount;
@property unsigned long long totalUsedCellBudgetTxDataBytes;
@property unsigned long long totalCellTxDataBytes;
@property unsigned long long totalCellDupTxDataBytes;
@property unsigned long long lastReportedTotalUsedCellBudgetTxDataBytes;
@property unsigned long long lastReportedTotalCellTxDataBytes;
@property unsigned long long lastReportedTotalCellDupTxDataBytes;
@property NSNumber *wrmLinkTypeSuggestion;
@property NSNumber *wrmLinkTypeChangeReasonCode;
@property NSNumber *wrmLinkTypeWifiRSSI;
@property NSNumber *wrmLinkTypeWifiSNR;
@property NSNumber *wrmLinkTypeWifiCCA;
@property NSNumber *wrmLinkTypeWifiPacketLoss;
@property NSNumber *wrmLinkTypeCellSignalStrength;
@property NSNumber *wrmLinkTypeCellSignalBar;
@property NSNumber *wrmLinkTypeCellServingCellType;
@property (nonatomic) BOOL isUplinkScreenEnabled;
@property BOOL isFullScreenCapture;
@property BOOL isCenterStageEnabled;
@property BOOL isPortraitBlurEnabled;
@property unsigned int BBQueueTooLargeCount;
@property unsigned int BBRateTooLowCount;
@property unsigned long long lastReportedTotalWifiTxDataBytes;
@property unsigned long long totalWifiTxDataBytes;
@property double maxAudioStallInterval;
@property unsigned int overshootSendBitrate;
@property unsigned int undershootSendBitrate;
@property unsigned int overUtilizedBandwidth;
@property unsigned int underUtilizedBandwidth;
@property (readonly) VCHistogram *audioMediaBitrate;
@property (readonly) VCHistogram *audioCodecPayload;
@property (readonly) VCHistogram *videoMediaBitrate;
@property (readonly) VCHistogram *videoCodecPayload;

- (void)dealloc;
- (void)collectStreamQualityAggregator:(id)a0;
- (void)addCellByteCountStats:(id)a0;
- (void)addCelltechTelemetryToDictionary:(id)a0;
- (void)addMediaQueueStats:(id)a0;
- (void)addSegmentWRMReportStats:(id)a0;
- (unsigned int)audioFlushPercent;
- (id)calculateBitrate:(id)a0 sumKey:(id)a1 counterKey:(id)a2;
- (id)calculateFramerate:(id)a0 forKey:(id)a1;
- (void)collectStreamTemporalStats:(id)a0;
- (id)initWithSegmentName:(id)a0 previousSegmentName:(id)a1 segmentStreamGroups:(unsigned int)a2 previousSegmentStreamGroups:(unsigned int)a3 nwActivity:(id)a4 localSwitches:(unsigned int)a5 conversationTimeBase:(id)a6 delegate:(id)a7;
- (void)processAudioPacketsFlushed:(unsigned int)a0 audioPacketsSent:(unsigned int)a1;
- (void)processBitrateEvent:(id)a0 forMetrics:(id)a1 withStreamGroup:(id)a2 withQuality:(id)a3 sumKey:(id)a4 counterKey:(id)a5;
- (void)processFramerateEvent:(id)a0 forMetrics:(id)a1 withStreamGroup:(id)a2 withQuality:(id)a3 sumKey:(id)a4;
- (void)processMediaQueueTelemetry:(id)a0;
- (void)processVideoTransmitterStats:(id)a0;
- (id)segmentReport;
- (void)updateAdaptiveLearningSegment;
- (void)updateUplinkSegmentStats:(id)a0 withSegmentBytes:(struct tagVCAggregatorFaceTimeSegmentStatsBytes { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a1;

@end
