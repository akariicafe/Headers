@class GEOLatLng, GEOMapRegion, PBDataReader;

@interface GEOPDSearchLocationIntent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOLatLng *_center;
    GEOMapRegion *_displayMapRegion;
    double _distanceInKm;
    GEOMapRegion *_mapRegion;
    unsigned long long _venueId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _locationType;
    BOOL _isDerivedFromGeoIntent;
    BOOL _isDerivedFromPoiIntent;
    struct { unsigned char has_distanceInKm : 1; unsigned char has_venueId : 1; unsigned char has_locationType : 1; unsigned char has_isDerivedFromGeoIntent : 1; unsigned char has_isDerivedFromPoiIntent : 1; unsigned char read_center : 1; unsigned char read_displayMapRegion : 1; unsigned char read_mapRegion : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
