@interface _SBDisplayItemFixedAspectGrid : _SBDisplayItemFlexibleGrid {
    struct CGSize { double width; double height; } _fixedSize;
    BOOL _maximizeSupported;
    BOOL _supportsOrthogonalSizes;
}

- (void)_buildFixedGridWithScreenScale:(double)a0;
- (BOOL)_allowFullScreen;
- (void)_buildGridWithScreenScale:(double)a0;
- (id)allHeights;
- (id)allWidths;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fixedSize:(struct CGSize { double x0; double x1; })a1 screenScale:(double)a2 supportsOrthogonalSizes:(BOOL)a3 chamoisLayoutAttributes:(id)a4;
- (struct CGSize { double x0; double x1; })nearestGridSizeForSize:(struct CGSize { double x0; double x1; })a0 countOnStage:(unsigned long long)a1;

@end
