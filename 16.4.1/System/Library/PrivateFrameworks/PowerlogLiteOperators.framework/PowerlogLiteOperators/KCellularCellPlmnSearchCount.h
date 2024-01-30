@interface KCellularCellPlmnSearchCount : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char cdma1xSearchCount : 1; unsigned char cdmaEvdoSearchCount : 1; unsigned char durationMs : 1; unsigned char gsmSearchCount : 1; unsigned char lteSearchCount : 1; unsigned char subsId : 1; unsigned char tdscdmaSearchCount : 1; unsigned char umtsSearchCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) BOOL hasGsmSearchCount;
@property (nonatomic) unsigned int gsmSearchCount;
@property (nonatomic) BOOL hasUmtsSearchCount;
@property (nonatomic) unsigned int umtsSearchCount;
@property (nonatomic) BOOL hasTdscdmaSearchCount;
@property (nonatomic) unsigned int tdscdmaSearchCount;
@property (nonatomic) BOOL hasLteSearchCount;
@property (nonatomic) unsigned int lteSearchCount;
@property (nonatomic) BOOL hasCdma1xSearchCount;
@property (nonatomic) unsigned int cdma1xSearchCount;
@property (nonatomic) BOOL hasCdmaEvdoSearchCount;
@property (nonatomic) unsigned int cdmaEvdoSearchCount;
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
