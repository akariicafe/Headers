@class UIActivityIndicatorView;

@interface RUIBarButtonSpinnerView : UIBarButtonItem {
    UIActivityIndicatorView *_spinner;
}

- (void)startAnimating;
- (void)stopAnimating;
- (void)setTintColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithActivityIndicatorStyle:(long long)a0;

@end
