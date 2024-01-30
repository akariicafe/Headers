@class CTRemotePlan, NSString, NSDictionary, CTDisplayPlan;
@protocol TSSIMSetupFlowDelegate;

@interface TSSinglePlanTransferViewController : TSOBWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem> {
    unsigned long long _planType;
    NSDictionary *_transferPlan;
    CTDisplayPlan *_pendingInstallPlan;
    NSString *_deviceName;
    NSString *_phoneNumber;
    CTRemotePlan *_planItem;
}

@property BOOL showSIMSetup;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property BOOL isScanButtonTapped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_showAlert:(id)a0;
- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)_continueButtonTapped;
- (void)_scanButtonTapped;
- (void)_startPendingInstall:(id)a0;
- (id)initWithTransferPlan:(id)a0 isPhysical:(BOOL)a1 isIneligible:(BOOL)a2;
- (id)initWithPendingInstallPlan:(id)a0;
- (void)_startPlanTransfer:(id)a0;
- (void)_startLocalPlanConversion;
- (id)initWithLocalPhysical:(id)a0 carrierName:(id)a1;

@end
