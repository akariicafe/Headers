@interface AWDImageSignalProcessorFaceIDMemoryUsage : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char numAttemptsTotal : 1; unsigned char numBuffersInUseHighWatermark : 1; unsigned char numBuffersTotal : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNumBuffersInUseHighWatermark;
@property (nonatomic) unsigned int numBuffersInUseHighWatermark;
@property (nonatomic) BOOL hasNumBuffersTotal;
@property (nonatomic) unsigned int numBuffersTotal;
@property (nonatomic) BOOL hasNumAttemptsTotal;
@property (nonatomic) unsigned int numAttemptsTotal;

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
