@class NSString, SBUIPoseidonContainerViewController, UIView;
@protocol SBUIBiometricResource, SBFAuthenticationStatusProvider;

@interface CSPoseidonViewController : CSCoverSheetViewControllerBase <SBUIPoseidonContainerViewControllerLockStatusProvider, SBUIPoseidonContainerViewControllerDelegate>

@property (retain, nonatomic) SBUIPoseidonContainerViewController *poseidonContainerViewController;
@property (retain, nonatomic) id<SBUIBiometricResource> biometricResource;
@property (retain, nonatomic) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;
@property (readonly, nonatomic) UIView *poseidonView;
@property (readonly, nonatomic) BOOL isBiometricLockedOut;
@property (readonly, nonatomic) BOOL hasBiometricAuthenticationCapabilityEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)handleEvent:(id)a0;
- (void).cxx_destruct;
- (void)aggregateAppearance:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)poseidonContainerViewControllerCoachingStateDidChange:(id)a0;

@end
