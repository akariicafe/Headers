@class _TVImageView, NSArray, VUIVideoAdvisoryViewLayout, UIView;

@interface VUIVideoAdvisoryView : UIView

@property (retain, nonatomic) VUIVideoAdvisoryViewLayout *layout;
@property (retain, nonatomic) _TVImageView *logoImageView;
@property (retain, nonatomic) UIView *dividerView;
@property (copy, nonatomic) NSArray *legendViews;

- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_margin;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)_isPortrait;
- (struct CGSize { double x0; double x1; })_logoSize;
- (id)initWithAdvisoryInfoDictionary:(id)a0;
- (void)show:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_configureSubviewsWithDictionary:(id)a0;
- (void)_showAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_hideAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (struct CGSize { double x0; double x1; })_dividerSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_logoMargin;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_dividerMargin;
- (void)_showWithAnimationWithCompletion:(id /* block */)a0;
- (void)_hideWithAnimationWithCompletion:(id /* block */)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_legendsMargin;
- (struct CGSize { double x0; double x1; })_legendSize;

@end
