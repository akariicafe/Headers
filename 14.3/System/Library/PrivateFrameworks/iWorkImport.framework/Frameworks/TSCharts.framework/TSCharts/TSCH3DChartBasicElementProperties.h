@class TSCH3DChartModelEnumerator;

@interface TSCH3DChartBasicElementProperties : TSCH3DChartMutableElementProperties {
    TSCH3DChartModelEnumerator *mEnumerator;
}

@property (readonly, nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } size;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void)resetWithEnumerator:(id)a0 layoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; })a1;
- (void)createResources;
- (id)texcoordsForSeries:(id)a0 index:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;
- (id)geometryForSeries:(id)a0 index:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;
- (id)boundsGeometryForSeries:(id)a0 index:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;
- (id)normalsForSeries:(id)a0 index:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;

@end
