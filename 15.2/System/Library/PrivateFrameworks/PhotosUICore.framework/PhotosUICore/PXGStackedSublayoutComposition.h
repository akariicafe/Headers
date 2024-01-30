@interface PXGStackedSublayoutComposition : PXGSublayoutComposition

@property (nonatomic) long long axis;
@property (nonatomic) double interlayoutSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)a0 usingSublayoutUpdateBlock:(id /* block */)a1;
- (id)init;
- (void)referenceSizeDidChange;
- (void)updateEstimatedSublayoutGeometries;

@end
