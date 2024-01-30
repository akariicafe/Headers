@class UIVisualEffectView, UIActivityIndicatorView;

@interface VUIAppSpinnerView : UIView {
    UIVisualEffectView *_effectView;
    UIActivityIndicatorView *_spinner;
    BOOL _didLayout;
}

- (void)layoutSubviews;
- (void).cxx_destruct;

@end
