@class GEOPDViewportInfo, NSString, GEOAddress, PBDataReader, GEOPDRecentRouteInfo, PBUnknownFields, NSMutableArray, GEOPDIndexQueryNode;

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
