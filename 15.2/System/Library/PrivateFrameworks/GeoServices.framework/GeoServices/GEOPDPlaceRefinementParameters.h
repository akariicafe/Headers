@class NSData, GEOStructuredAddress, NSString, GEOPDMapsIdentifier, PBDataReader, PBUnknownFields, GEOLatLng, NSMutableArray;

@interface GEOPDPlaceRefinementParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOStructuredAddress *_addressHint;
    NSData *_addressObjectHint;
    NSMutableArray *_formattedAddressLineHints;
    GEOLatLng *_locationHint;
    GEOPDMapsIdentifier *_mapsId;
    unsigned long long _muid;
    NSString *_placeNameHint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _addressGeocodeAccuracyHint;
    int _placeTypeHint;
    int _resultProviderId;
    BOOL _supportCoordinatesOnlyRefinement;
    struct { unsigned char has_muid : 1; unsigned char has_addressGeocodeAccuracyHint : 1; unsigned char has_placeTypeHint : 1; unsigned char has_resultProviderId : 1; unsigned char has_supportCoordinatesOnlyRefinement : 1; unsigned char read_unknownFields : 1; unsigned char read_addressHint : 1; unsigned char read_addressObjectHint : 1; unsigned char read_formattedAddressLineHints : 1; unsigned char read_locationHint : 1; unsigned char read_mapsId : 1; unsigned char read_placeNameHint : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (BOOL)_routeHypothesisPlaceRefinementParametersIsEqual:(id)a0;
- (unsigned long long)_routeHypothesisPlaceRefinementParametersHash;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithMapItemToRefine:(id)a0 coordinate:(struct { double x0; double x1; })a1;
- (id)initWithIdentifier:(id)a0 placeNameHint:(id)a1 locationHint:(struct { double x0; double x1; })a2;
- (id)initWithSearchURLQuery:(id)a0 identifier:(id)a1;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_hasRequiredFields;
- (id)init;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
