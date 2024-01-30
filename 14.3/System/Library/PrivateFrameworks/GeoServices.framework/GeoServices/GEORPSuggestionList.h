@class NSString, GEOPDPlaceResponse, GEOPDPlaceRequest, NSMutableArray, PBDataReader;

@interface GEORPSuggestionList : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDPlaceRequest *_autocompleteRequest;
    GEOPDPlaceResponse *_autocompleteResponse;
    NSMutableArray *_entrys;
    NSString *_query;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_autocompleteRequest : 1; unsigned char read_autocompleteResponse : 1; unsigned char read_entrys : 1; unsigned char read_query : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasQuery;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSMutableArray *entrys;
@property (readonly, nonatomic) BOOL hasAutocompleteRequest;
@property (retain, nonatomic) GEOPDPlaceRequest *autocompleteRequest;
@property (readonly, nonatomic) BOOL hasAutocompleteResponse;
@property (retain, nonatomic) GEOPDPlaceResponse *autocompleteResponse;

+ (Class)entryType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (unsigned long long)entrysCount;
- (BOOL)readFrom:(id)a0;
- (void)clearEntrys;
- (id)entryAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)addEntry:(id)a0;

@end
