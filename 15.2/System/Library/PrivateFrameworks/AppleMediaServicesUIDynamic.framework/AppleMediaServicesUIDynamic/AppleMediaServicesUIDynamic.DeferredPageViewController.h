@interface AppleMediaServicesUIDynamic.DeferredPageViewController : AMSUICommonViewController <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ child;
    void /* unknown type, empty encoding */ destination;
    void /* unknown type, empty encoding */ objectGraph;
}

- (void)traitCollectionDidChange:(id)a0;
- (void)backButtonAction;
- (void)closeButtonAction;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
