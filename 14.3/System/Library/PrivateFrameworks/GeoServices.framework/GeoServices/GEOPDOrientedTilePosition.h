@interface GEOPDOrientedTilePosition : PBCodable <NSCopying> {
    int _altitude;
    unsigned int _pitch;
    unsigned int _roll;
    unsigned int _x;
    unsigned int _yaw;
    unsigned int _y;
    struct { unsigned char has_altitude : 1; unsigned char has_pitch : 1; unsigned char has_roll : 1; unsigned char has_x : 1; unsigned char has_yaw : 1; unsigned char has_y : 1; } _flags;
}

@property (nonatomic) BOOL hasX;
@property (nonatomic) unsigned int x;
@property (nonatomic) BOOL hasY;
@property (nonatomic) unsigned int y;
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) int altitude;
@property (nonatomic) BOOL hasYaw;
@property (nonatomic) unsigned int yaw;
@property (nonatomic) BOOL hasPitch;
@property (nonatomic) unsigned int pitch;
@property (nonatomic) BOOL hasRoll;
@property (nonatomic) unsigned int roll;

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
