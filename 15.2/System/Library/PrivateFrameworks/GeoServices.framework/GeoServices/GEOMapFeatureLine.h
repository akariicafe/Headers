@interface GEOMapFeatureLine : NSObject <NSCopying> {
    struct { double x0; double x1; } *_tempCoordinates2d;
    struct { double x0; double x1; double x2; } *_coordinates3d;
    unsigned long long _coordinateCount;
    double _length;
    BOOL _isFlipped;
}

@property (readonly, nonatomic) struct { double x0; double x1; } *coordinates;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } *coordinates3d;
@property (readonly, nonatomic) unsigned long long coordinateCount;
@property (readonly, nonatomic) double length;

- (double)closestDistance2DFromCoordinate:(struct { double x0; double x1; double x2; })a0;
- (id)coordinatesDescription;
- (id)_containingTile;
- (struct GeoCodecsVectorTilePoint { float x0; float x1; } *)_tilePointsForSection:(unsigned long long)a0 outCount:(out unsigned long long *)a1;
- (float *)_elevationsForSection:(unsigned long long)a0 outCount:(out unsigned long long *)a1;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
