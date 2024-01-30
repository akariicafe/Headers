@interface AppleMediaServicesUIDynamic.DeferredPageViewController : AMSUICommonViewController <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ child;
    void /* unknown type, empty encoding */ destination;
    void /* unknown type, empty encoding */ objectGraph;
}

- (void)traitCollectionDidChange:(id)a0;
- (void)backButtonAction;
- (void)closeButtonAction;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
