@class PBDataReader, GEORPPlaceRequestResponse, NSMutableArray, PBUnknownFields;

@interface GEORPSearchFeedbackContext : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_autocompleteSuggestionLists;
    GEORPPlaceRequestResponse *_requestContext;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_autocompleteSuggestionLists : 1; unsigned char read_requestContext : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *autocompleteSuggestionLists;
@property (readonly, nonatomic) BOOL hasRequestContext;
@property (retain, nonatomic) GEORPPlaceRequestResponse *requestContext;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)autocompleteSuggestionListType;
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
- (void)addAutocompleteSuggestionList:(id)a0;
- (unsigned long long)autocompleteSuggestionListsCount;
- (void)clearAutocompleteSuggestionLists;
- (id)autocompleteSuggestionListAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
