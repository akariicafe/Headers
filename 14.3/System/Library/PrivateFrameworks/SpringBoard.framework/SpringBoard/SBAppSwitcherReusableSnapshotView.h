@class NSMutableDictionary, SBAppSwitcherSnapshotImageCache, UIViewController, SBMedusaSettings, NSMutableArray, UIView, NSString, SBOrientationTransformWrapperView, SBAppClipOverlayCoordinator, SBAppLayout, CAShapeLayer, SBAppSwitcherSnapshotLockoutViewControllerProvider, SBAppSwitcherSettings, SBSwitcherSnapshotImageView;
@protocol SBAppSwitcherReusableSnapshotViewDelegate;

@interface SBAppSwitcherReusableSnapshotView : SBSwitcherWallpaperPageContentView <SBAppSwitcherSnapshotImageCacheObserver, SBReusableView, SBAppSwitcherPageContentView> {
    SBOrientationTransformWrapperView *_firstOrientationWrapper;
    SBOrientationTransformWrapperView *_secondOrientationWrapper;
    SBSwitcherSnapshotImageView *_firstImageView;
    SBSwitcherSnapshotImageView *_secondImageView;
    UIViewController *_containerViewController;
    id<SBAppSwitcherReusableSnapshotViewDelegate> _delegate;
    NSMutableDictionary *_snapshotViewStateByRole;
    NSMutableDictionary *_blockingViewControllerByRole;
    CAShapeLayer *_medusaDividerLayer;
    UIView *_solidColorBackstopView;
    SBAppSwitcherSnapshotImageCache *_snapshotCache;
    SBAppSwitcherSnapshotLockoutViewControllerProvider *_lockoutVCProvider;
    SBAppClipOverlayCoordinator *_appClipOverlayCoordinator;
    NSMutableDictionary *_appClipOverlayByRole;
    SBAppSwitcherSettings *_settings;
    SBMedusaSettings *_medusaSettings;
    BOOL _showingIconOverlayView;
    NSMutableArray *_deferredSnapshotCrossfadeQueue;
}

@property (retain, nonatomic) SBAppLayout *appLayout;
@property (nonatomic) BOOL shouldUseBrightMaterial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double cornerRadius;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic) BOOL contentRequiresGroupOpacity;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isVisible) BOOL visible;

- (void)_setAnimatingTransition:(BOOL)a0 forRole:(long long)a1;
- (void)setShowingIconOverlayView:(BOOL)a0;
- (void)_updateSceneHandleForRole:(long long)a0;
- (void)_addAppClipOverlayForRole:(long long)a0 bundleIdentifier:(id)a1 sceneIdentifier:(id)a2;
- (BOOL)hasSceneOverlayView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForBackstopLayer;
- (void)_handleInstalledAppsChanged:(id)a0;
- (void).cxx_destruct;
- (void)_setCacheEntry:(id)a0 forRole:(long long)a1;
- (id)_sceneHandleForRole:(long long)a0;
- (void)_setSceneHandle:(id)a0 forRole:(long long)a1;
- (id)_orientationWrapperForRole:(long long)a0;
- (void)prepareForReuse;
- (void)didUpdateCacheEntry:(id)a0;
- (id)_imageViewForRole:(long long)a0;
- (void)_addOverlayViewController:(id)a0 toOrientationWrapperForRole:(long long)a1;
- (void)_updateToNewSnapshotImageUsingCacheEntry:(id)a0;
- (void)layoutSubviews;
- (void)_requestFreshImages;
- (long long)_contentOrientationForSnapshotOrientation:(long long)a0;
- (void)_updateContentOrientationForRole:(long long)a0;
- (id)initWithDelegate:(id)a0 snapshotCache:(id)a1 lockoutVCProvider:(id)a2 appClipOverlayCoordinator:(id)a3 containerViewController:(id)a4;
- (void)_configureSnapshotImageView:(id)a0 cacheEntry:(id)a1;
- (void)_updateCornerRadiusIfNecessaryForSnapshotImageView:(id)a0 cacheEntry:(id)a1;
- (id)_cacheEntryForRole:(long long)a0;
- (void)_updateDivider;
- (void)_performDeferredSnapshotUpdatesIfNecessaryForRole:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameInLayoutSpaceForRole:(long long)a0 inAppLayout:(id)a1 inOrientation:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_snapshotImageFrameForCacheEntry:(id)a0;
- (void)_removeAppClipOverlayForRole:(long long)a0;
- (void)_removeAppLockoutOverlayForRole:(long long)a0;
- (id)_applicationForRole:(long long)a0;
- (void)_updateTranslucency;
- (BOOL)_isAnimatingTransitionForRole:(long long)a0;
- (void)invalidate;
- (void)_addAppLockoutOverlayIfNecessaryForRole:(long long)a0;
- (void)_updateCornerRadiusIfNecessaryForOverlayView:(id)a0 matchingSnapshotImage:(id)a1;

@end
