@class UILabel, UIActivityIndicatorView;

@interface AMSUILoadingView : AMSUICommonView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UILabel *label;

- (void)layoutSubviews;
- (void)stopAnimating;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)startAnimating;
- (void)setLoadingText:(id)a0;

@end
