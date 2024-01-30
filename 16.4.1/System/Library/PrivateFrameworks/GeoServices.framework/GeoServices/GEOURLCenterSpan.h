@interface GEOURLCenterSpan : PBCodable <NSCopying> {
    double _latitudeDelta;
    double _latitude;
    double _longitudeDelta;
    double _longitude;
    struct { unsigned char has_latitudeDelta : 1; unsigned char has_latitude : 1; unsigned char has_longitudeDelta : 1; unsigned char has_longitude : 1; } _flags;
}

@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) BOOL hasLatitudeDelta;
@property (nonatomic) double latitudeDelta;
@property (nonatomic) BOOL hasLongitudeDelta;
@property (nonatomic) double longitudeDelta;

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

@end
