@class UIActivityIndicatorView, NSLayoutConstraint, PSSpecifier;

@interface STSpinnerFooterView : UITableViewHeaderFooterView <PSHeaderFooterView>

@property (readonly, weak) PSSpecifier *specifier;
@property (readonly) UIActivityIndicatorView *spinnerView;
@property (retain) NSLayoutConstraint *spinnerViewVerticalPositionConstraint;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (id)initWithSpecifier:(id)a0;
- (void)startAnimatingSpinner;
- (void)stopAnimatingSpinner;
- (void)reloadFromSpecifier;

@end
