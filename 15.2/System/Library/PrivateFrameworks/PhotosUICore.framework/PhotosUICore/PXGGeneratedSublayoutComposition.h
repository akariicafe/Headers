@class PXLayoutGenerator;

@interface PXGGeneratedSublayoutComposition : PXGSublayoutComposition {
    PXLayoutGenerator *_layoutGenerator;
    struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *_layoutGeometries;
    long long _layoutGeometriesCapacity;
}

@property (readonly, nonatomic) PXLayoutGenerator *configuredLayoutGenerator;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void)invalidateLayout;
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)a0 usingSublayoutUpdateBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)referenceSizeDidChange;
- (void)updateEstimatedSublayoutGeometries;
- (void)dealloc;

@end
