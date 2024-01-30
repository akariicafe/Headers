@class UINavigationController, NSString, NSDictionary, NDOWarranty;
@protocol NDOAppleCareAMSUIViewPresenterProtocol;

@interface NDOAppleCareAMSUIViewController : AMSUIWebViewController <UINavigationBarDelegate, AMSUIWebDelegate>

@property (retain) NDOWarranty *warranty;
@property (retain) NSString *serialNumber;
@property (retain) NSString *source;
@property BOOL initialLoadCompleted;
@property BOOL isMultipleDevicePurchaseCall;
@property (retain) NSString *deeplinkParams;
@property (retain) NSDictionary *purchaseAPIBody;
@property (weak) id<NDOAppleCareAMSUIViewPresenterProtocol> presenter;
@property UINavigationController *navController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)webViewController:(id)a0 handleDelegateAction:(id)a1 completion:(id /* block */)a2;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)navigationBar:(id)a0 shouldPopItem:(id)a1;
- (void)cancelTapped:(id)a0;
- (id)_initWithWarranty:(id)a0 serialNumber:(id)a1 source:(id)a2 isMultiCall:(BOOL)a3 deeplinkParams:(id)a4 purchaseBody:(id)a5;
- (id)initWithWarranty:(id)a0 serialNumber:(id)a1 source:(id)a2 deeplinkParams:(id)a3;
- (id)initWithWarranty:(id)a0 serialNumber:(id)a1 source:(id)a2 purchaseBody:(id)a3;
- (void)loadAMSUIView;

@end
