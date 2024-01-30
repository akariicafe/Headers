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
