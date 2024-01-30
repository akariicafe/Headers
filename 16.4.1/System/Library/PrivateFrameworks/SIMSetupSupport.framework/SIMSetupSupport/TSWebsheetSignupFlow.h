@class NSString, CTPlan, NSDictionary, CoreTelephonyClient;

@interface TSWebsheetSignupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSEntitlementJSHandlerDelegate, UINavigationControllerDelegate> {
    CoreTelephonyClient *_client;
    CTPlan *_plan;
    NSString *_iccid;
    NSString *_websheetURL;
    NSDictionary *_postdata;
    unsigned long long _requestType;
    BOOL _skipIntroPaneForWebsheetFlow;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIccid:(id)a0;
- (id)firstViewController;
- (id)initWithPlan:(id)a0;
- (void)firstViewController:(id /* block */)a0;
- (void)appForegrounded;
- (void)appBackgrounded;
- (void)_createURLRequest:(id /* block */)a0;
- (void)_showFailureAlert:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)_translateRequestType:(id)a0;
- (void)accountCancelled;
- (void)accountPendingRelease;
- (void)didPurchasePlanSuccessfullyWithCarrier:(id)a0 mnc:(id)a1 gid1:(id)a2 gid2:(id)a3 state:(id)a4;
- (void)didPurchasePlanSuccessfullyWithEid:(id)a0 imei:(id)a1 meid:(id)a2 iccid:(id)a3 alternateSDMP:(id)a4 state:(id)a5;
- (void)didTransferPlanSuccessfullyWithEid:(id)a0 imei:(id)a1 meid:(id)a2 iccid:(id)a3 srcIccid:(id)a4 alternateSDMP:(id)a5 state:(id)a6;
- (id)getWebsheetViewController;
- (id)initWithRequestType:(unsigned long long)a0 skipIntroPaneForWebsheetFlow:(BOOL)a1 websheetURL:(id)a2 postdata:(id)a3;
- (id)nextViewControllerFrom:(id)a0;
- (void)setDefaultNavigationItems:(id)a0;
- (void)viewControllerDidComplete:(id)a0;

@end
