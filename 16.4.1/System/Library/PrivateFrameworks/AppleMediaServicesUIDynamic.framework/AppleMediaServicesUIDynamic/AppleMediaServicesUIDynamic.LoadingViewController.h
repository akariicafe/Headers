@class UINavigationItem;

@interface AppleMediaServicesUIDynamic.LoadingViewController : AMSUICommonViewController {
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ style;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (id)init;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;

@end
