@class UINavigationItem;

@interface AppleMediaServicesUIDynamic.LoadingViewController : AMSUICommonViewController {
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ dimmingView;
    void /* unknown type, empty encoding */ style;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
