@class UIBarButtonItem, NSString, NSError, NSMutableArray, UIViewController;
@protocol TSSetupFlowItem;

@interface TSSIMSetupPublicApiInstallFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate> {
    BOOL _requireSetup;
    BOOL _skipGeneralInstallConsent;
    NSError *_planInstallError;
    NSMutableArray *_danglingPlanItems;
    NSString *_carrierName;
    NSString *_installName;
    UIViewController<TSSetupFlowItem> *_currentViewController;
    unsigned long long _userConsentType;
    UIBarButtonItem *_cancelButton;
    BOOL _confirmationCodeRequired;
    long long _signupConsentResponse;
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
- (id)initWithAppName:(id)a0 requireSetup:(BOOL)a1 skipGeneralInstallConsent:(BOOL)a2;
- (id)nextViewControllerFrom:(id)a0;
- (void)firstViewController:(id /* block */)a0;
- (void)planItemsUpdated:(id)a0 planListError:(id)a1;
- (void)_maybeShowPreinstallConsentOnViewController:(id)a0;

@end
