@interface GEOTrafficBoundingBox : PBCodable <NSCopying> {
    double _east;
    double _north;
    double _south;
    double _west;
    struct { unsigned char has_east : 1; unsigned char has_north : 1; unsigned char has_south : 1; unsigned char has_west : 1; } _flags;
}

@property (nonatomic) BOOL hasSouth;
@property (nonatomic) double south;
@property (nonatomic) BOOL hasWest;
@property (nonatomic) double west;
@property (nonatomic) BOOL hasNorth;
@property (nonatomic) double north;
@property (nonatomic) BOOL hasEast;
@property (nonatomic) double east;

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
