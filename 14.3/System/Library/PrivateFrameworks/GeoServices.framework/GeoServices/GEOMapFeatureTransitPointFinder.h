@class GEOTileLoader;

@interface GEOMapFeatureTransitPointFinder : GEOMapFeatureAccessFinder {
    GEOTileLoader *_tileLoader;
}

- (void).cxx_destruct;
- (id)findTransitAccessPointsForStation:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)_tileFinder;
- (id)initWithTileLoader:(id)a0;
- (id)findTransitPointWithID:(unsigned long long)a0 near:(struct { double x0; double x1; })a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findTransitPointsOfType:(unsigned long long)a0 near:(struct { double x0; double x1; })a1 radius:(double)a2 handler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)findParentOfTransitPoint:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findTransitPointsWithParent:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findGeometryForTransitPoint:(id)a0 completionHandler:(id /* block */)a1;
- (id)_transitPointForFeature:(struct GEOTransitNodeFeature { struct { struct { id x0; char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned long long x7; BOOL x8; unsigned long long x9; float x10; unsigned long long x11; id x12; int x13; } x0; struct { float x0; float x1; } x1; float x2; float x3; float x4; struct { float x0; float x1; } x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; short x10; short x11; unsigned char x12; float x13; float x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; } x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; struct *x2; struct GEOTransitNodeFeature *x3; unsigned long long *x4; unsigned long long *x5; char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned short x10; unsigned long long x11; unsigned int x12; unsigned int x13; unsigned int x14; float x15; struct _NSRange { unsigned long long x0; unsigned long long x1; } x16; BOOL x17; BOOL x18; BOOL x19; struct _NSRange { unsigned long long x0; unsigned long long x1; } x20; } *)a0;
- (id)_geometryTileFinder;

@end
