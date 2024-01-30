@interface KCellularServingCellLost : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char lastSysMode : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasLastSysMode;
@property (nonatomic) int lastSysMode;
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
- (id)lastSysModeAsString:(int)a0;
- (int)StringAsLastSysMode:(id)a0;

@end
