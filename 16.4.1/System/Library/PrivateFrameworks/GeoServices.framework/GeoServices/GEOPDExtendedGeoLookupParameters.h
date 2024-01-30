@class PBDataReader, NSString, GEOInterpolationParameters, GEOLatLng, GEOAddress, PBUnknownFields;

@interface GEOPDExtendedGeoLookupParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _intersectingFeatureGeoIds;
    NSString *_dataSourceId;
    GEOInterpolationParameters *_interpolationParameter;
    GEOAddress *_preserveFields;
    unsigned long long _primaryFeatureGeoId;
    GEOLatLng *_primaryFeatureLocation;
    unsigned long long _streetSubPostalGeoId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _dataSourceIdRequired;
    BOOL _isLatlngRequest;
    struct { unsigned char has_primaryFeatureGeoId : 1; unsigned char has_streetSubPostalGeoId : 1; unsigned char has_dataSourceIdRequired : 1; unsigned char has_isLatlngRequest : 1; unsigned char read_unknownFields : 1; unsigned char read_intersectingFeatureGeoIds : 1; unsigned char read_dataSourceId : 1; unsigned char read_interpolationParameter : 1; unsigned char read_preserveFields : 1; unsigned char read_primaryFeatureLocation : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
