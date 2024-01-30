@interface GEOURLCamera : PBCodable <NSCopying> {
    double _altitude;
    double _heading;
    double _latitude;
    double _longitude;
    double _pitch;
    struct { unsigned char has_altitude : 1; unsigned char has_heading : 1; unsigned char has_latitude : 1; unsigned char has_longitude : 1; unsigned char has_pitch : 1; } _flags;
}

@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) BOOL hasHeading;
@property (nonatomic) double heading;
@property (nonatomic) BOOL hasPitch;
@property (nonatomic) double pitch;
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) double altitude;

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
