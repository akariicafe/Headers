@class NSString, PKPasscodeUpgradeFlowController, BFFPasscodeView;
@protocol PKNewDevicePasscodeViewControllerDelegate;

@interface PKNewDevicePasscodeViewController : UIViewController <BFFPasscodeInputViewDelegate, PKPaymentSetupPresentationProtocol> {
    PKPasscodeUpgradeFlowController *_flowController;
    long long _minimumPasscodeLength;
    unsigned long long _passcodeInputScreenType;
    unsigned long long _passcodeInputState;
    long long _context;
    NSString *_currentPasscode;
    NSString *_newPasscode;
    NSString *_constraintFailedInstructions;
    BOOL _viewHasAppeared;
    BFFPasscodeView *_passcodeView;
}

@property (weak, nonatomic) id<PKNewDevicePasscodeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)passcodeInput:(id)a0 enteredPasscode:(id)a1;
- (void)passcodeInput:(id)a0 willChangeContents:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)_titleForState:(unsigned long long)a0;
- (void)_setNavigationBarEnabled:(BOOL)a0;
- (id)onPresentationRemoveViewControllersAfterMarker;
- (unsigned long long)_passcodeInputScreenTypeForUnlockScreenType:(int)a0;
- (void)_configureNavigationItemForPasscodeInputScreenType:(unsigned long long)a0 animated:(BOOL)a1;
- (id)_passcodeInputViewForPasscodeInputState:(unsigned long long)a0 passcodeInputScreenType:(unsigned long long)a1;
- (void)_updateNextButtonForPasscode:(id)a0;
- (void)_transitionToNextStateForPasscodeInput:(id)a0;
- (id)_passcodeOptionAlertController;
- (void)_applyPasscode;
- (void)_setPasscodeInputState:(unsigned long long)a0 forceUpdate:(BOOL)a1;
- (void)_updateNextButton;
- (void)_handleTransitionFromState:(unsigned long long)a0 toState:(unsigned long long)a1;
- (id)_instructionsForState:(unsigned long long)a0;
- (void)_nextButtonPressed;
- (void)_transitionToPasscodeInputScreenType:(unsigned long long)a0;
- (void)passcodeInput:(id)a0 tappedFooterButton:(id)a1;
- (id)initWithPasscodeUpgradeFlowController:(id)a0 minimumPasscodeLength:(long long)a1 withCurrentPasscode:(id)a2;

@end
