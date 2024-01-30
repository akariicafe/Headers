@class UIActivityIndicatorView, _TVImageView, UIView;

@interface _TVLoadingView : UIView

@property (weak, nonatomic) UIView *loadingTitleLabel;
@property (readonly, weak, nonatomic) UIView *spinnerContainer;
@property (readonly, weak, nonatomic) UIView *labelContainer;
@property (readonly, weak, nonatomic) _TVImageView *backgroundImageView;
@property (readonly, weak, nonatomic) UIActivityIndicatorView *spinnerView;
@property (nonatomic) BOOL shouldShowSpinner;

- (void)layoutSubviews;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_showSpinner;

@end
