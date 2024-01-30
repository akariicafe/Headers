@class NSData, NSMutableArray, PBDataReader;

@interface GEOMapsServerMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_mapsSearchResults;
    NSMutableArray *_suggestionEntryMetadataDisplayeds;
    NSData *_suggestionEntryMetadataTappedOn;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_mapsSearchResults : 1; unsigned char read_suggestionEntryMetadataDisplayeds : 1; unsigned char read_suggestionEntryMetadataTappedOn : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSuggestionEntryMetadataTappedOn;
@property (retain, nonatomic) NSData *suggestionEntryMetadataTappedOn;
@property (retain, nonatomic) NSMutableArray *suggestionEntryMetadataDisplayeds;
@property (retain, nonatomic) NSMutableArray *mapsSearchResults;

+ (Class)suggestionEntryMetadataDisplayedType;
+ (Class)mapsSearchResultType;
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
- (void)addMapsSearchResult:(id)a0;
- (void)addSuggestionEntryMetadataDisplayed:(id)a0;
- (unsigned long long)suggestionEntryMetadataDisplayedsCount;
- (void)clearSuggestionEntryMetadataDisplayeds;
- (id)suggestionEntryMetadataDisplayedAtIndex:(unsigned long long)a0;
- (unsigned long long)mapsSearchResultsCount;
- (void)clearMapsSearchResults;
- (id)mapsSearchResultAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;

@end
