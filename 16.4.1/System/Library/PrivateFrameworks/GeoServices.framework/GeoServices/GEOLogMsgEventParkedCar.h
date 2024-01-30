@class GEOLatLng;

@interface GEOLogMsgEventParkedCar : PBCodable <NSCopying> {
    double _locationUncertainty;
    GEOLatLng *_location;
    double _timestamp;
    struct { unsigned char has_locationUncertainty : 1; unsigned char has_timestamp : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) BOOL hasLocationUncertainty;
@property (nonatomic) double locationUncertainty;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;

+ (BOOL)isValid:(id)a0;

- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
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
- (void).cxx_destruct;

@end
