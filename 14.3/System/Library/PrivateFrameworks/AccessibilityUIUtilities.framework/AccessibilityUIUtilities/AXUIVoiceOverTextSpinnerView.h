@class UILabel, UIActivityIndicatorView;

@interface AXUIVoiceOverTextSpinnerView : UIView <PSHeaderFooterView> {
    UILabel *_text;
    UIActivityIndicatorView *_spinner;
}

- (id)initWithSpecifier:(id)a0;
- (void)showSpinner;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (void)hideSpinner;

@end
