@class GEOPDViewportInfo, GEOPDRecentRouteInfo, PBUnknownFields, NSData, PBDataReader, GEOPDSSearchEvChargingParameters, GEOPDETAFilter;

@interface GEOPDCategorySearchParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedRelatedEntitySectionTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedSearchTierTypes;
    GEOPDETAFilter *_etaFilter;
    GEOPDSSearchEvChargingParameters *_evChargingParameters;
    GEOPDRecentRouteInfo *_recentRouteInfo;
    NSData *_suggestionEntryMetadata;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _auxiliaryTierNumResults;
    unsigned int _blurredHourOfDay;
    unsigned int _dayOfWeek;
    unsigned int _maxResults;
    int _searchType;
    BOOL _supportCategorySearchResultSection;
    struct { unsigned char has_auxiliaryTierNumResults : 1; unsigned char has_blurredHourOfDay : 1; unsigned char has_dayOfWeek : 1; unsigned char has_maxResults : 1; unsigned char has_searchType : 1; unsigned char has_supportCategorySearchResultSection : 1; unsigned char read_unknownFields : 1; unsigned char read_supportedRelatedEntitySectionTypes : 1; unsigned char read_supportedSearchTierTypes : 1; unsigned char read_etaFilter : 1; unsigned char read_evChargingParameters : 1; unsigned char read_recentRouteInfo : 1; unsigned char read_suggestionEntryMetadata : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasMaxResults;
@property (nonatomic) unsigned int maxResults;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
@property (retain, nonatomic) NSData *suggestionEntryMetadata;
@property (nonatomic) BOOL hasBlurredHourOfDay;
@property (nonatomic) unsigned int blurredHourOfDay;
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) unsigned int dayOfWeek;
@property (nonatomic) BOOL hasSearchType;
@property (nonatomic) int searchType;
@property (readonly, nonatomic) BOOL hasRecentRouteInfo;
@property (retain, nonatomic) GEOPDRecentRouteInfo *recentRouteInfo;
@property (nonatomic) BOOL hasSupportCategorySearchResultSection;
@property (nonatomic) BOOL supportCategorySearchResultSection;
@property (readonly, nonatomic) BOOL hasEvChargingParameters;
@property (retain, nonatomic) GEOPDSSearchEvChargingParameters *evChargingParameters;
@property (readonly, nonatomic) unsigned long long supportedRelatedEntitySectionTypesCount;
@property (readonly, nonatomic) int *supportedRelatedEntitySectionTypes;
@property (readonly, nonatomic) BOOL hasEtaFilter;
@property (retain, nonatomic) GEOPDETAFilter *etaFilter;
@property (readonly, nonatomic) unsigned long long supportedSearchTierTypesCount;
@property (readonly, nonatomic) int *supportedSearchTierTypes;
@property (nonatomic) BOOL hasAuxiliaryTierNumResults;
@property (nonatomic) unsigned int auxiliaryTierNumResults;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)addSupportedRelatedEntitySectionType:(int)a0;
- (void)addSupportedSearchTierType:(int)a0;
- (void)clearSupportedRelatedEntitySectionTypes;
- (int)supportedRelatedEntitySectionTypeAtIndex:(unsigned long long)a0;
- (void)clearSupportedSearchTierTypes;
- (int)supportedSearchTierTypeAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (id)searchTypeAsString:(int)a0;
- (int)StringAsSearchType:(id)a0;
- (void)setSupportedRelatedEntitySectionTypes:(int *)a0 count:(unsigned long long)a1;
- (id)supportedRelatedEntitySectionTypesAsString:(int)a0;
- (int)StringAsSupportedRelatedEntitySectionTypes:(id)a0;
- (void)setSupportedSearchTierTypes:(int *)a0 count:(unsigned long long)a1;
- (id)supportedSearchTierTypesAsString:(int)a0;
- (int)StringAsSupportedSearchTierTypes:(id)a0;

@end
