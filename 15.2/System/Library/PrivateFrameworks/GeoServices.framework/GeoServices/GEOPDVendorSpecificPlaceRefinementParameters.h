@class PBDataReader, NSString, GEOLatLng, NSData, GEOStructuredAddress, NSMutableArray, PBUnknownFields;

@interface GEOPDVendorSpecificPlaceRefinementParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOStructuredAddress *_addressHint;
    NSData *_addressObjectHint;
    NSString *_externalItemId;
    NSMutableArray *_formattedAddressLineHints;
    GEOLatLng *_locationHint;
    unsigned long long _muid;
    NSString *_placeNameHint;
    NSString *_vendorId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _addressGeocodeAccuracyHint;
    int _placeTypeHint;
    int _resultProviderId;
    struct { unsigned char has_muid : 1; unsigned char has_addressGeocodeAccuracyHint : 1; unsigned char has_placeTypeHint : 1; unsigned char has_resultProviderId : 1; unsigned char read_unknownFields : 1; unsigned char read_addressHint : 1; unsigned char read_addressObjectHint : 1; unsigned char read_externalItemId : 1; unsigned char read_formattedAddressLineHints : 1; unsigned char read_locationHint : 1; unsigned char read_placeNameHint : 1; unsigned char read_vendorId : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithExternalBusinessID:(id)a0 contentProvider:(id)a1;
- (id)initWithSearchURLQuery:(id)a0 coordinate:(struct { double x0; double x1; })a1 muid:(unsigned long long)a2 resultProviderId:(int)a3 contentProvider:(id)a4;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithMuid:(unsigned long long)a0 locationHint:(struct { double x0; double x1; })a1 placeNameHint:(id)a2 resultProviderId:(int)a3 contentProvider:(id)a4;
- (id)initWithMapItemToRefine:(id)a0 coordinate:(struct { double x0; double x1; })a1 contentProvider:(id)a2;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
