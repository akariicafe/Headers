@interface GameCenterUI.InsetViewControllerContentView : GameCenterUI.BackgroundView {
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ insetLayoutMarginsFromTopSafeAreaInset;
    void /* unknown type, empty encoding */ insetLayoutMarginsFromSafeAreaInset;
}

@property (nonatomic) unsigned long long edgesInsettingLayoutMarginsFromSafeArea;

- (unsigned long long)_edgesPropagatingSafeAreaInsetsToSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
