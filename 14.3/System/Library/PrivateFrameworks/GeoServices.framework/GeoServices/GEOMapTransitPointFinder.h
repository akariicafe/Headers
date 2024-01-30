@class GEOMapTileFinder, GEOMapAccess;

@interface GEOMapTransitPointFinder : GEOMapRequest {
    GEOMapTileFinder *_tileFinder;
    struct { double x; double y; } _centerPoint;
    double _mapRadius;
    unsigned long long _pointID;
    unsigned long long _parentID;
}

@property (readonly, nonatomic) GEOMapAccess *map;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithMap:(id)a0 center:(struct { double x0; double x1; })a1 radius:(double)a2;
- (void)_validatePoint:(struct { struct { id x0; char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned long long x7; BOOL x8; unsigned long long x9; float x10; unsigned long long x11; id x12; int x13; } x0; struct { float x0; float x1; } x1; float x2; float x3; float x4; struct { float x0; float x1; } x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; short x10; short x11; unsigned char x12; float x13; float x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; } *)a0 rect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a1 localSearch:(struct Box<float, 2> { struct Matrix<float, 2, 1> { float x0[2]; } x0; struct Matrix<float, 2, 1> { float x0[2]; } x1; })a2 validPointHandler:(id /* block */)a3;
- (id)initWithMap:(id)a0 approxLocation:(struct { double x0; double x1; })a1 pointID:(unsigned long long)a2;
- (id)initWithMap:(id)a0 approxLocation:(struct { double x0; double x1; })a1 parentID:(unsigned long long)a2;
- (void)findTransitPointsOfType:(unsigned long long)a0 nodeHandler:(id /* block */)a1 accessPointHandler:(id /* block */)a2;

@end
