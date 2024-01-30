@interface GEOVLFDeviceOrientation : PBCodable <NSCopying> {
    int _orientation;
    unsigned int _relativeTimestampMs;
    struct { unsigned char has_orientation : 1; unsigned char has_relativeTimestampMs : 1; } _flags;
}

@property (nonatomic) BOOL hasRelativeTimestampMs;
@property (nonatomic) unsigned int relativeTimestampMs;
@property (nonatomic) BOOL hasOrientation;
@property (nonatomic) int orientation;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsOrientation:(id)a0;
- (id)orientationAsString:(int)a0;

@end
