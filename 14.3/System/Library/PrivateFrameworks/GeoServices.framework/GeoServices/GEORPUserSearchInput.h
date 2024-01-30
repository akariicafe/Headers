@class PBDataReader, NSString, GEOPDPlace, GEOLatLng, GEOPDAutocompleteEntry;

@interface GEORPUserSearchInput : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDAutocompleteEntry *_autocompleteEntry;
    GEOLatLng *_coordinate;
    GEOPDPlace *_place;
    NSString *_searchString;
    NSString *_singleLineAddressString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _origin;
    struct { unsigned char has_origin : 1; unsigned char read_autocompleteEntry : 1; unsigned char read_coordinate : 1; unsigned char read_place : 1; unsigned char read_searchString : 1; unsigned char read_singleLineAddressString : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (readonly, nonatomic) BOOL hasSingleLineAddressString;
@property (retain, nonatomic) NSString *singleLineAddressString;
@property (readonly, nonatomic) BOOL hasPlace;
@property (retain, nonatomic) GEOPDPlace *place;
@property (readonly, nonatomic) BOOL hasAutocompleteEntry;
@property (retain, nonatomic) GEOPDAutocompleteEntry *autocompleteEntry;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (retain, nonatomic) GEOLatLng *coordinate;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) int origin;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)originAsString:(int)a0;
- (int)StringAsOrigin:(id)a0;

@end
