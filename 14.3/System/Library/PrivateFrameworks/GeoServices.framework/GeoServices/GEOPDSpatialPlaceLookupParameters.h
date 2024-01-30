@class PBDataReader, GEOLatLng, GEOMapRegion, GEOPDPoiIconCategoryFilter, PBUnknownFields;

@interface GEOPDSpatialPlaceLookupParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _categoryFilters;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _excludeIconCategoryFilters;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _includeIconCategoryFilters;
    GEOLatLng *_center;
    GEOMapRegion *_mapRegion;
    GEOPDPoiIconCategoryFilter *_poiIconCategoryFilter;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _count;
    int _radius;
    struct { unsigned char has_count : 1; unsigned char has_radius : 1; unsigned char read_unknownFields : 1; unsigned char read_categoryFilters : 1; unsigned char read_excludeIconCategoryFilters : 1; unsigned char read_includeIconCategoryFilters : 1; unsigned char read_center : 1; unsigned char read_mapRegion : 1; unsigned char read_poiIconCategoryFilter : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic) BOOL hasRadius;
@property (nonatomic) int radius;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) int count;
@property (readonly, nonatomic) unsigned long long categoryFiltersCount;
@property (readonly, nonatomic) int *categoryFilters;
@property (readonly, nonatomic) unsigned long long includeIconCategoryFiltersCount;
@property (readonly, nonatomic) unsigned int *includeIconCategoryFilters;
@property (readonly, nonatomic) unsigned long long excludeIconCategoryFiltersCount;
@property (readonly, nonatomic) unsigned int *excludeIconCategoryFilters;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) BOOL hasPoiIconCategoryFilter;
@property (retain, nonatomic) GEOPDPoiIconCategoryFilter *poiIconCategoryFilter;
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
- (void)addCategoryFilter:(int)a0;
- (void)clearCategoryFilters;
- (int)categoryFilterAtIndex:(unsigned long long)a0;
- (void)setCategoryFilters:(int *)a0 count:(unsigned long long)a1;
- (id)categoryFiltersAsString:(int)a0;
- (int)StringAsCategoryFilters:(id)a0;
- (void)addIncludeIconCategoryFilter:(unsigned int)a0;
- (void)addExcludeIconCategoryFilter:(unsigned int)a0;
- (void)clearIncludeIconCategoryFilters;
- (unsigned int)includeIconCategoryFilterAtIndex:(unsigned long long)a0;
- (void)clearExcludeIconCategoryFilters;
- (unsigned int)excludeIconCategoryFilterAtIndex:(unsigned long long)a0;
- (void)setIncludeIconCategoryFilters:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)description;
- (void)setExcludeIconCategoryFilters:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
