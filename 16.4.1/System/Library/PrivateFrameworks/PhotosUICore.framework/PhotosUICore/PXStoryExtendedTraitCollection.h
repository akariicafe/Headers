@class NSShadow;

@interface PXStoryExtendedTraitCollection : PXExtendedTraitCollection {
    double _displayScale;
    struct CGSize { double width; double height; } _layoutReferenceSize;
}

@property (readonly, nonatomic) double viewportCornerRadius;
@property (readonly, nonatomic) NSShadow *viewportShadow;
@property (readonly, nonatomic) double bottomTitleContentOffset;

- (void)setLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (void)performChanges:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })layoutReferenceSize;
- (void)setDisplayScale:(double)a0;
- (id)initWithLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 displayScale:(double)a1;
- (id)initWithLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (long long)layoutOrientation;
- (double)displayScale;
- (void).cxx_destruct;

@end
