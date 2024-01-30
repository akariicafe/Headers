@class NSData, PBDataReader, PBUnknownFields;

@interface GEOSuggestionsOptions : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _entriesType;
    int _listType;
    BOOL _includeRankingFeatures;
    BOOL _normalizePOIs;
    struct { unsigned char has_entriesType : 1; unsigned char has_listType : 1; unsigned char has_includeRankingFeatures : 1; unsigned char has_normalizePOIs : 1; unsigned char read_unknownFields : 1; unsigned char read_suggestionEntryMetadata : 1; unsigned char read_suggestionMetadata : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasListType;
@property (nonatomic) int listType;
@property (nonatomic) BOOL hasEntriesType;
@property (nonatomic) int entriesType;
@property (readonly, nonatomic) BOOL hasSuggestionMetadata;
@property (retain, nonatomic) NSData *suggestionMetadata;
@property (readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
@property (retain, nonatomic) NSData *suggestionEntryMetadata;
@property (nonatomic) BOOL hasNormalizePOIs;
@property (nonatomic) BOOL normalizePOIs;
@property (nonatomic) BOOL hasIncludeRankingFeatures;
@property (nonatomic) BOOL includeRankingFeatures;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (id)entriesTypeAsString:(int)a0;
- (int)StringAsEntriesType:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)listTypeAsString:(int)a0;
- (int)StringAsListType:(id)a0;

@end
