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

- (BOOL)handleHomeButtonPress;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)_dismiss;
- (BOOL)shouldDisableControlCenter;
- (id)init;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (id)presentationOptions;
- (BOOL)prefersEmbeddedDisplayPresentation;
- (BOOL)_shouldBlurBackground;
- (void)contentModuleAlertViewControllerNeedsDismissal:(id)a0;
- (id)initWithModuleIdentifier:(id)a0 presentationOptions:(id)a1;
- (BOOL)shouldDisableOrientationUpdates;
- (void)_animateTransitionFromViewController:(id)a0 toViewController:(id)a1 containerView:(id)a2 isAnimated:(BOOL)a3 otherAnimations:(id /* block */)a4 completion:(id /* block */)a5;
- (void)handleGestureDismissal;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (long long)preferredLockedGestureDismissalStyle;
- (long long)preferredUnlockedGestureDismissalStyle;

@end
