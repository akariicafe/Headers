@class ADHomeButtonHandler, NSString, SKStoreProductViewController;

@interface ADiTunesActionViewController : ADActionViewController <SKStoreProductViewControllerDelegate>

@property (retain, nonatomic) SKStoreProductViewController *storeProductViewController;
@property (nonatomic) int defaultResult;
@property (retain, nonatomic) ADHomeButtonHandler *homeButtonHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)productViewController:(id)a0 didFinishWithResult:(long long)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dismiss;
- (void)viewDidLoad;
- (void)clientApplicationDidEnterBackground;
- (void)didSetAdSpace;

@end
