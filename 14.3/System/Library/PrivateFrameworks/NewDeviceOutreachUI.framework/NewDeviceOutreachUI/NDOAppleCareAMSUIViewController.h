@class NDOWarranty, NSString, UINavigationController;
@protocol NDOAppleCareAMSUIViewPresenterProtocol;

@interface NDOAppleCareAMSUIViewController : AMSUIWebViewController <UINavigationBarDelegate, AMSUIWebDelegate>

@property (retain) NDOWarranty *warranty;
@property (retain) NSString *serialNumber;
@property BOOL initialLoadCompleted;
@property (weak) id<NDOAppleCareAMSUIViewPresenterProtocol> presenter;
@property UINavigationController *navController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)navigationBar:(id)a0 shouldPopItem:(id)a1;
- (void)cancelTapped:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (BOOL)webViewController:(id)a0 handleDelegateAction:(id)a1 completion:(id /* block */)a2;
- (id)initWithWarranty:(id)a0 serialNumber:(id)a1;
- (void)loadAMSUIView;

@end
