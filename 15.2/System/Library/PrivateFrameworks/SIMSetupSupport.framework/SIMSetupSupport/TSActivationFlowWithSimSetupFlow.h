@class UIBarButtonItem, NSString, UIViewController, NSObject, NSError, NSMutableArray, CTDisplayPlanList;
@protocol OS_dispatch_group, TSSetupFlowItem;

@interface TSActivationFlowWithSimSetupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate, TSEntitlementJSHandlerDelegate> {
    BOOL _requireSetup;
    BOOL _confirmationCodeRequired;
    BOOL _isTransferCapable;
    BOOL _isActivationPolicyMismatch;
    BOOL _isDualeSIMCapabilityLoss;
    NSError *_planInstallError;
    NSMutableArray *_danglingPlanItems;
    NSMutableArray *_transferItems;
    CTDisplayPlanList *_pendingInstallPlans;
    NSString *_name;
    unsigned long long _userConsentType;
    UIBarButtonItem *_cancelButton;
    long long _signupConsentResponse;
    UIViewController<TSSetupFlowItem> *_currentViewController;
    NSObject<OS_dispatch_group> *_queryGroup;
}

@property BOOL isPreinstallingViewControllerActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)a0;
- (void)viewControllerDidComplete:(id)a0;
- (void)setDefaultNavigationItems:(id)a0;
- (long long)signupUserConsentResponse;
- (id)initRequireSetup:(BOOL)a0;
- (id)nextViewControllerFrom:(id)a0;
- (void)planItemsUpdated:(id)a0 planListError:(id)a1;
- (void)_userDidTapCancel;
- (id)_createViewController:(id)a0;
- (void)_requestPlansWithCompletion:(id /* block */)a0;
- (void)_maybeShowPreinstallConsentOnViewController:(id)a0 planItems:(id)a1;
- (void)_requestTransferPlanListWithCompletion:(id /* block */)a0;
- (void)_requestPendingInstallItemsWithCompletion:(id /* block */)a0;
- (void)didPurchasePlanSuccessfullyWithEid:(id)a0 imei:(id)a1 meid:(id)a2 iccid:(id)a3 alternateSDMP:(id)a4 state:(id)a5;
- (void)didTransferPlanSuccessfullyWithEid:(id)a0 imei:(id)a1 meid:(id)a2 iccid:(id)a3 srcIccid:(id)a4 alternateSDMP:(id)a5 state:(id)a6;
- (void)accountCancelled;
- (void)accountPendingRelease;

@end
