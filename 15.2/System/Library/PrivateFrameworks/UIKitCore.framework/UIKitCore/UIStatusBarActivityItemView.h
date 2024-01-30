@class UIActivityIndicatorView;

@interface UIStatusBarActivityItemView : UIStatusBarItemView {
    UIActivityIndicatorView *_activityIndicator;
    UIActivityIndicatorView *_accessibilityHUDIndicator;
    BOOL _slowActivity;
    BOOL _syncActivity;
}

- (void)setVisible:(BOOL)a0;
- (double)shadowPadding;
- (void)_stopAnimating;
- (void)_startAnimating;
- (long long)_activityIndicatorStyle;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (double)updateContentsAndWidth;
- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;

@end
