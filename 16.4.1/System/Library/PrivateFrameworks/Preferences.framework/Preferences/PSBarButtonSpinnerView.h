@class UIActivityIndicatorView;

@interface PSBarButtonSpinnerView : UIBarButtonItem {
    UIActivityIndicatorView *_spinner;
}

- (void)startAnimating;
- (void)stopAnimating;
- (id)init;
- (void).cxx_destruct;

@end
