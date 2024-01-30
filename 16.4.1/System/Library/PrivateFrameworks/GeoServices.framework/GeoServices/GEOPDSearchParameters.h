@class GEOPDSInferredSignals, GEOPDViewportInfo, GEOPDSSearchFilter, GEOPDETAFilter, GEOPDRecentRouteInfo, PBUnknownFields, GEOPDResultRefinementQuery, GEOPDSSearchEvChargingParameters, GEOPDSearchOriginationInfo, GEOPDAutocompleteEntry, NSString, PBDataReader, GEOPDRetainedSearchMetadata, GEOPDSSearchLocationParameters, NSData, GEOPDSSearchStructureIntentRequestType;

@interface GEOPDSearchParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _knownRefinementTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedPlaceSummaryFormatTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedRelatedEntitySectionTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedSearchSectionTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedSearchTierTypes;
    NSString *_enrichmentCampaignNamespace;
    GEOPDETAFilter *_etaFilter;
    GEOPDSSearchEvChargingParameters *_evChargingParameters;
    GEOPDSInferredSignals *_inferredSignals;
    GEOPDViewportInfo *_previousSearchViewport;
    GEOPDRecentRouteInfo *_recentRouteInfo;
    GEOPDResultRefinementQuery *_resultRefinementQuery;
    GEOPDRetainedSearchMetadata *_retainedSearch;
    GEOPDSSearchFilter *_searchFilter;
    GEOPDSSearchLocationParameters *_searchLocationParameters;
    GEOPDSearchOriginationInfo *_searchOriginationInfo;
    NSString *_searchString;
    GEOPDSSearchStructureIntentRequestType *_searchStructureIntentType;
    NSData *_suggestionEntryMetadata;
    GEOPDAutocompleteEntry *_suggestionEntry;
    NSData *_suggestionMetadata;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _auxiliaryTierNumResults;
    unsigned int _maxResults;
    int _placeSummaryRevision;
    int _searchType;
    int _sortDirection;
    int _sortOrder;
    BOOL _supportDirectionIntentSearch;
    BOOL _supportDymSuggestion;
    BOOL _supportSearchEnrichment;
    BOOL _supportSearchResultSection;
    BOOL _supportStructuredRapAffordance;
    BOOL _supportUnresolvedDirectionIntent;
    struct { unsigned char has_auxiliaryTierNumResults : 1; unsigned char has_maxResults : 1; unsigned char has_placeSummaryRevision : 1; unsigned char has_searchType : 1; unsigned char has_sortDirection : 1; unsigned char has_sortOrder : 1; unsigned char has_supportDirectionIntentSearch : 1; unsigned char has_supportDymSuggestion : 1; unsigned char has_supportSearchEnrichment : 1; unsigned char has_supportSearchResultSection : 1; unsigned char has_supportStructuredRapAffordance : 1; unsigned char has_supportUnresolvedDirectionIntent : 1; unsigned char read_unknownFields : 1; unsigned char read_knownRefinementTypes : 1; unsigned char read_supportedPlaceSummaryFormatTypes : 1; unsigned char read_supportedRelatedEntitySectionTypes : 1; unsigned char read_supportedSearchSectionTypes : 1; unsigned char read_supportedSearchTierTypes : 1; unsigned char read_enrichmentCampaignNamespace : 1; unsigned char read_etaFilter : 1; unsigned char read_evChargingParameters : 1; unsigned char read_inferredSignals : 1; unsigned char read_previousSearchViewport : 1; unsigned char read_recentRouteInfo : 1; unsigned char read_resultRefinementQuery : 1; unsigned char read_retainedSearch : 1; unsigned char read_searchFilter : 1; unsigned char read_searchLocationParameters : 1; unsigned char read_searchOriginationInfo : 1; unsigned char read_searchString : 1; unsigned char read_searchStructureIntentType : 1; unsigned char read_suggestionEntryMetadata : 1; unsigned char read_suggestionEntry : 1; unsigned char read_suggestionMetadata : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSearchQuery:(id)a0 entryMetadata:(id)a1 metadata:(id)a2 autocompleteEntry:(id)a3 retainedSearch:(id)a4 maxResults:(unsigned int)a5 traits:(id)a6 routeInfo:(id)a7;

@end
