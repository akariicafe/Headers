@class NSString, PKPasscodeUpgradeFlowController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPasscodeUpgradeExplanationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKPaymentSetupPresentationProtocol> {
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPasscodeUpgradeFlowController *_flowController;
    long long _context;
    BOOL _isForWatch;
    BOOL _viewHasAppeared;
}

@property (copy, nonatomic) id /* block */ continuationHandler;
@property (copy, nonatomic) id /* block */ setupLaterHandler;
@property (nonatomic) BOOL upgradeRequiredToAddNewPass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_showSpinner:(BOOL)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithPasscodeUpgradeFlowController:(id)a0 isForWatch:(BOOL)a1;
- (unsigned long long)paymentSetupMarker;

@end
