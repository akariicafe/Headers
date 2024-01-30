@interface KCellularWcdmaCpcStat : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char energy : 1; unsigned char rxOnDurationMs : 1; unsigned char rxTxOffDurationMs : 1; unsigned char subsId : 1; unsigned char totalDurationMs : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasTotalDurationMs;
@property (nonatomic) unsigned int totalDurationMs;
@property (nonatomic) BOOL hasRxTxOffDurationMs;
@property (nonatomic) unsigned int rxTxOffDurationMs;
@property (nonatomic) BOOL hasRxOnDurationMs;
@property (nonatomic) unsigned int rxOnDurationMs;
@property (nonatomic) BOOL hasEnergy;
@property (nonatomic) unsigned int energy;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

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
