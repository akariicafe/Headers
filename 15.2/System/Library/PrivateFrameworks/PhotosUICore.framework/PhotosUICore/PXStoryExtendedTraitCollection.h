@class NSShadow;

@interface PXStoryExtendedTraitCollection : PXExtendedTraitCollection {
    double _displayScale;
    struct CGSize { double width; double height; } _layoutReferenceSize;
}

@property (readonly, nonatomic) double viewportCornerRadius;
@property (readonly, nonatomic) NSShadow *viewportShadow;

- (void)setLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })layoutReferenceSize;
- (double)displayScale;
- (void)performChanges:(id /* block */)a0;
- (void)setDisplayScale:(double)a0;
- (long long)layoutOrientation;
- (void).cxx_destruct;
- (id)initWithLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 displayScale:(double)a1;

@end
