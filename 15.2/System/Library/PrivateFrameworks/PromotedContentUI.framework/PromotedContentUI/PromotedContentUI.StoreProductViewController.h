@interface PromotedContentUI.StoreProductViewController : UIViewController <SKStoreProductViewControllerDelegatePrivate> {
    void /* unknown type, empty encoding */ actionResult;
    void /* unknown type, empty encoding */ actionDelegate;
    void /* unknown type, empty encoding */ adamIdentifier;
    void /* unknown type, empty encoding */ notificationObserver;
    void /* unknown type, empty encoding */ storeProductViewController;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void)productViewController:(id)a0 didFinishWithResult:(long long)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
