@class ICQUpgradeFlowManager, NSString, NSDictionary, RUIObjectModel, UIViewController, RUIServerHookResponse;
@protocol ICQServerHookDelegate, RUIServerHookDelegate;

@interface ICQBundlesHook : NSObject <AMSUIDynamicViewControllerDelegate, ICQUIServerHook> {
    ICQUpgradeFlowManager<ICQServerHookDelegate> *_flowManager;
    NSDictionary *_clientInfo;
    long long _statusCode;
    id /* block */ _completionHandler;
    long long _amsErrorCode;
    long long _amsAction;
    NSString *_buyParamsStr;
    UIViewController *_presentingViewController;
}

@property (retain, nonatomic) NSString *buffervar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) id<RUIServerHookDelegate> delegate;

- (void).cxx_destruct;
- (void)setAdditionalParameters:(id)a0;
- (id)dynamicViewController:(id)a0 contentViewControllerWithDictionary:(id)a1;
- (void)dynamicViewController:(id)a0 didFinishWithPurchaseResult:(id)a1 error:(id)a2;
- (BOOL)dynamicViewControllerShouldDismiss:(id)a0;
- (void)processElement:(id)a0 attributes:(id)a1 objectModel:(id)a2 completion:(id /* block */)a3;
- (void)processObjectModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldMatchElement:(id)a0;
- (BOOL)shouldMatchModel:(id)a0;
- (id)continuationResponseBody;
- (id)initWithFlowManager:(id)a0;
- (void)launchBundleOffer;

@end
