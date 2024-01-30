@interface StocksUI.ForYouFeedMastheadView : UIView <TeaUI.GutterViewBoundsObserver> {
    void /* unknown type, empty encoding */ leftContentView;
    void /* unknown type, empty encoding */ rightContentView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ titleMaskLabel;
    void /* unknown type, empty encoding */ lineView;
    void /* unknown type, empty encoding */ sauceView;
    void /* unknown type, empty encoding */ premiumSealView;
}

- (void)gutterViewBoundsDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
