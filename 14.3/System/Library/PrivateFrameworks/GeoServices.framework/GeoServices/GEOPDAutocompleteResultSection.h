@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDAutocompleteResultSection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_entries;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _numVisibleResults;
    int _suggestionType;
    int _type;
    BOOL _enforceServerResultsOrder;
    BOOL _shouldInterleaveClientResults;
    struct { unsigned char has_numVisibleResults : 1; unsigned char has_suggestionType : 1; unsigned char has_type : 1; unsigned char has_enforceServerResultsOrder : 1; unsigned char has_shouldInterleaveClientResults : 1; unsigned char read_unknownFields : 1; unsigned char read_entries : 1; unsigned char read_name : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *entries;
@property (nonatomic) BOOL hasSuggestionType;
@property (nonatomic) int suggestionType;
@property (nonatomic) BOOL hasNumVisibleResults;
@property (nonatomic) int numVisibleResults;
@property (nonatomic) BOOL hasShouldInterleaveClientResults;
@property (nonatomic) BOOL shouldInterleaveClientResults;
@property (nonatomic) BOOL hasEnforceServerResultsOrder;
@property (nonatomic) BOOL enforceServerResultsOrder;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)entriesType;
+ (BOOL)isValid:(id)a0;

- (void)clearSensitiveFields;
- (id)initWithJSON:(id)a0;
- (id)init;
- (int)StringAsType:(id)a0;
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
- (unsigned long long)entriesCount;
- (void)clearEntries;
- (id)entriesAtIndex:(unsigned long long)a0;
- (id)suggestionTypeAsString:(int)a0;
- (int)StringAsSuggestionType:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)typeAsString:(int)a0;
- (void)addEntries:(id)a0;

@end
