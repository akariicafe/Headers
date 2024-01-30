@class NSData, PBDataReader, GEOPDAutocompleteEntry;

@interface GEOSuggestionsFeedbackCollection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionID;
    NSData *_suggestionEntryMetadata;
    GEOPDAutocompleteEntry *_suggestionEntry;
    NSData *_suggestionMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _suggestionEntryIndex;
    int _suggestionsEntryListIndex;
    struct { unsigned char has_sessionID : 1; unsigned char has_suggestionEntryIndex : 1; unsigned char has_suggestionsEntryListIndex : 1; unsigned char read_suggestionEntryMetadata : 1; unsigned char read_suggestionEntry : 1; unsigned char read_suggestionMetadata : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionID;
@property (nonatomic) BOOL hasSuggestionsEntryListIndex;
@property (nonatomic) int suggestionsEntryListIndex;
@property (nonatomic) BOOL hasSuggestionEntryIndex;
@property (nonatomic) int suggestionEntryIndex;
@property (readonly, nonatomic) BOOL hasSuggestionMetadata;
@property (retain, nonatomic) NSData *suggestionMetadata;
@property (readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
@property (retain, nonatomic) NSData *suggestionEntryMetadata;
@property (readonly, nonatomic) BOOL hasSuggestionEntry;
@property (retain, nonatomic) GEOPDAutocompleteEntry *suggestionEntry;

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

@end
