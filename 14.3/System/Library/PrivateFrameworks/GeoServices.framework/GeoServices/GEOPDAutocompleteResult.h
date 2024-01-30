@class GEOPDAutocompleteSessionData, PBDataReader, GEOPDParsecQueryRankingFeatures, NSMutableArray, PBUnknownFields;

@interface GEOPDAutocompleteResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteSessionData *_autocompleteSessionData;
    NSMutableArray *_clientRankingFeatureMetadatas;
    GEOPDParsecQueryRankingFeatures *_parsecQueryRankingFeatures;
    NSMutableArray *_sections;
    NSMutableArray *_sortPriorityMappings;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _retainSearchTime;
    BOOL _enableRap;
    BOOL _isNoResultFromNegativeCache;
    BOOL _isTopSectionTypeQuery;
    BOOL _shouldDifferentiateClientAndServerResults;
    BOOL _shouldDisplayNoResults;
    struct { unsigned char has_retainSearchTime : 1; unsigned char has_enableRap : 1; unsigned char has_isNoResultFromNegativeCache : 1; unsigned char has_isTopSectionTypeQuery : 1; unsigned char has_shouldDifferentiateClientAndServerResults : 1; unsigned char has_shouldDisplayNoResults : 1; unsigned char read_unknownFields : 1; unsigned char read_autocompleteSessionData : 1; unsigned char read_clientRankingFeatureMetadatas : 1; unsigned char read_parsecQueryRankingFeatures : 1; unsigned char read_sections : 1; unsigned char read_sortPriorityMappings : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *sections;
@property (nonatomic) BOOL hasEnableRap;
@property (nonatomic) BOOL enableRap;
@property (nonatomic) BOOL hasShouldDisplayNoResults;
@property (nonatomic) BOOL shouldDisplayNoResults;
@property (nonatomic) BOOL hasRetainSearchTime;
@property (nonatomic) unsigned int retainSearchTime;
@property (nonatomic) BOOL hasIsNoResultFromNegativeCache;
@property (nonatomic) BOOL isNoResultFromNegativeCache;
@property (retain, nonatomic) NSMutableArray *sortPriorityMappings;
@property (nonatomic) BOOL hasIsTopSectionTypeQuery;
@property (nonatomic) BOOL isTopSectionTypeQuery;
@property (retain, nonatomic) NSMutableArray *clientRankingFeatureMetadatas;
@property (nonatomic) BOOL hasShouldDifferentiateClientAndServerResults;
@property (nonatomic) BOOL shouldDifferentiateClientAndServerResults;
@property (readonly, nonatomic) BOOL hasAutocompleteSessionData;
@property (retain, nonatomic) GEOPDAutocompleteSessionData *autocompleteSessionData;
@property (readonly, nonatomic) BOOL hasParsecQueryRankingFeatures;
@property (retain, nonatomic) GEOPDParsecQueryRankingFeatures *parsecQueryRankingFeatures;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)sectionsType;
+ (Class)sortPriorityMappingType;
+ (Class)clientRankingFeatureMetadataType;
+ (BOOL)isValid:(id)a0;

- (void)clearSensitiveFields;
- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)clearSections;
- (id)sectionsAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (void)addSections:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)sectionsCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addSortPriorityMapping:(id)a0;
- (void)addClientRankingFeatureMetadata:(id)a0;
- (unsigned long long)sortPriorityMappingsCount;
- (void)clearSortPriorityMappings;
- (id)sortPriorityMappingAtIndex:(unsigned long long)a0;
- (unsigned long long)clientRankingFeatureMetadatasCount;
- (void)clearClientRankingFeatureMetadatas;
- (id)clientRankingFeatureMetadataAtIndex:(unsigned long long)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
