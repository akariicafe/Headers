@interface KCellularWcdmaRrcConfiguration : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char drxCycleLengthMs : 1; unsigned char subsId : 1; unsigned char isDcConfigured : 1; unsigned char isMimoConfigured : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDrxCycleLengthMs;
@property (nonatomic) unsigned int drxCycleLengthMs;
@property (nonatomic) BOOL hasIsMimoConfigured;
@property (nonatomic) BOOL isMimoConfigured;
@property (nonatomic) BOOL hasIsDcConfigured;
@property (nonatomic) BOOL isDcConfigured;
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
