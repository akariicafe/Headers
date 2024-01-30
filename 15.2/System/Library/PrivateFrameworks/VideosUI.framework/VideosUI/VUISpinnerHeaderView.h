@class UILabel, PSSpecifier, UIActivityIndicatorView;

@interface VUISpinnerHeaderView : UIView <PSHeaderFooterView> {
    UIActivityIndicatorView *_spinner;
    UILabel *_text;
    PSSpecifier *_specifier;
}

- (void)layoutSubviews;
- (void)hideSpinner;
- (void).cxx_destruct;
- (void)hideText;
- (double)preferredHeightForWidth:(double)a0;
- (void)showText;
- (id)initWithSpecifier:(id)a0;
- (void)showSpinner;

@end
