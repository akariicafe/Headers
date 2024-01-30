@class GEOPDViewportInfo, NSString, GEOAddress, GEOPDRecentRouteInfo, PBDataReader, PBUnknownFields, NSMutableArray, GEOPDIndexQueryNode;

@interface GEOPDSiriSearchParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOAddress *_address;
    NSMutableArray *_businessCategoryFilters;
    GEOPDIndexQueryNode *_indexFilter;
    GEOPDRecentRouteInfo *_recentRouteInfo;
    NSString *_searchString;
    NSMutableArray *_searchSubstringDescriptors;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _maxResultCount;
    int _sortOrder;
    BOOL _isStrictMapRegion;
    BOOL _structuredSearch;
    struct { unsigned char has_maxResultCount : 1; unsigned char has_sortOrder : 1; unsigned char has_isStrictMapRegion : 1; unsigned char has_structuredSearch : 1; unsigned char read_unknownFields : 1; unsigned char read_address : 1; unsigned char read_businessCategoryFilters : 1; unsigned char read_indexFilter : 1; unsigned char read_recentRouteInfo : 1; unsigned char read_searchString : 1; unsigned char read_searchSubstringDescriptors : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasSortOrder;
@property (nonatomic) int sortOrder;
@property (nonatomic) BOOL hasMaxResultCount;
@property (nonatomic) unsigned int maxResultCount;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (readonly, nonatomic) BOOL hasAddress;
@property (retain, nonatomic) GEOAddress *address;
@property (retain, nonatomic) NSMutableArray *businessCategoryFilters;
@property (nonatomic) BOOL hasIsStrictMapRegion;
@property (nonatomic) BOOL isStrictMapRegion;
@property (nonatomic) BOOL hasStructuredSearch;
@property (nonatomic) BOOL structuredSearch;
@property (retain, nonatomic) NSMutableArray *searchSubstringDescriptors;
@property (readonly, nonatomic) BOOL hasIndexFilter;
@property (retain, nonatomic) GEOPDIndexQueryNode *indexFilter;
@property (readonly, nonatomic) BOOL hasRecentRouteInfo;
@property (retain, nonatomic) GEOPDRecentRouteInfo *recentRouteInfo;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)businessCategoryFilterType;
+ (Class)searchSubstringDescriptorType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)addBusinessCategoryFilter:(id)a0;
- (void)addSearchSubstringDescriptor:(id)a0;
- (unsigned long long)businessCategoryFiltersCount;
- (void)clearBusinessCategoryFilters;
- (id)businessCategoryFilterAtIndex:(unsigned long long)a0;
- (unsigned long long)searchSubstringDescriptorsCount;
- (void)clearSearchSubstringDescriptors;
- (id)searchSubstringDescriptorAtIndex:(unsigned long long)a0;
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
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)sortOrderAsString:(int)a0;
- (int)StringAsSortOrder:(id)a0;

@end
