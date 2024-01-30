@class NSString, GEOPDSearchTokenSet, GEOLatLng, GEOStructuredAddress, GEOMapRegion, PBDataReader;

@interface GEOPDSearchGeoIntent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOStructuredAddress *_address;
    GEOLatLng *_center;
    NSString *_countryCode;
    GEOMapRegion *_displayMapRegion;
    NSString *_displayName;
    NSString *_doorNumber;
    long long _geoId;
    GEOMapRegion *_mapRegion;
    NSString *_name;
    GEOPDSearchTokenSet *_tokenSet;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _geoTypeId;
    struct { unsigned char has_geoId : 1; unsigned char has_geoTypeId : 1; unsigned char read_address : 1; unsigned char read_center : 1; unsigned char read_countryCode : 1; unsigned char read_displayMapRegion : 1; unsigned char read_displayName : 1; unsigned char read_doorNumber : 1; unsigned char read_mapRegion : 1; unsigned char read_name : 1; unsigned char read_tokenSet : 1; unsigned char wrote_anyField : 1; } _flags;
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
