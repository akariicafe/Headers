@interface GEOTFPredictedSpeed : PBCodable <NSCopying> {
    unsigned int _deltaMinutesInFuture;
    unsigned int _speed;
    struct { unsigned char has_deltaMinutesInFuture : 1; unsigned char has_speed : 1; } _flags;
}

@property (nonatomic) BOOL hasDeltaMinutesInFuture;
@property (nonatomic) unsigned int deltaMinutesInFuture;
@property (nonatomic) BOOL hasSpeed;
@property (nonatomic) unsigned int speed;

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
