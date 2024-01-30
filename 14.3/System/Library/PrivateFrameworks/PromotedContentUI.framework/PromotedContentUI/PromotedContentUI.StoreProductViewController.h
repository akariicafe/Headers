@interface PromotedContentUI.StoreProductViewController : UIViewController <SKStoreProductViewControllerDelegatePrivate> {
    void /* unknown type, empty encoding */ actionResult;
    void /* unknown type, empty encoding */ actionDelegate;
    void /* unknown type, empty encoding */ adamIdentifier;
    void /* unknown type, empty encoding */ notificationObserver;
    void /* unknown type, empty encoding */ storeProductViewController;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void)productViewController:(id)a0 didFinishWithResult:(long long)a1;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
