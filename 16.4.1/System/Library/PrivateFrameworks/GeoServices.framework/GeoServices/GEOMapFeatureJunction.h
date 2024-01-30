@class GEOVectorTile;

@interface GEOMapFeatureJunction : NSObject <NSCopying> {
    struct { double latitude; double longitude; } _coordinate;
    struct { float x; float y; } _tilePoint;
    GEOVectorTile *_tile;
    struct GeoCodecsConnectivityJunction { unsigned int x0; unsigned int x1; struct GeoCodecsPointFeature *x2; unsigned long long x3; unsigned long long x4; } *_connectivityJunction;
}

@property (readonly, nonatomic) GEOVectorTile *tile;
@property (readonly, nonatomic) struct { float x0; float x1; } tilePoint;
@property (readonly, nonatomic) unsigned long long junctionIndex;
@property (readonly, nonatomic) unsigned long long primaryID;
@property (readonly, nonatomic) unsigned long long secondaryID;
@property (readonly, nonatomic) struct GeoCodecsConnectivityJunction { unsigned int x0; unsigned int x1; struct GeoCodecsPointFeature *x2; unsigned long long x3; unsigned long long x4; } *connectivityJunction;
@property (readonly, nonatomic) BOOL isOnTileBorder;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;

+ (struct GeoCodecsConnectivityJunction { unsigned int x0; unsigned int x1; struct GeoCodecsPointFeature *x2; unsigned long long x3; unsigned long long x4; } *)connectivityJunctionForRoadFeature:(id)a0 startJunction:(BOOL)a1 outError:(out id *)a2;
+ (BOOL)isPointOnTileBorder:(struct GeoCodecsVectorTilePoint { float x0; float x1; } *)a0;
+ (id)junctionForRoadFeature:(id)a0 startJunction:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
