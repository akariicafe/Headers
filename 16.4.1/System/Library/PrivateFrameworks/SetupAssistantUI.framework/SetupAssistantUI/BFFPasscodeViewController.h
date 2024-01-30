@class NSObject, NSString, BFFPasscodeCreationManager;
@protocol BFFPasscodeViewControllerDelegate;

@interface BFFPasscodeViewController : UIViewController <BFFPasscodeCreationDelegate, BFFPasscodeInputViewDelegate> {
    BOOL _footerButtonIsSkip;
    BOOL _showingSpinner;
}

@property (retain, nonatomic) BFFPasscodeCreationManager *passcodeManager;
@property (weak, nonatomic) NSObject<BFFPasscodeViewControllerDelegate> *passcodeCreationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowSkip;

- (void)dealloc;
- (void)viewDidLoad;
- (id)titleForState:(unsigned long long)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)clear;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)passcodeInput:(id)a0 enteredPasscode:(id)a1;
- (void)passcodeInput:(id)a0 willChangeContents:(id)a1;
- (id)passcodeInputView;
- (void)_updateNextButton;
- (void)_updateNextButtonForPasscode:(id)a0;
- (void)nextButtonPressed;
- (void)passcodeInput:(id)a0 tappedFooterButton:(id)a1;
- (BOOL)_allowSkip;
- (void)passcodeManagerWillSetPasscode:(id)a0;
- (void)_animatedPasscodeViewTransitionToState:(unsigned long long)a0 animation:(unsigned long long)a1;
- (void)_commitPasscodeEntryTypeChange;
- (void)_finishedWithPasscode:(id)a0;
- (id)_firstEntryInstructions;
- (id)_passcodeInputViewForState:(unsigned long long)a0;
- (void)_setupFirstEntry;
- (void)_showPasscodeOptionsSheet;
- (void)_showSkipPasscodeAlert;
- (void)_showWeakWarningAlert;
- (void)configurePasscodeTypeUsingAnimations:(BOOL)a0;
- (id)instructionsForState:(unsigned long long)a0;
- (void)passcodeManager:(id)a0 didSetPasscodeWithSuccess:(BOOL)a1 error:(id)a2;
- (void)passcodeManager:(id)a0 didTransitionFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (id)passcodeOptionAlertController;

@end
