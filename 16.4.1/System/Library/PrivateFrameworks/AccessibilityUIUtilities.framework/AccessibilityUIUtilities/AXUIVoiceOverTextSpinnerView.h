@class UILabel, UIActivityIndicatorView;

@interface AXUIVoiceOverTextSpinnerView : UIView <PSHeaderFooterView> {
    UILabel *_text;
    UIActivityIndicatorView *_spinner;
}

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)hideSpinner;
- (double)preferredHeightForWidth:(double)a0;
- (void)showSpinner;

@end
