@class UIStackView, NSString, UIActivityIndicatorView, UILabel;

@interface PKMerchantTokenLoadingView : UIView {
    UIStackView *_stackView;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_label;
}

@property (copy, nonatomic) NSString *loadingText;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_setUpStackView;
- (void)_setUpActivityIndicator;
- (void)_setUpLabel;
- (void)_setUpSelf;
- (void)_setUpViews;

@end
