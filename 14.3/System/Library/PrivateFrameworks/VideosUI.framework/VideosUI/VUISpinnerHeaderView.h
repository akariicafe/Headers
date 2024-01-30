@class UILabel, PSSpecifier, UIActivityIndicatorView;

@interface VUISpinnerHeaderView : UIView <PSHeaderFooterView> {
    UIActivityIndicatorView *_spinner;
    UILabel *_text;
    PSSpecifier *_specifier;
}

- (id)initWithSpecifier:(id)a0;
- (void)showSpinner;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (void)layoutSubviews;
- (void)hideText;
- (void)hideSpinner;
- (void)showText;

@end
