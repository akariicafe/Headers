@class GEOPDPoiIconCategoryFilter, PBUnknownFields, GEOPDSSearchVenueFilter, PBDataReader, GEOPDSBrandFilter, GEOPDSCategoryFilter;

@interface GEOPDSSearchFilter : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDSBrandFilter *_brandFilter;
    GEOPDSCategoryFilter *_categoryFilter;
    GEOPDPoiIconCategoryFilter *_poiIconCategoryFilter;
    GEOPDSSearchVenueFilter *_venueFilter;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _searchIntentFilter;
    struct { unsigned char has_searchIntentFilter : 1; unsigned char read_unknownFields : 1; unsigned char read_brandFilter : 1; unsigned char read_categoryFilter : 1; unsigned char read_poiIconCategoryFilter : 1; unsigned char read_venueFilter : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasVenueFilter;
@property (retain, nonatomic) GEOPDSSearchVenueFilter *venueFilter;
@property (readonly, nonatomic) BOOL hasCategoryFilter;
@property (retain, nonatomic) GEOPDSCategoryFilter *categoryFilter;
@property (readonly, nonatomic) BOOL hasBrandFilter;
@property (retain, nonatomic) GEOPDSBrandFilter *brandFilter;
@property (nonatomic) BOOL hasSearchIntentFilter;
@property (nonatomic) int searchIntentFilter;
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
- (id)searchIntentFilterAsString:(int)a0;
- (int)StringAsSearchIntentFilter:(id)a0;
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

@end
