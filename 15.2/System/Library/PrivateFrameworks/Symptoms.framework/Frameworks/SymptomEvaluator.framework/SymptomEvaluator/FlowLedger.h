@class NSString, FlowOriginLedger, AppHistoryScreenerEpisode, NSUUID, NSMutableArray;

@interface FlowLedger : NSObject

@property (readonly, nonatomic) NSString *createdBy;
@property (retain, nonatomic) NSString *latestClassification;
@property (retain, nonatomic) FlowOriginLedger *creatorLedger;
@property (retain, nonatomic) AppHistoryScreenerEpisode *appEpisode;
@property (retain, nonatomic) NSUUID *flowUUID;
@property (nonatomic) unsigned long long flowIdentifier;
@property (nonatomic) unsigned long long totalObservedIfTypeRxBytes;
@property (nonatomic) unsigned long long totalObservedIfTypeTxBytes;
@property (nonatomic) double prevSampleTime;
@property (nonatomic) double flowIdleDuration;
@property (nonatomic) double flowNonIdleDuration;
@property (nonatomic) double pendingFlowNonIdleDuration;
@property (nonatomic) double maxRxThroughput;
@property (nonatomic) double maxTxThroughput;
@property (nonatomic) double minRxThroughput;
@property (nonatomic) double minTxThroughput;
@property (readonly, nonatomic) double recentRxThroughput;
@property (readonly, nonatomic) double recentTxThroughput;
@property (retain, nonatomic) NSMutableArray *alternatingIdleNonIdlePeriods;
@property (retain, nonatomic) NSMutableArray *nonIdleSamples;
@property (retain, nonatomic) NSString *flowType;
@property (nonatomic) unsigned int numSamples;
@property (nonatomic) unsigned int trafficClass;
@property (nonatomic) BOOL trafficClassIsAudioVideo;
@property (nonatomic) BOOL flowIsUDP;
@property (nonatomic) BOOL flowIsTCP;
@property (nonatomic) BOOL flowIsQUIC;
@property (nonatomic) BOOL lastSampleWasIdle;
@property (nonatomic) BOOL flowStartedAsForeground;
@property (nonatomic) BOOL flowLastSeenAsForeground;
@property (nonatomic) BOOL notedAsFGAudioVideoTC;
@property (nonatomic) BOOL notedAsAudioVideoTC;
@property (nonatomic) unsigned int expectedTransferState;
@property (nonatomic) double transferStateEntryTimestamp;
@property (nonatomic) BOOL rxTransferSizeLowerThreshold;
@property (nonatomic) BOOL rxTransferSizeUpperThreshold;
@property (nonatomic) BOOL txTransferSizeLowerThreshold;
@property (nonatomic) BOOL txTransferSizeUpperThreshold;

- (id)description;
- (void).cxx_destruct;
- (id)briefDescription;
- (id)statisticsDescription;
- (BOOL)statisticsForSampleCount:(unsigned long long *)a0 sampleDuration:(double *)a1 minRxTput:(double *)a2 avgRxTput:(double *)a3 maxRxTput:(double *)a4 avgCeilingRxTput:(double *)a5 normalizedRxStdDeviation:(double *)a6 minTxTput:(double *)a7 avgTxTput:(double *)a8 maxTxTput:(double *)a9 avgCeilingTxTput:(double *)a10 normalizedTxStdDeviation:(double *)a11 requiredMinSampleCount:(unsigned long long)a12;
- (id)expectedTransferStateToString:(unsigned int)a0;
- (BOOL)statisticsForAccumulatedSamples:(unsigned long long *)a0 sampleDuration:(double *)a1 avgRxTput:(double *)a2 avgCeilingRxTput:(double *)a3 avgTxTput:(double *)a4 avgCeilingTxTput:(double *)a5;

@end
