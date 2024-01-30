@class UINavigationItem, UILabel, UIActivityIndicatorView;

@interface CNFRegNavigationBarTitleView : UIView {
    UILabel *_titleLabel;
    UIActivityIndicatorView *_activityIndicator;
}

@property (nonatomic) UINavigationItem *item;

- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_currentTextShadowColorForBarStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })_currentTextShadowOffsetForBarStyle:(long long)a0;
- (void).cxx_destruct;
- (void)_updateTitleLabel;
- (id)_defaultFont;
- (BOOL)_useSilverLookForBarStyle:(long long)a0;
- (void)dealloc;
- (id)initWithNavigationItem:(id)a0;
- (id)_currentTextColorForBarStyle:(long long)a0;
- (id)_titleTextColorForBarStyle:(long long)a0;

@end
