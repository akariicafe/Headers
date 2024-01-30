@interface _UIPageIndicatorView : UIImageView

@property (nonatomic) long long page;

- (id)initWithImage:(id)a0;
- (void)prepare;
- (BOOL)isInvalidated;
- (id)initWithCoder:(id)a0;
- (void)updateSymbolConfigurationForTraitCollection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForImage:(id)a0 withTraitCollection:(id)a1;
- (id)debugDescription;
- (void)setImage:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)invalidate;

@end
