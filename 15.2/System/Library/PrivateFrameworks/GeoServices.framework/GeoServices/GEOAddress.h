@class PBDataReader, NSString, GEOStructuredAddress, NSMutableArray, PBUnknownFields;

@interface GEOAddress : PBCodable <GEOURLSerializable, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_formattedAddressLines;
    GEOStructuredAddress *_structuredAddress;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _formattedAddressType;
    struct { unsigned char has_formattedAddressType : 1; unsigned char read_unknownFields : 1; unsigned char read_formattedAddressLines : 1; unsigned char read_structuredAddress : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *formattedAddressLines;
@property (readonly, nonatomic) BOOL hasStructuredAddress;
@property (retain, nonatomic) GEOStructuredAddress *structuredAddress;
@property (nonatomic) BOOL hasFormattedAddressType;
@property (nonatomic) int formattedAddressType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)geoAddressForPlaceData:(id)a0;
+ (BOOL)isValid:(id)a0;
+ (Class)formattedAddressLineType;

- (id)bestName;
- (void)readAll:(BOOL)a0;
- (void)addFormattedAddressLine:(id)a0;
- (id)postalAddress;
- (id)initWithData:(id)a0;
- (id)initWithPostalAddress:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithAddressDictionary:(id)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (id)initWithUrlRepresentation:(id)a0;
- (BOOL)_isEquivalentURLRepresentationTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)addressDictionary;
- (void)copyTo:(id)a0;
- (unsigned long long)formattedAddressLinesCount;
- (void)clearFormattedAddressLines;
- (id)formattedAddressLineAtIndex:(unsigned long long)a0;
- (id)formattedAddressTypeAsString:(int)a0;
- (int)StringAsFormattedAddressType:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)urlRepresentation;
- (id)dictionaryRepresentation;

@end
