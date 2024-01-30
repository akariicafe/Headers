@class UINavigationItem, UILabel, UIActivityIndicatorView;

@interface CNFRegNavigationBarTitleView : UIView {
    UILabel *_titleLabel;
    UIActivityIndicatorView *_activityIndicator;
}

@property (nonatomic) UINavigationItem *item;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_useSilverLookForBarStyle:(long long)a0;
- (id)initWithNavigationItem:(id)a0;
- (id)_defaultFont;
- (id)_currentTextColorForBarStyle:(long long)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTitleLabel;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_currentTextShadowColorForBarStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })_currentTextShadowOffsetForBarStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_titleTextColorForBarStyle:(long long)a0;

@end
