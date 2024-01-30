@class UIViewController, NSString, NSError, NSMutableArray, UIBarButtonItem;
@protocol TSSetupFlowItem;

@interface TSActivationFlowWithSimSetupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate, TSEntitlementJSHandlerDelegate> {
    BOOL _requireSetup;
    BOOL _confirmationCodeRequired;
    BOOL _isTransferCapable;
    NSError *_planInstallError;
    NSMutableArray *_danglingPlanItems;
    NSMutableArray *_transferItems;
    NSString *_name;
    unsigned long long _userConsentType;
    UIBarButtonItem *_cancelButton;
    long long _signupConsentResponse;
    UIViewController<TSSetupFlowItem> *_currentViewController;
}

@property BOOL isPreinstallingViewControllerActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)firstViewController;
- (void)viewControllerDidComplete:(id)a0;
- (void)setDefaultNavigationItems:(id)a0;
- (long long)signupUserConsentResponse;
- (id)initRequireSetup:(BOOL)a0;
- (id)nextViewControllerFrom:(id)a0;
- (void)popViewController:(id)a0;
- (void)firstViewController:(id /* block */)a0;
- (void)planItemsUpdated:(id)a0 planListError:(id)a1;
- (void)_requestTransferPlanList;
- (void)_requestPendingInstallItems;
- (void)_maybeShowPreinstallConsentOnViewController:(id)a0;
- (void)didPurchasePlanSuccessfullyWithEid:(id)a0 imei:(id)a1 meid:(id)a2 iccid:(id)a3 alternateSDMP:(id)a4;
- (void)didTransferPlanSuccessfullyWithEid:(id)a0 imei:(id)a1 meid:(id)a2 iccid:(id)a3 srcIccid:(id)a4 alternateSDMP:(id)a5 state:(id)a6;
- (void)accountCancelled;
- (void)accountPendingRelease;

@end
