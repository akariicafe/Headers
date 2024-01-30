@class UIActivityIndicatorView;

@interface BFFBarButtonSpinnerView : UIBarButtonItem {
    UIActivityIndicatorView *_spinner;
}

- (id)init;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;

@end
