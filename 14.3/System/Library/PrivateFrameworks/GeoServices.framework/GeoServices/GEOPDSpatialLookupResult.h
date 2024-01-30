@class PBDataReader, GEOLatLng, GEOPDBounds, PBUnknownFields;

@interface GEOPDSpatialLookupResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _mappedCategorys;
    GEOPDBounds *_bounds;
    GEOLatLng *_center;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_mappedCategorys : 1; unsigned char read_bounds : 1; unsigned char read_center : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (readonly, nonatomic) BOOL hasBounds;
@property (retain, nonatomic) GEOPDBounds *bounds;
@property (readonly, nonatomic) unsigned long long mappedCategorysCount;
@property (readonly, nonatomic) int *mappedCategorys;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (id)spatialLookupResultForPlaceData:(id)a0;

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
- (void)addMappedCategory:(int)a0;
- (void)clearMappedCategorys;
- (int)mappedCategoryAtIndex:(unsigned long long)a0;
- (void)setMappedCategorys:(int *)a0 count:(unsigned long long)a1;
- (id)mappedCategorysAsString:(int)a0;
- (int)StringAsMappedCategorys:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
