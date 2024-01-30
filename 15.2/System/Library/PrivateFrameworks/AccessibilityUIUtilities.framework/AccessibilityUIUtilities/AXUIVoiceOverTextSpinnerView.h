@class UILabel, UIActivityIndicatorView;

@interface AXUIVoiceOverTextSpinnerView : UIView <PSHeaderFooterView> {
    UILabel *_text;
    UIActivityIndicatorView *_spinner;
}

- (void)hideSpinner;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (id)initWithSpecifier:(id)a0;
- (void)showSpinner;

@end
