@interface GameCenterUI.AppStoreContentPlatterView : UIView {
    void /* unknown type, empty encoding */ titleView;
    void /* unknown type, empty encoding */ materialBackgroundView;
    void /* unknown type, empty encoding */ contentContainer;
    void /* unknown type, empty encoding */ titleActionBlock;
    void /* unknown type, empty encoding */ loadingIndicator;
    void /* unknown type, empty encoding */ errorView;
    void /* unknown type, empty encoding */ isLoading;
    void /* unknown type, empty encoding */ orientation;
}

- (unsigned long long)_edgesPropagatingSafeAreaInsetsToSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)addSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
