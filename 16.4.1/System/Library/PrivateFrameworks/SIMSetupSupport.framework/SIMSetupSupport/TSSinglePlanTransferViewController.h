@class UIView, NSString, NSArray, SSOBBoldTrayButton, NSDictionary, CTRemotePlan, CTDisplayPlan, NSLayoutConstraint, SSSpinner;
@protocol TSSIMSetupFlowDelegate;

@interface TSSinglePlanTransferViewController : TSOBTableWelcomeController <SSSpinnerProtocol, UINavigationControllerDelegate, UITableViewDataSource, TSSetupFlowItem> {
    unsigned long long _planType;
    NSDictionary *_transferPlan;
    CTDisplayPlan *_pendingInstallPlan;
    NSString *_deviceName;
    NSString *_phoneNumber;
    CTRemotePlan *_planItem;
    BOOL _inBuddy;
    BOOL _confirmCellularPlanTransfer;
    BOOL _showOtherOptions;
    NSLayoutConstraint *_tableHeightAnchor;
    BOOL _speedBumper;
    BOOL _followDirections;
    SSOBBoldTrayButton *_continueButton;
    long long _backOption;
    NSString *_transferBackPhoneNumber;
}

@property BOOL requireDelayBluetoothConnection;
@property BOOL showSIMSetup;
@property BOOL isStandaloneProximityFlow;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property BOOL isOtherButtonTapped;
@property BOOL installingTransferPlan;
@property BOOL animating;
@property (retain) NSArray *cachedButtons;
@property (retain) SSSpinner *spinner;
@property (retain) UIView *spinnerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_showAlert:(id)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)_cancelButtonTapped;
- (void)_continueButtonTapped;
- (void)_cancelTransferringPlan;
- (double)_heightAnchorConstant;
- (void)_maybeDisplayConsent:(BOOL)a0 phoneNumber:(id)a1;
- (void)_otherButtonTapped;
- (void)_skipButtonTapped;
- (void)_startLocalPlanConversion;
- (void)_startPendingInstall:(id)a0;
- (void)_startPlanTransfer:(id)a0;
- (void)_transferConsentOnSource;
- (long long)backOption;
- (BOOL)customizeSpinner;
- (id)getLocalizedStringIf:(id)a0 then:(id)a1 otherwise:(id)a2;
- (id)getRemoteDeviceDisplayName:(id)a0;
- (id)initWithLocalPhysical:(id)a0 carrierName:(id)a1;
- (id)initWithPendingInstallPlan:(id)a0;
- (id)initWithTransferPlan:(id)a0 isPhysical:(BOOL)a1 isIneligible:(BOOL)a2 inBuddy:(BOOL)a3 confirmCellularPlanTransfer:(BOOL)a4 showOtherOptions:(BOOL)a5;
- (id)initWithTransferPlan:(id)a0 isPhysical:(BOOL)a1 isIneligible:(BOOL)a2 inBuddy:(BOOL)a3 confirmCellularPlanTransfer:(BOOL)a4 showOtherOptions:(BOOL)a5 isStandaloneProximityFlow:(BOOL)a6 transferBackPhoneNumber:(id)a7;

@end
