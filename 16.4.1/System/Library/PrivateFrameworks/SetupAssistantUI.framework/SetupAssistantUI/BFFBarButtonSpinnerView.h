@class UIActivityIndicatorView;

@interface BFFBarButtonSpinnerView : UIBarButtonItem {
    UIActivityIndicatorView *_spinner;
}

- (void)startAnimating;
- (void)stopAnimating;
- (id)init;
- (void).cxx_destruct;

@end
