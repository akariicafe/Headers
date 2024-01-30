@class NSString, _UILegibilitySettings;
@protocol SBUIPoseidonContainerViewControllerLockStatusProvider, SBUIPoseidonContainerViewControllerDelegate;

@interface SBUIPoseidonContainerViewController : UIViewController <SBUIPoseidonIconViewDelegate>

@property (weak, nonatomic) id<SBUIPoseidonContainerViewControllerDelegate> delegate;
@property (weak, nonatomic) id<SBUIPoseidonContainerViewControllerLockStatusProvider> authenticationInformationProvider;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (nonatomic, getter=isBioLockout) BOOL bioLockout;
@property (nonatomic, getter=isScreenOn) BOOL screenOn;
@property (nonatomic) BOOL fingerOffSinceWake;
@property (nonatomic) int unlockSource;
@property (nonatomic) BOOL resignActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetRestToOpen;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithAuthenticationInformationProvider:(id)a0;
- (void)showCoaching:(BOOL)a0;
- (void)fillRestToOpenWithDuration:(double)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_poseidonIconView;
- (void)_setLocalTransformForOrientation:(long long)a0;
- (void)_setCounterTransformForOrientation:(long long)a0;
- (void)startRestToOpenCoaching:(BOOL)a0 withCompletion:(id /* block */)a1;
- (BOOL)_canShowWhileLocked;
- (double)poseidonIconViewIdleUntilShimmerDuration:(id)a0;
- (BOOL)coachingActive;
- (double)poseidonIconViewRestToOpenIdleDuration:(id)a0;
- (void)poseidonIconViewCoachingStateDidChange:(id)a0;

@end
