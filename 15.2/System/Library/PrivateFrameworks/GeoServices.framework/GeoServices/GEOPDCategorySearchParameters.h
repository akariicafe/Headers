@class GEOPDViewportInfo, NSData, PBDataReader, GEOPDRecentRouteInfo, GEOPDResultRefinementQuery, GEOPDETAFilter, PBUnknownFields, GEOPDSSearchEvChargingParameters;

@interface GEOPDCategorySearchParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _knownRefinementTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedPlaceSummaryFormatTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedRelatedEntitySectionTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedSearchSectionTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedSearchTierTypes;
    GEOPDETAFilter *_etaFilter;
    GEOPDSSearchEvChargingParameters *_evChargingParameters;
    GEOPDViewportInfo *_previousSearchViewport;
    GEOPDRecentRouteInfo *_recentRouteInfo;
    GEOPDResultRefinementQuery *_resultRefinementQuery;
    NSData *_suggestionEntryMetadata;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _auxiliaryTierNumResults;
    unsigned int _blurredHourOfDay;
    unsigned int _dayOfWeek;
    unsigned int _maxResults;
    int _placeSummaryRevision;
    int _searchType;
    BOOL _supportCategorySearchResultSection;
    struct { unsigned char has_auxiliaryTierNumResults : 1; unsigned char has_blurredHourOfDay : 1; unsigned char has_dayOfWeek : 1; unsigned char has_maxResults : 1; unsigned char has_placeSummaryRevision : 1; unsigned char has_searchType : 1; unsigned char has_supportCategorySearchResultSection : 1; unsigned char read_unknownFields : 1; unsigned char read_knownRefinementTypes : 1; unsigned char read_supportedPlaceSummaryFormatTypes : 1; unsigned char read_supportedRelatedEntitySectionTypes : 1; unsigned char read_supportedSearchSectionTypes : 1; unsigned char read_supportedSearchTierTypes : 1; unsigned char read_etaFilter : 1; unsigned char read_evChargingParameters : 1; unsigned char read_previousSearchViewport : 1; unsigned char read_recentRouteInfo : 1; unsigned char read_resultRefinementQuery : 1; unsigned char read_suggestionEntryMetadata : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
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
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
