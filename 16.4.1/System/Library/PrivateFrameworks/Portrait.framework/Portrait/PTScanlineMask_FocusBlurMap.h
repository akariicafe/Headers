@class NSIndexSet, PTFocusBlurMap;

@interface PTScanlineMask_FocusBlurMap : PTScanlineMask

@property struct CGSize { double width; double height; } normalizedTileSize;
@property struct CGSize { double width; double height; } placementTileSize;
@property (readonly) PTFocusBlurMap *map;
@property (readonly) NSIndexSet *region;

- (void)setPlacement:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_recalculatePlacementTileSize;
- (id)initWithFocusBlurMap:(id)a0 region:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })pixelRangeForTileRangeX:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })pixelRangeForTileRangeY:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)scanlineIter;

@end
