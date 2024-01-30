@class TSCH3DChartModelEnumerator;

@interface TSCH3DChartBasicElementProperties : TSCH3DChartMutableElementProperties {
    TSCH3DChartModelEnumerator *_enumerator;
}

@property (readonly, nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } size;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)createResources;
- (id)boundsGeometryForSeries:(id)a0 index:(const void *)a1;
- (id)geometryForSeries:(id)a0 index:(const void *)a1;
- (id)normalsForSeries:(id)a0 index:(const void *)a1;
- (void)resetWithEnumerator:(id)a0 layoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a1;
- (id)texcoordsForSeries:(id)a0 index:(const void *)a1;

@end
