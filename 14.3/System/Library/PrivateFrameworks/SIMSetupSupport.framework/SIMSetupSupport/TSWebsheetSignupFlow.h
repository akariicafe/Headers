@class NSString, NSDictionary, UIViewController;
@protocol TSSetupFlowItem;

@interface TSWebsheetSignupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSEntitlementJSHandlerDelegate, UINavigationControllerDelegate> {
    NSString *_websheetURL;
    NSDictionary *_postdata;
    unsigned long long _requestType;
    UIViewController<TSSetupFlowItem> *_currentViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)firstViewController;
- (void)viewControllerDidComplete:(id)a0;
- (void)_showFailureAlert:(id)a0 completion:(id /* block */)a1;
- (void)setDefaultNavigationItems:(id)a0;
- (id)initWithRequestType:(unsigned long long)a0 websheetURL:(id)a1 postdata:(id)a2;
- (id)nextViewControllerFrom:(id)a0;
- (void)firstViewController:(id /* block */)a0;
- (void)didPurchasePlanSuccessfullyWithEid:(id)a0 imei:(id)a1 meid:(id)a2 iccid:(id)a3 alternateSDMP:(id)a4;
- (void)didTransferPlanSuccessfullyWithEid:(id)a0 imei:(id)a1 meid:(id)a2 iccid:(id)a3 srcIccid:(id)a4 alternateSDMP:(id)a5 state:(id)a6;
- (void)accountCancelled;
- (void)accountPendingRelease;
- (void)_createURLRequest:(id /* block */)a0;

@end
