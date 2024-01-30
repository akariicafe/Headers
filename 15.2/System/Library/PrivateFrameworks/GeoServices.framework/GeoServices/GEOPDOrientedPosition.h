@interface GEOPDOrientedPosition : PBCodable <NSCopying> {
    double _pitch;
    double _roll;
    double _x;
    double _yaw;
    double _y;
    double _z;
    struct { unsigned char has_pitch : 1; unsigned char has_roll : 1; unsigned char has_x : 1; unsigned char has_yaw : 1; unsigned char has_y : 1; unsigned char has_z : 1; } _flags;
}

@property (nonatomic) BOOL hasX;
@property (nonatomic) double x;
@property (nonatomic) BOOL hasY;
@property (nonatomic) double y;
@property (nonatomic) BOOL hasZ;
@property (nonatomic) double z;
@property (nonatomic) BOOL hasYaw;
@property (nonatomic) double yaw;
@property (nonatomic) BOOL hasPitch;
@property (nonatomic) double pitch;
@property (nonatomic) BOOL hasRoll;
@property (nonatomic) double roll;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
