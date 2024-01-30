@class IKColor, SKUIGridViewGradientDecorationBackgroundView;

@interface SKUIGridViewGradientDecorationView : UICollectionReusableView {
    IKColor *_kolor;
}

@property (readonly, nonatomic) SKUIGridViewGradientDecorationBackgroundView *backgroundView;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)a0;
- (void)_createGradient:(id)a0 withGradientType:(long long)a1;

@end
