@class PXExtendedTraitCollection;

@interface PUSearchZeroKeywordGadgetSpec : PXGadgetSpec {
    struct CGSize { double width; double height; } _layoutReferenceSize;
    PXExtendedTraitCollection *_traitCollection;
}

- (id)initWithTraitCollection:(id)a0 scrollAxis:(long long)a1;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (id)_contentInsetsInterpolator;

@end
