@class GEOPDAutocompleteSessionData, PBDataReader, GEOPDParsecQueryRankingFeatures, GEOPDPlaceSummaryLayoutMetadata, NSMutableArray, PBUnknownFields;

@interface GEOPDAutocompleteResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteSessionData *_autocompleteSessionData;
    NSMutableArray *_clientRankingFeatureMetadatas;
    GEOPDParsecQueryRankingFeatures *_parsecQueryRankingFeatures;
    GEOPDPlaceSummaryLayoutMetadata *_placeSummaryLayoutMetadata;
    NSMutableArray *_sections;
    NSMutableArray *_sortPriorityMappings;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _clientResolvedTypeSetupPrompt;
    int _highlightType;
    unsigned int _retainSearchTime;
    BOOL _enableRap;
    BOOL _isNoResultFromNegativeCache;
    BOOL _isTopSectionTypeQuery;
    BOOL _shouldDifferentiateClientAndServerResults;
    BOOL _shouldDisplayNoResults;
    BOOL _shouldEnableGrayscaleHighlighting;
    BOOL _shouldUseDistanceFeatureServerResults;
    struct { unsigned char has_clientResolvedTypeSetupPrompt : 1; unsigned char has_highlightType : 1; unsigned char has_retainSearchTime : 1; unsigned char has_enableRap : 1; unsigned char has_isNoResultFromNegativeCache : 1; unsigned char has_isTopSectionTypeQuery : 1; unsigned char has_shouldDifferentiateClientAndServerResults : 1; unsigned char has_shouldDisplayNoResults : 1; unsigned char has_shouldEnableGrayscaleHighlighting : 1; unsigned char has_shouldUseDistanceFeatureServerResults : 1; unsigned char read_unknownFields : 1; unsigned char read_autocompleteSessionData : 1; unsigned char read_clientRankingFeatureMetadatas : 1; unsigned char read_parsecQueryRankingFeatures : 1; unsigned char read_placeSummaryLayoutMetadata : 1; unsigned char read_sections : 1; unsigned char read_sortPriorityMappings : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
