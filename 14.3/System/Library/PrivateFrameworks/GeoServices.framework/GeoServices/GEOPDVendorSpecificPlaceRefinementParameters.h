@class PBUnknownFields, NSString, PBDataReader, GEOLatLng, GEOStructuredAddress, NSMutableArray, NSData;

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

@property (nonatomic) BOOL hasResultProviderId;
@property (nonatomic) int resultProviderId;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) BOOL hasVendorId;
@property (retain, nonatomic) NSString *vendorId;
@property (readonly, nonatomic) BOOL hasExternalItemId;
@property (retain, nonatomic) NSString *externalItemId;
@property (readonly, nonatomic) BOOL hasLocationHint;
@property (retain, nonatomic) GEOLatLng *locationHint;
@property (readonly, nonatomic) BOOL hasAddressHint;
@property (retain, nonatomic) GEOStructuredAddress *addressHint;
@property (readonly, nonatomic) BOOL hasPlaceNameHint;
@property (retain, nonatomic) NSString *placeNameHint;
@property (retain, nonatomic) NSMutableArray *formattedAddressLineHints;
@property (nonatomic) BOOL hasPlaceTypeHint;
@property (nonatomic) int placeTypeHint;
@property (nonatomic) BOOL hasAddressGeocodeAccuracyHint;
@property (nonatomic) int addressGeocodeAccuracyHint;
@property (readonly, nonatomic) BOOL hasAddressObjectHint;
@property (retain, nonatomic) NSData *addressObjectHint;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)formattedAddressLineHintType;
+ (BOOL)isValid:(id)a0;

- (id)initWithSearchURLQuery:(id)a0 coordinate:(struct { double x0; double x1; })a1 muid:(unsigned long long)a2 resultProviderId:(int)a3 contentProvider:(id)a4;
- (int)StringAsPlaceTypeHint:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)addressGeocodeAccuracyHintAsString:(int)a0;
- (unsigned long long)formattedAddressLineHintsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addFormattedAddressLineHint:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithExternalBusinessID:(id)a0 contentProvider:(id)a1;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (int)StringAsAddressGeocodeAccuracyHint:(id)a0;
- (id)placeTypeHintAsString:(int)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)formattedAddressLineHintAtIndex:(unsigned long long)a0;
- (void)clearFormattedAddressLineHints;
- (id)initWithDictionary:(id)a0;
- (id)initWithMuid:(unsigned long long)a0 locationHint:(struct { double x0; double x1; })a1 placeNameHint:(id)a2 resultProviderId:(int)a3 contentProvider:(id)a4;
- (id)initWithMapItemToRefine:(id)a0 coordinate:(struct { double x0; double x1; })a1 contentProvider:(id)a2;

@end
