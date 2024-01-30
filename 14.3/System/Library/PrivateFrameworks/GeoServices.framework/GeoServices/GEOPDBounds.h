@class GEOMapRegion, PBDataReader, PBUnknownFields;

@interface GEOPDBounds : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_displayMapRegion;
    GEOMapRegion *_mapRegion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _maxZoom;
    float _minZoom;
    struct { unsigned char has_maxZoom : 1; unsigned char has_minZoom : 1; unsigned char read_unknownFields : 1; unsigned char read_displayMapRegion : 1; unsigned char read_mapRegion : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) BOOL hasDisplayMapRegion;
@property (retain, nonatomic) GEOMapRegion *displayMapRegion;
@property (nonatomic) BOOL hasMinZoom;
@property (nonatomic) float minZoom;
@property (nonatomic) BOOL hasMaxZoom;
@property (nonatomic) float maxZoom;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)boundsInfoForPlaceData:(id)a0;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
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

@end
