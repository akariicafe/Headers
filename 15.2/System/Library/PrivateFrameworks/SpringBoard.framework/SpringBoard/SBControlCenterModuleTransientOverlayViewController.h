@class NSString, CCSModulePresentationOptions, CCUIModuleAlertViewController;
@protocol SBControlCenterModuleTransientOverlayViewControllerDelegate;

@interface SBControlCenterModuleTransientOverlayViewController : SBTransientOverlayViewController <CCUIModuleAlertViewControllerDelegate> {
    CCUIModuleAlertViewController *_moduleOverlayViewController;
}

@property (weak, nonatomic) id<SBControlCenterModuleTransientOverlayViewControllerDelegate> delegate;
@property (readonly, copy, nonatomic) CCSModulePresentationOptions *presentationOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)handleHomeButtonPress;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_dismiss;
- (BOOL)shouldDisableControlCenter;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)presentationOptions;
- (BOOL)_shouldBlurBackground;
- (void)contentModuleAlertViewControllerNeedsDismissal:(id)a0;
- (id)initWithModuleIdentifier:(id)a0 presentationOptions:(id)a1;
- (long long)preferredUnlockedGestureDismissalStyle;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (void)handleGestureDismissal;
- (long long)preferredLockedGestureDismissalStyle;
- (BOOL)shouldDisableOrientationUpdates;
- (void)_animateTransitionFromViewController:(id)a0 toViewController:(id)a1 containerView:(id)a2 isAnimated:(BOOL)a3 otherAnimations:(id /* block */)a4 completion:(id /* block */)a5;

@end
