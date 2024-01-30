@interface AWDSymptomsNetworkTCPFlowThroughputEvent : PBCodable <NSCopying> {
    struct { unsigned char connAttempts : 1; unsigned char connSuccess : 1; unsigned char delayedACKFactor : 1; unsigned char dlThroughputBytesPerSec : 1; unsigned char estimatorConfidence : 1; unsigned char estimatorDelayMsecs : 1; unsigned char flowDurationMsecs : 1; unsigned char invalidResponses : 1; unsigned char lQM : 1; unsigned char maxCongestionWindow : 1; unsigned char packetErrorRate : 1; unsigned char retransmissionTimeoutMsecs : 1; unsigned char rttAverageMsecs : 1; unsigned char rttMinimumMsecs : 1; unsigned char rttVariation : 1; unsigned char rxBytes : 1; unsigned char rxDuplicateBytes : 1; unsigned char rxOutOfOrderBytes : 1; unsigned char timeToNetworkEventsMsecs : 1; unsigned char txBytes : 1; unsigned char txRetransmittedBytes : 1; unsigned char ulThroughputBytesPerSec : 1; unsigned char snapshotType : 1; unsigned char throughputType : 1; } _has;
}

@property (nonatomic) BOOL hasTimeToNetworkEventsMsecs;
@property (nonatomic) unsigned long long timeToNetworkEventsMsecs;
@property (nonatomic) BOOL hasThroughputType;
@property (nonatomic) int throughputType;
@property (nonatomic) BOOL hasSnapshotType;
@property (nonatomic) int snapshotType;
@property (nonatomic) BOOL hasTxBytes;
@property (nonatomic) unsigned long long txBytes;
@property (nonatomic) BOOL hasRxBytes;
@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) BOOL hasFlowDurationMsecs;
@property (nonatomic) unsigned long long flowDurationMsecs;
@property (nonatomic) BOOL hasUlThroughputBytesPerSec;
@property (nonatomic) unsigned long long ulThroughputBytesPerSec;
@property (nonatomic) BOOL hasDlThroughputBytesPerSec;
@property (nonatomic) unsigned long long dlThroughputBytesPerSec;
@property (nonatomic) BOOL hasEstimatorDelayMsecs;
@property (nonatomic) unsigned long long estimatorDelayMsecs;
@property (nonatomic) BOOL hasEstimatorConfidence;
@property (nonatomic) unsigned long long estimatorConfidence;
@property (nonatomic) BOOL hasInvalidResponses;
@property (nonatomic) unsigned long long invalidResponses;
@property (nonatomic) BOOL hasRxDuplicateBytes;
@property (nonatomic) unsigned long long rxDuplicateBytes;
@property (nonatomic) BOOL hasRxOutOfOrderBytes;
@property (nonatomic) unsigned long long rxOutOfOrderBytes;
@property (nonatomic) BOOL hasTxRetransmittedBytes;
@property (nonatomic) unsigned long long txRetransmittedBytes;
@property (nonatomic) BOOL hasConnAttempts;
@property (nonatomic) unsigned long long connAttempts;
@property (nonatomic) BOOL hasConnSuccess;
@property (nonatomic) unsigned long long connSuccess;
@property (nonatomic) BOOL hasRttMinimumMsecs;
@property (nonatomic) unsigned long long rttMinimumMsecs;
@property (nonatomic) BOOL hasRttAverageMsecs;
@property (nonatomic) unsigned long long rttAverageMsecs;
@property (nonatomic) BOOL hasRttVariation;
@property (nonatomic) unsigned long long rttVariation;
@property (nonatomic) BOOL hasMaxCongestionWindow;
@property (nonatomic) unsigned long long maxCongestionWindow;
@property (nonatomic) BOOL hasDelayedACKFactor;
@property (nonatomic) unsigned long long delayedACKFactor;
@property (nonatomic) BOOL hasRetransmissionTimeoutMsecs;
@property (nonatomic) unsigned long long retransmissionTimeoutMsecs;
@property (nonatomic) BOOL hasPacketErrorRate;
@property (nonatomic) unsigned long long packetErrorRate;
@property (nonatomic) BOOL hasLQM;
@property (nonatomic) long long lQM;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)throughputTypeAsString:(int)a0;
- (int)StringAsThroughputType:(id)a0;
- (id)snapshotTypeAsString:(int)a0;
- (int)StringAsSnapshotType:(id)a0;

@end
