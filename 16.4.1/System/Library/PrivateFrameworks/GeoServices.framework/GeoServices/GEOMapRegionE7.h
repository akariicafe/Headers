@class GEOMapRegion, NSMutableArray, PBUnknownFields;

@interface GEOMapRegionE7 : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_vertexE7s;
    int _eastLngE7;
    int _northLatE7;
    int _southLatE7;
    int _westLngE7;
    struct { unsigned char has_eastLngE7 : 1; unsigned char has_northLatE7 : 1; unsigned char has_southLatE7 : 1; unsigned char has_westLngE7 : 1; } _flags;
}

@property (readonly, nonatomic) int centerLatE7;
@property (readonly, nonatomic) int centerLngE7;
@property (readonly, nonatomic) int spanLatE7;
@property (readonly, nonatomic) int spanLngE7;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) BOOL hasRectangleVertices;
@property (nonatomic) BOOL hasSouthLatE7;
@property (nonatomic) int southLatE7;
@property (nonatomic) BOOL hasWestLngE7;
@property (nonatomic) int westLngE7;
@property (nonatomic) BOOL hasNorthLatE7;
@property (nonatomic) int northLatE7;
@property (nonatomic) BOOL hasEastLngE7;
@property (nonatomic) int eastLngE7;
@property (retain, nonatomic) NSMutableArray *vertexE7s;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (id)_geo_mapRegionForGEOCoordinateRegion:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
+ (Class)vertexE7Type;

- (void)setMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithCoordinateRegion:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)initWithMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithMapRegion:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (void)addVertexE7:(id)a0;
- (void)clearVertexE7s;
- (id)coordinatesE7;
- (id)initWithRadialPlace:(id)a0;
- (id)vertexE7AtIndex:(unsigned long long)a0;
- (unsigned long long)vertexE7sCount;

@end
