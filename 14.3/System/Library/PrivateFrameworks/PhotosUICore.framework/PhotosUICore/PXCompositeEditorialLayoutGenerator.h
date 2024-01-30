@class NSDictionary, PXCompositeEditorialLayoutMetrics;

@interface PXCompositeEditorialLayoutGenerator : PXLayoutGenerator {
    struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *_geometries;
    unsigned long long _geometriesCount;
    double *_layoutItemWeights;
    unsigned long long _layoutItemWeightsCount;
    struct CGSize { double width; double height; } _contentSize;
    BOOL _isPrepared;
    NSDictionary *_templatesByTileCount;
    long long _minTemplateItemCount;
    long long _maxTemplateItemCount;
    long long _minNumberOfColumns;
}

@property (copy, nonatomic) PXCompositeEditorialLayoutMetrics *metrics;

- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withKind:(long long)a2;
- (void)_computeTemplatesByTileCountIfNeeded;
- (void)_enumerateTemplatesWithBlock:(id /* block */)a0;
- (id)_minCostingTemplateAmongTemplates:(id)a0 forFittingInputItems:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 minCost:(out double *)a3;
- (void)_normalizeWeightsForInputItems:(id)a0;
- (id)_layoutInputsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_prepareLayoutItemWeightsBufferForCount:(unsigned long long)a0;
- (void)_prepareGeometriesBufferForCount:(unsigned long long)a0;
- (struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; })_geometryFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 index:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })estimatedSize;
- (id)initWithMetrics:(id)a0;
- (void)_prepareIfNeeded;
- (void)invalidate;

@end
