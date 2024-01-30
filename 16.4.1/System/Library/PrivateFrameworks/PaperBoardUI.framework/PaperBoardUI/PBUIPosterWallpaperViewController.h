@class UIColor, NSString, PRSWallpaperObserver, PBUIPosterViewController, PBUIDynamicProviderWrapper, BSCompoundAssertion, _UILegibilitySettings;
@protocol PBUIPosterComponentDelegate, BSInvalidatable;

@interface PBUIPosterWallpaperViewController : UIViewController <PBUIPosterComponentDelegate, BSDescriptionProviding, PBUIPosterComponent> {
    PRSWallpaperObserver *_posterObserver;
    PBUIPosterViewController *_posterController;
    PBUIDynamicProviderWrapper *_activeVariantReplicaProvider;
    PBUIDynamicProviderWrapper *_homePosterReplicaProvider;
    PBUIDynamicProviderWrapper *_lockPosterReplicaProvider;
    PBUIDynamicProviderWrapper *_lockFloatingLayerPosterReplicaProvider;
    BSCompoundAssertion *_wallpaperRequiredAssertion;
    id<BSInvalidatable> _keepForegroundRunning;
    id<BSInvalidatable> _transitioningLockState;
    long long _activeOrientation;
    long long _activeStyles[2][4];
}

@property (nonatomic) long long activeVariant;
@property (nonatomic) double unlockProgress;
@property (nonatomic) BOOL wakeSourceIsSwipeToUnlock;
@property (readonly, nonatomic) unsigned long long posterSignificantEventsCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PBUIPosterComponentDelegate> delegate;
@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) UIColor *averageColor;
@property (readonly, nonatomic) double averageContrast;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;

- (BOOL)posterHandlesWakeAnimation;
- (id)averageColorForVariant:(long long)a0;
- (id)portalProviderForFloatingLayer;
- (void)updateLegacyPoster;
- (id)requireWallpaperRasterizationWithReason:(id)a0;
- (id)requireWallpaperWithReason:(id)a0;
- (id)legibilitySettingsForVariant:(long long)a0;
- (unsigned long long)significantEventsCounterForPosterWithIdentifier:(id)a0;
- (void)posterComponent:(id)a0 didUpdateLegibilitySettings:(id)a1;
- (void)setWallpaperObscured:(BOOL)a0;
- (void)_posterConfigsDidChange:(id)a0 withTransition:(id)a1;
- (void)_updateStyle;
- (id)scenesForBacklightSession;
- (void)rotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)finishUnlockWithAnimationParameters:(struct CGSize { double x0; double x1; })a0;
- (BOOL)homeScreenReflectsLockScreen;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)removeWallpaperStyleForPriority:(long long)a0 forVariant:(long long)a1;
- (void)updateConfiguration:(id)a0 withAnimationSettings:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)setWallpaperStyle:(long long)a0 forPriority:(long long)a1 forVariant:(long long)a2;
- (id)snapshotSourceProviderForVariant:(long long)a0;
- (void)_posterControllerDidChange;
- (void)viewDidLoad;
- (id)portalSourceProviderForActiveVariant;
- (void)noteUserTapOccurred;
- (id)replicaProviderForVariant:(long long)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)invalidate;
- (void)triggerSceneUpdate;
- (id)portalSourceProviderForVariant:(long long)a0;
- (id)snapshotSourceProviderForActiveVariant;
- (void)updateAssociatedPosterConfiguration:(id)a0 withAnimationSettings:(id)a1;
- (void).cxx_destruct;
- (double)averageContrastForVariant:(long long)a0;

@end
