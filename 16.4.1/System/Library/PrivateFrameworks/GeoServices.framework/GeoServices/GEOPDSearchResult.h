@class PBUnknownFields, GEOMapRegion, GEOPDResolvedItem, GEOPDSearchSectionList, GEOPDSSearchAutoRedoThreshold, GEOPDSearchClientBehavior, NSMutableArray, NSString, GEOPDPlaceSummaryLayoutMetadata, PBDataReader, GEOPDResultRefinementGroup, GEOPDDirectionIntent, GEOPDRelatedSearchSuggestion;

@interface GEOPDSearchResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDSSearchAutoRedoThreshold *_autoRedoSearchThreshold;
    GEOPDResolvedItem *_clientResolvedResult;
    GEOPDRelatedSearchSuggestion *_defaultRelatedSearchSuggestion;
    GEOPDDirectionIntent *_directionIntent;
    NSMutableArray *_disambiguationLabels;
    NSMutableArray *_displayHeaderSubstitutes;
    GEOMapRegion *_displayMapRegion;
    GEOPDPlaceSummaryLayoutMetadata *_placeSummaryLayoutMetadata;
    NSMutableArray *_relatedEntitySections;
    NSMutableArray *_relatedSearchSuggestions;
    NSMutableArray *_resultDetourInfos;
    NSString *_resultDisplayHeader;
    GEOPDResultRefinementGroup *_resultRefinementGroup;
    NSMutableArray *_retainSearchs;
    GEOPDSearchClientBehavior *_searchClientBehavior;
    NSMutableArray *_searchResultSections;
    NSMutableArray *_searchTierMetadatas;
    GEOPDSearchSectionList *_sectionList;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _dymSuggestionVisibleTime;
    unsigned int _retainSearchTime;
    int _searchResultType;
    int _searchResultViewType;
    BOOL _disableAddingAdditionalPaddingOnViewport;
    BOOL _enablePartialClientization;
    BOOL _enableStructuredRapAffordance;
    BOOL _isChainResultSet;
    BOOL _showDymSuggestionCloseButton;
    struct { unsigned char has_dymSuggestionVisibleTime : 1; unsigned char has_retainSearchTime : 1; unsigned char has_searchResultType : 1; unsigned char has_searchResultViewType : 1; unsigned char has_disableAddingAdditionalPaddingOnViewport : 1; unsigned char has_enablePartialClientization : 1; unsigned char has_enableStructuredRapAffordance : 1; unsigned char has_isChainResultSet : 1; unsigned char has_showDymSuggestionCloseButton : 1; unsigned char read_unknownFields : 1; unsigned char read_autoRedoSearchThreshold : 1; unsigned char read_clientResolvedResult : 1; unsigned char read_defaultRelatedSearchSuggestion : 1; unsigned char read_directionIntent : 1; unsigned char read_disambiguationLabels : 1; unsigned char read_displayHeaderSubstitutes : 1; unsigned char read_displayMapRegion : 1; unsigned char read_placeSummaryLayoutMetadata : 1; unsigned char read_relatedEntitySections : 1; unsigned char read_relatedSearchSuggestions : 1; unsigned char read_resultDetourInfos : 1; unsigned char read_resultDisplayHeader : 1; unsigned char read_resultRefinementGroup : 1; unsigned char read_retainSearchs : 1; unsigned char read_searchClientBehavior : 1; unsigned char read_searchResultSections : 1; unsigned char read_searchTierMetadatas : 1; unsigned char read_sectionList : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
