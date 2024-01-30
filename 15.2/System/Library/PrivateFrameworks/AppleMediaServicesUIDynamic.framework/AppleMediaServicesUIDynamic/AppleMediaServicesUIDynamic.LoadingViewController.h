@class UINavigationItem;

@interface AppleMediaServicesUIDynamic.LoadingViewController : AMSUICommonViewController {
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ dimmingView;
    void /* unknown type, empty encoding */ style;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
