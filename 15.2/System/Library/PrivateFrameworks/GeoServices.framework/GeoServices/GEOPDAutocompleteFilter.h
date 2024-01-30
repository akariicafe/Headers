@class GEOPDPoiIconCategoryFilter, PBDataReader, PBUnknownFields;

@interface GEOPDAutocompleteFilter : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _placeTypeFilters;
    struct { int *list; unsigned long long count; unsigned long long size; } _requestedEntryTypes;
    GEOPDPoiIconCategoryFilter *_poiIconCategoryFilter;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_placeTypeFilters : 1; unsigned char read_requestedEntryTypes : 1; unsigned char read_poiIconCategoryFilter : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long requestedEntryTypesCount;
@property (readonly, nonatomic) int *requestedEntryTypes;
@property (readonly, nonatomic) BOOL hasPoiIconCategoryFilter;
@property (retain, nonatomic) GEOPDPoiIconCategoryFilter *poiIconCategoryFilter;
@property (readonly, nonatomic) unsigned long long placeTypeFiltersCount;
@property (readonly, nonatomic) int *placeTypeFilters;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)setRequestedEntryTypes:(int *)a0 count:(unsigned long long)a1;
- (id)requestedEntryTypesAsString:(int)a0;
- (int)StringAsRequestedEntryTypes:(id)a0;
- (void)setPlaceTypeFilters:(int *)a0 count:(unsigned long long)a1;
- (id)placeTypeFiltersAsString:(int)a0;
- (int)StringAsPlaceTypeFilters:(id)a0;
- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addRequestedEntryType:(int)a0;
- (void)addPlaceTypeFilter:(int)a0;
- (void)clearRequestedEntryTypes;
- (int)requestedEntryTypeAtIndex:(unsigned long long)a0;
- (void)clearPlaceTypeFilters;
- (int)placeTypeFilterAtIndex:(unsigned long long)a0;

@end
