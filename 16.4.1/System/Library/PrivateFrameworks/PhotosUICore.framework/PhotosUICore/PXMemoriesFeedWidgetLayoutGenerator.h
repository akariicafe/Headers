@class PXMemoriesFeedWidgetLayoutMetrics;

@interface PXMemoriesFeedWidgetLayoutGenerator : PXMemoriesFeedLayoutGenerator {
    struct _LayoutContext { struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets; struct CGSize { double width; double height; } itemSize; struct CGSize { double width; double height; } interitemSpacing; struct CGSize { double width; double height; } size; unsigned long long numberOfColumns; unsigned long long numberOfRows; long long layoutAxis; } _context;
}

@property (copy, nonatomic) PXMemoriesFeedWidgetLayoutMetrics *metrics;

- (id)initWithMetrics:(id)a0;
- (struct CGSize { double x0; double x1; })size;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withKind:(long long)a2;
- (struct CGSize { double x0; double x1; })estimatedSize;
- (id)geometryKinds;

@end
