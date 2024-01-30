@class UIActivityIndicatorView;

@interface TSSpinnerNavigationBarItem : UIBarButtonItem

@property (retain) UIActivityIndicatorView *activityIndicator;

- (id)init;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;

@end
