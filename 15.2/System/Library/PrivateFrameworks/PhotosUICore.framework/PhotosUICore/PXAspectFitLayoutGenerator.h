@class PXAspectFitLayoutMetrics;

@interface PXAspectFitLayoutGenerator : PXLayoutGenerator {
    struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *_geometries;
    unsigned long long _geometriesCount;
    long long _lastGeometryIndex;
    struct CGSize { double width; double height; } _contentSize;
    double _currentRowUnmodifiedHeight;
    double _currentRowFinalHeight;
}

@property (copy, nonatomic) PXAspectFitLayoutMetrics *metrics;

- (void)getGeometries:(struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withKind:(long long)a2;
- (struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })estimatedSize;
- (void)invalidate;
- (void)dealloc;
- (id)initWithMetrics:(id)a0;
- (void)_prepareGeometriesForCount:(unsigned long long)a0;
- (struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; })_lastGeometry;
- (void)_computeGeometriesIfNeeded;
- (void)_fillRowFromIndex:(long long *)a0 withCount:(long long)a1;
- (double)_rowHeightForItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; })_geometryForItemAtIndex:(unsigned long long)a0 atPosition:(struct CGPoint { double x0; double x1; })a1 withHorizontalGap:(double)a2;

@end
