@class GEOLatLng;

@interface GEORPIncidentLocation : PBCodable <NSCopying> {
    GEOLatLng *_latLng;
    unsigned int _zoomLevel;
    struct { unsigned char has_zoomLevel : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLatLng;
@property (retain, nonatomic) GEOLatLng *latLng;
@property (nonatomic) BOOL hasZoomLevel;
@property (nonatomic) unsigned int zoomLevel;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
