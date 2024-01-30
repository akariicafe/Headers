@class BSCornerRadiusConfiguration, NSString, NSArray, UIView, SBFluidSwitcherViewController, SBInlineAppExposeLiveContentOverlayCoordinator, SBInlineAppExposeRootSwitcherModifier, SBHomeScreenBackdropViewBase, SBWallpaperEffectView, SBAsymmetricalCornerRadiusWrapperView, SBDeviceApplicationSceneViewController;
@protocol SBInlineAppExposeContainerViewControllerDelegate;

@interface SBInlineAppExposeContainerViewController : UIViewController <SBSwitcherContentViewControllerDelegate, SBSwitcherContentViewControllerDataSource, SBLayoutStateTransitionObserver, SBAppPlatterDragSourceViewProviding> {
    NSString *_bundleIdentifier;
    BOOL _transitioningFromOverlay;
    SBAsymmetricalCornerRadiusWrapperView *_asymmetricalCornerRadiusWrapperView;
    NSArray *_appLayouts;
    SBFluidSwitcherViewController *_contentViewController;
    SBInlineAppExposeLiveContentOverlayCoordinator *_liveContentCoordinator;
    SBInlineAppExposeRootSwitcherModifier *_rootModifier;
    SBWallpaperEffectView *_wallpaperEffectView;
    SBHomeScreenBackdropViewBase *_backdropView;
    UIView *_dimmingView;
    struct CGSize { double width; double height; } _contentReferenceSize;
    long long _contentInterfaceOrientation;
    BOOL _didPerformInitialSetup;
    BOOL _isRotating;
}

@property (weak, nonatomic) id<SBInlineAppExposeContainerViewControllerDelegate> delegate;
@property (nonatomic) long long layoutRole;
@property (nonatomic, getter=isOverlay) BOOL overlay;
@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) BOOL clipsToBounds;
@property (retain, nonatomic) SBDeviceApplicationSceneViewController *deviceApplicationSceneViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDragging) BOOL dragging;

- (void)layoutStateTransitionCoordinator:(id)a0 transitionWillEndWithTransitionContext:(id)a1;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (id)switcherContentController:(id)a0 transitionEventForContext:(id)a1 identifier:(id)a2 phase:(unsigned long long)a3 animated:(BOOL)a4;
- (void)setContentReferenceSize:(struct CGSize { double x0; double x1; })a0 withInterfaceOrientation:(long long)a1;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (id)animationControllerForTransitionRequest:(id)a0;
- (id)initialRimShadowFilters;
- (void).cxx_destruct;
- (id)initialCornerRadiusConfiguration;
- (void)switcherContentController:(id)a0 setHomeScreenBackdropBlurType:(long long)a1;
- (struct SBDragPreviewShadowParameters { double x0; double x1; struct CGSize { double x0; double x1; } x2; })initialDiffuseShadowParameters;
- (id)sourceView;
- (id)containerViewForBlurContentView;
- (struct SBDragPreviewShadowParameters { double x0; double x1; struct CGSize { double x0; double x1; } x2; })initialRimShadowParameters;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadii;
- (void)dealloc;
- (id)initialDiffuseShadowFilters;
- (id)appLayoutsForSwitcherContentController:(id)a0;
- (void)loadView;
- (void)switcherContentController:(id)a0 deletedAppLayout:(id)a1 forReason:(long long)a2;
- (void)switcherContentController:(id)a0 setContainerStatusBarHidden:(BOOL)a1 animationDuration:(double)a2;
- (void)_addAppLayoutToFront:(id)a0;
- (void)switcherContentController:(id)a0 performTransitionWithRequest:(id)a1 gestureInitiated:(BOOL)a2;
- (id)switcherContentController:(id)a0 transitionEventForLayoutState:(id)a1 identifier:(id)a2 phase:(unsigned long long)a3 animated:(BOOL)a4;
- (void)switcherContentController:(id)a0 setHomeScreenDimmingAlpha:(double)a1 withAnimationMode:(long long)a2 completion:(id /* block */)a3;
- (void)switcherContentController:(id)a0 handlePlusButtonActionForBundleIdentifier:(id)a1;
- (long long)sbActiveInterfaceOrientation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForInlineAppExposeItemAspectFill:(BOOL)a0;
- (void)switcherContentController:(id)a0 setHomeScreenBackdropBlurProgress:(double)a1 withAnimationMode:(long long)a2 completion:(id /* block */)a3;
- (long long)switcherInterfaceOrientationForContentController:(id)a0;
- (void)switcherContentController:(id)a0 setContentOrientation:(long long)a1;
- (void)viewWillLayoutSubviews;
- (id)initWithBundleID:(id)a0 layoutRole:(long long)a1 overlay:(BOOL)a2;
- (BOOL)switcherContentControllerReloadsSnapshotsForActiveInterfaceOrientationChange:(id)a0;
- (long long)backdropInterfaceStyleForContentController:(id)a0;
- (id)_unfilteredAppLayoutsForBundleID:(id)a0;
- (id)_inlineAppLayoutForDisplayItem:(id)a0;
- (void)_insertAppLayout:(id)a0 atIndex:(unsigned long long)a1 animated:(BOOL)a2 modelMutation:(id /* block */)a3;
- (void)_updateContentViewControllerFrame;
- (id)_liveSceneIDsExcludingCurrentRole:(BOOL)a0 matchingBundleIdentifier:(id)a1 forTransitionContext:(id)a2;
- (id)_newInlineDisplayItemFromSceneHandle:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForInlineAppExposeItemAspectFill:(BOOL)a0 referenceSize:(struct CGSize { double x0; double x1; })a1 interfaceOrientation:(long long)a2 scale:(inout double *)a3;
- (id)_inlineDisplayItemInLayoutState:(id)a0;

@end
