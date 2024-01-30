@class GEOMapRegion;

@interface GEOLogMsgStateMapView : PBCodable <NSCopying> {
    GEOMapRegion *_mapRegion;
    double _zoomLevel;
    int _mapType;
    struct { unsigned char has_zoomLevel : 1; unsigned char has_mapType : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) BOOL hasZoomLevel;
@property (nonatomic) double zoomLevel;
@property (nonatomic) BOOL hasMapType;
@property (nonatomic) int mapType;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)mapTypeAsString:(int)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (int)StringAsMapType:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
