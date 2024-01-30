@class NSString, UIViewController, UINavigationController;
@protocol AXUIPasscodeViewControllerDelegate;

@interface AXUIPasscodeViewController : DevicePINController <AXUIPasscodePaneContainingNavigationControllerDelegate, UIPopoverPresentationControllerDelegate>

@property (copy, nonatomic) NSString *passcode;
@property (nonatomic, getter=isPasscodeViewVisible) BOOL passcodeViewVisible;
@property (nonatomic) int presentationStyle;
@property (retain, nonatomic) UIViewController *presentorViewController;
@property (retain, nonatomic) UINavigationController *hostingNavigationController;
@property (nonatomic) BOOL asynchronouslyCheckedPinWasValid;
@property (nonatomic) int pinLength;
@property (weak, nonatomic) id<AXUIPasscodeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)popoverPresentationController:(id)a0 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(inout id *)a2;
- (BOOL)_canShowWhileLocked;
- (BOOL)validatePIN:(id)a0;
- (void)setPIN:(id)a0;
- (BOOL)requiresKeyboard;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)a0;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (void)didAcceptSetPIN;
- (void)cancelButtonTapped;
- (void)didAcceptEnteredPIN;
- (id)stringsBundle;
- (void)_updateErrorTextAndFailureCount:(BOOL)a0;
- (BOOL)isNumericPIN;
- (void)pinEntered:(id)a0;
- (BOOL)pinIsAcceptable:(id)a0 outError:(id *)a1;
- (BOOL)simplePIN;
- (BOOL)useProgressiveDelays;
- (BOOL)_shouldShowCancelButton;
- (long long)_activeInterfaceOrientation;
- (void)_didFinishDismissingPasscodeViewWithReason:(long long)a0;
- (void)_dismissPasscodeViewAnimated:(BOOL)a0 withReason:(long long)a1;
- (void)_notifyDelegateOfPasscodeViewDismissalWithReason:(long long)a0;
- (void)_notifyDelegateOfPasscodeViewVisibilityChange;
- (void)_presentPasscodeViewWithParentViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)_shouldAllowMultipleEntryAttempts;
- (void)_slidePasscodeField;
- (long long)axui_activeInterfaceOrientationForNavigationController:(id)a0;
- (void)dismissPasscodeViewAnimated:(BOOL)a0 reason:(long long)a1;
- (id)initWithPresentationStyle:(int)a0 forSetup:(BOOL)a1 pinLength:(unsigned long long)a2;
- (void)presentPasscodeViewWithParentViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)switchFromKeypadToKeyboard;

@end
