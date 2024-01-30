@interface GEOVLFGravityVector : PBCodable <NSCopying> {
    double _x;
    double _y;
    double _z;
    struct { unsigned char has_x : 1; unsigned char has_y : 1; unsigned char has_z : 1; } _flags;
}

@property (nonatomic) BOOL hasX;
@property (nonatomic) double x;
@property (nonatomic) BOOL hasY;
@property (nonatomic) double y;
@property (nonatomic) BOOL hasZ;
@property (nonatomic) double z;

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
