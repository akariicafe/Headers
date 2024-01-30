@interface PXStoryExportExtendedTraitCollection : PXStoryExtendedTraitCollection

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } overrideFullScreenReferenceRect;

- (void)performChanges:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullScreenReferenceRect;
- (id)initWithLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 displayScale:(double)a1 overrideFullScreenReferenceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)setOverrideFullScreenReferenceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
