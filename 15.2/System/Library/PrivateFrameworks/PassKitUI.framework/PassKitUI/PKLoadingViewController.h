@class UILabel, UIActivityIndicatorView;
@protocol PKLoadingViewControllerDelegate;

@interface PKLoadingViewController : UIViewController {
    id<PKLoadingViewControllerDelegate> _delegate;
    UIActivityIndicatorView *_spinner;
    UILabel *_loadingLabel;
}

- (id)initWithDelegate:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)_cancelButtonTapped:(id)a0;

@end
