@class PBDataReader, PBUnknownFields;

@interface GEOPDPoiIconCategoryFilter : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _excludeCategoryFilters;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _includeCategoryFilters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_excludeCategoryFilters : 1; unsigned char read_includeCategoryFilters : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long includeCategoryFiltersCount;
@property (readonly, nonatomic) unsigned int *includeCategoryFilters;
@property (readonly, nonatomic) unsigned long long excludeCategoryFiltersCount;
@property (readonly, nonatomic) unsigned int *excludeCategoryFilters;
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
- (id)initWithDictionary:(id)a0;
- (void)clearIncludeCategoryFilters;
- (unsigned int)includeCategoryFilterAtIndex:(unsigned long long)a0;
- (void)clearExcludeCategoryFilters;
- (unsigned int)excludeCategoryFilterAtIndex:(unsigned long long)a0;
- (void)setIncludeCategoryFilters:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setExcludeCategoryFilters:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)addIncludeCategoryFilter:(unsigned int)a0;
- (void)addExcludeCategoryFilter:(unsigned int)a0;

@end
