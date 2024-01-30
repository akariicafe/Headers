@class NSMutableArray, NSString, UINavigationController, ACAccount, AMSURLSession, UIViewController;

@interface ICQUILegacyPurchaseFlowManager : NSObject <AMSURLProtocolDelegate, AMSPurchaseResponseProtocol, NSURLSessionDelegate, RUIObjectModelDelegate> {
    UIViewController *_presenter;
    id /* block */ _flowCompletion;
    AMSURLSession *_defaultAMSURLSession;
    NSMutableArray *_objectModels;
    UINavigationController *_navController;
    ACAccount *_amsAccount;
}

@property (nonatomic) unsigned long long requiredStorageThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (id)_presentationContext;
- (id)initWithPresenter:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleEngagementRequest:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (void)handleAuthenticateRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)handleDialogRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)handleEngagementRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)objectModel:(id)a0 pressedButton:(id)a1 attributes:(id)a2;
- (void)objectModel:(id)a0 pressedLink:(id)a1 httpMethod:(id)a2;
- (void)objectModelPressedBack:(id)a0;
- (id)parentViewControllerForObjectModel:(id)a0;
- (void)_popObjectModelAnimated:(BOOL)a0;
- (BOOL)_loadNativeURL:(id)a0;
- (void)makeBuyRequest:(id)a0;
- (void)_beginRUIFlowWithAMSURLResult:(id)a0;
- (void)_beginURLOperationWithURLRequest:(id)a0;
- (void)_clearRetailFollowUpItem;
- (void)_didCompletePurchaseFlowWithStatusCode:(long long)a0;
- (void)_dismissPurchaseFlow;
- (void)_fetchURLRequestWithURL:(id)a0 completion:(id /* block */)a1;
- (void)_handleAuthenticateRequest:(id)a0 completion:(id /* block */)a1;
- (void)_handleDialogRequest:(id)a0 completion:(id /* block */)a1;
- (void)_handleEngagementRequest:(id)a0 completion:(id /* block */)a1;
- (void)_updatePage:(id)a0;
- (void)beginFlowWithCompletion:(id /* block */)a0;

@end
