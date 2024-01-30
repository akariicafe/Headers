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

+ (BOOL)isValid:(id)a0;
+ (Class)mapsSearchResultType;
+ (Class)suggestionEntryMetadataDisplayedType;

- (id)initWithData:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addMapsSearchResult:(id)a0;
- (void)addSuggestionEntryMetadataDisplayed:(id)a0;
- (void)clearMapsSearchResults;
- (void)clearSuggestionEntryMetadataDisplayeds;
- (id)mapsSearchResultAtIndex:(unsigned long long)a0;
- (unsigned long long)mapsSearchResultsCount;
- (id)suggestionEntryMetadataDisplayedAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestionEntryMetadataDisplayedsCount;

@end
