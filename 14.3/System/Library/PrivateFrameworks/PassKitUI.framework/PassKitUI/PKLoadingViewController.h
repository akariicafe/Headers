@class UILabel, UIActivityIndicatorView;
@protocol PKLoadingViewControllerDelegate;

@interface PKLoadingViewController : UIViewController {
    id<PKLoadingViewControllerDelegate> _delegate;
    UIActivityIndicatorView *_spinner;
    UILabel *_loadingLabel;
}

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_cancelButtonTapped:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)viewDidLoad;

@end
