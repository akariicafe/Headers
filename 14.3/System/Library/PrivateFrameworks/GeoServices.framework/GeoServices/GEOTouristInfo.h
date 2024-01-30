@interface GEOTouristInfo : PBCodable <NSCopying> {
    double _fetchTimestamp;
    BOOL _isTourist;
    struct { unsigned char has_fetchTimestamp : 1; unsigned char has_isTourist : 1; } _flags;
}

@property (nonatomic) BOOL hasIsTourist;
@property (nonatomic) BOOL isTourist;
@property (nonatomic) BOOL hasFetchTimestamp;
@property (nonatomic) double fetchTimestamp;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
