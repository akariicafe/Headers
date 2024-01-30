@interface AWDMETRICSCellularPowerLogPagingDRXCycle : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char fr : 1; unsigned char pagingDrxCycle : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasPagingDrxCycle;
@property (nonatomic) unsigned int pagingDrxCycle;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) BOOL hasFr;
@property (nonatomic) int fr;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)frAsString:(int)a0;
- (int)StringAsFr:(id)a0;

@end
