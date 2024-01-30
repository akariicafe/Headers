@class SBUIProudLockIconView, NSString, BSUICAPackageView, SBUISystemApertureContentProvider, SBUIBiometricResource, SBUISystemApertureCustomContentProvider, UIView;
@protocol SAUILayoutHosting, SAElement, SAElementHosting;

@interface SBLockElementViewProvider : SBActivityProvidedContentElement <SBUIBiometricResourceObserver, SBSystemApertureSuppressible, SAElementViewProviding, SAUIContentTransitioning> {
    SBUIBiometricResource *_sharedResource;
    BOOL _allowsBioUnlock;
    BOOL _isAuthenticated;
    BOOL _hasActiveUnlockAttempt;
    BOOL _isEmpty;
    BOOL _isInBloomMode;
    BOOL _isAcquiring;
    unsigned long long _unlockMode;
    SBUIProudLockIconView *_leadingLock;
    UIView *_trailingView;
    BSUICAPackageView *_trailingPackageView;
    id<SAElementHosting> _elementHost;
    long long _layoutMode;
    id<SAUILayoutHosting> _layoutHost;
}

@property (class, readonly, nonatomic) BOOL deviceSupportsElement;

@property (retain, nonatomic) SBUISystemApertureContentProvider *contentProvider;
@property (retain, nonatomic) SBUISystemApertureCustomContentProvider *lockProvider;
@property (retain, nonatomic) SBUISystemApertureCustomContentProvider *trailingPackageProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, weak, nonatomic) id<SAElement> element;

- (id)viewProvider;
- (void)biometricResource:(id)a0 observeEvent:(unsigned long long)a1;
- (void)setEmpty:(BOOL)a0;
- (void)handleBiometricEvent:(long long)a0;
- (BOOL)_canShowWhileLocked;
- (long long)layoutMode;
- (void)setAuthenticated:(BOOL)a0;
- (id)init;
- (id)elementIdentifier;
- (void).cxx_destruct;
- (id)clientIdentifier;
- (void)shake;
- (long long)preferredLayoutMode;
- (void)biometricResource:(id)a0 matchingEnabledDidChange:(BOOL)a1;
- (void)_setUnlockMode:(unsigned long long)a0;
- (void)setElementHost:(id)a0;
- (BOOL)_activelyWantsMatching;
- (BOOL)_allowsBiometricUnlock;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_elementFrameLeading:(BOOL)a0 forLayoutMode:(long long)a1;
- (void)_setAcquiring:(BOOL)a0;
- (void)_toggleUnlockMode;
- (unsigned long long)_unlockMode;
- (void)_updateAllowsBioUnlock;
- (void)_updateLockLayout;
- (void)_updateTrailingGlyph;
- (void)_updateTrailingPackageVisibility;
- (void)_updateUnlockModeForState;
- (void)contentProviderWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 inContainerView:(id)a1 transitionCoordinator:(id)a2;
- (id)elementHost;
- (BOOL)handleElementViewEvent:(long long)a0;
- (BOOL)hasActivityBehavior;
- (BOOL)isProvidedViewConcentric:(id)a0 inLayoutMode:(long long)a1;
- (id)layoutHost;
- (void)layoutHostContainerViewDidLayoutSubviews:(id)a0;
- (void)layoutHostContainerViewWillLayoutSubviews:(id)a0;
- (id)leadingLock;
- (long long)maximumSupportedLayoutMode;
- (long long)minimumSupportedLayoutMode;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })preferredEdgeOutsetsForLayoutMode:(long long)a0 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 maximumOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (BOOL)prefersAlertKeyLineStyle;
- (void)setBloomed:(BOOL)a0;
- (void)setLayoutHost:(id)a0;
- (void)setLayoutMode:(long long)a0 reason:(long long)a1;
- (BOOL)shouldSuppressElementWhileOnCoversheet;
- (struct CGSize { double x0; double x1; })sizeThatFitsSize:(struct CGSize { double x0; double x1; })a0 forProvidedView:(id)a1 inLayoutMode:(long long)a2;
- (id)trailingPackageView;

@end
