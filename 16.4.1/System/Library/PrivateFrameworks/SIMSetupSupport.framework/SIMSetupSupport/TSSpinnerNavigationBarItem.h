@class UIActivityIndicatorView;

@interface TSSpinnerNavigationBarItem : UIBarButtonItem

@property (retain) UIActivityIndicatorView *activityIndicator;

- (void)startAnimating;
- (void)stopAnimating;
- (id)init;
- (void).cxx_destruct;

@end
