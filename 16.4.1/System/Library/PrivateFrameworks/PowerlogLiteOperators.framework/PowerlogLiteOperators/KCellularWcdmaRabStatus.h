@interface KCellularWcdmaRabStatus : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char hsRabCount : 1; unsigned char r99RabCount : 1; unsigned char subsId : 1; unsigned char totalRabCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasTotalRabCount;
@property (nonatomic) unsigned int totalRabCount;
@property (nonatomic) BOOL hasR99RabCount;
@property (nonatomic) unsigned int r99RabCount;
@property (nonatomic) BOOL hasHsRabCount;
@property (nonatomic) unsigned int hsRabCount;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
