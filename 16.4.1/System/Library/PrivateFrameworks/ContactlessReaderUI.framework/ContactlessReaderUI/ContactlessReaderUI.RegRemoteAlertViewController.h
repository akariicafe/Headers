@interface ContactlessReaderUI.RegRemoteAlertViewController : SBUIRemoteAlertServiceViewController {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ regViewController;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ suppressible;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;

@end
