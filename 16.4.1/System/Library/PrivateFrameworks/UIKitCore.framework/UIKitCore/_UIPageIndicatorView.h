@interface _UIPageIndicatorView : UIImageView {
    struct CGSize { double width; double height; } _cachedSize;
}

@property (nonatomic) long long page;

- (BOOL)isInvalidated;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (id)debugDescription;
- (void)updateSymbolConfigurationForTraitCollection;
- (void)traitCollectionDidChange:(id)a0;
- (void)invalidate;
- (struct CGSize { double x0; double x1; })sizeForImage:(id)a0 withTraitCollection:(id)a1;
- (void)prepare;

@end
