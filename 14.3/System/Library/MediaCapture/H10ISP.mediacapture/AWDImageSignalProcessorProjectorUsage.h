@interface AWDImageSignalProcessorProjectorUsage : PBCodable <NSCopying> {
    struct { unsigned char denseHighPower : 1; unsigned char denseLowPower : 1; unsigned char flood : 1; unsigned char probeA : 1; unsigned char probeB : 1; unsigned char sparseHighPower : 1; unsigned char sparseLowPower : 1; unsigned char standby : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDenseHighPower;
@property (nonatomic) unsigned long long denseHighPower;
@property (nonatomic) BOOL hasDenseLowPower;
@property (nonatomic) unsigned long long denseLowPower;
@property (nonatomic) BOOL hasSparseHighPower;
@property (nonatomic) unsigned long long sparseHighPower;
@property (nonatomic) BOOL hasSparseLowPower;
@property (nonatomic) unsigned long long sparseLowPower;
@property (nonatomic) BOOL hasFlood;
@property (nonatomic) unsigned long long flood;
@property (nonatomic) BOOL hasProbeA;
@property (nonatomic) unsigned long long probeA;
@property (nonatomic) BOOL hasProbeB;
@property (nonatomic) unsigned long long probeB;
@property (nonatomic) BOOL hasStandby;
@property (nonatomic) unsigned long long standby;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
