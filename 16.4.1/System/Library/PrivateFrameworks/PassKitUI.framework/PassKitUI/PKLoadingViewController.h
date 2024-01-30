@class UILabel, UIActivityIndicatorView;
@protocol PKLoadingViewControllerDelegate;

@interface PKLoadingViewController : UIViewController {
    id<PKLoadingViewControllerDelegate> _delegate;
    UIActivityIndicatorView *_spinner;
    UILabel *_loadingLabel;
}

- (void)_cancelButtonTapped:(id)a0;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;

@end
