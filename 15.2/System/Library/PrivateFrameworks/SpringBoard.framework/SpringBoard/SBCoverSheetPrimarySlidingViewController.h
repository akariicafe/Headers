@class SBGrabberTongue, NSString, SBCoverSheetParallaxContainerView, SBCoverSheetPanelBackgroundContainerView, SBFTouchPassThroughView, SBWallpaperEffectView, SBCoverSheetBlurView, UIGestureRecognizer;
@protocol SBCoverSheetGrabberDelegate;

@interface SBCoverSheetPrimarySlidingViewController : SBCoverSheetSlidingViewController <SBGrabberTongueDelegate, SBReachabilityObserver>

@property (retain, nonatomic) SBFTouchPassThroughView *unlockedContentOverlayView;
@property (retain, nonatomic) SBCoverSheetPanelBackgroundContainerView *panelBackgroundContainerView;
@property (retain, nonatomic) SBFTouchPassThroughView *parallaxClippingView;
@property (retain, nonatomic) SBCoverSheetParallaxContainerView *parallaxContainerView;
@property (retain, nonatomic) SBGrabberTongue *grabberTongue;
@property (retain, nonatomic) SBCoverSheetBlurView *panelCoverSheetBlurView;
@property (retain, nonatomic) SBWallpaperEffectView *panelWallpaperEffectView;
@property (retain, nonatomic) SBWallpaperEffectView *panelFadeOutWallpaperEffectView;
@property (nonatomic) double defaultPresentGestureEdgeRegionSize;
@property (weak, nonatomic) id<SBCoverSheetGrabberDelegate> grabberDelegate;
@property (readonly, nonatomic) UIGestureRecognizer *edgePullGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateWindowVisibility;
- (void)setTransitionSettings:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)_setupPanelPartsIfNecessary;
- (BOOL)_canShowWhileLocked;
- (void)grabberTongueWillPresent:(id)a0;
- (void)_positionSubviewsForContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPresentationValue:(BOOL)a1;
- (id)customGestureRecognizerForGrabberTongue:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_animationTickedWithProgress:(double)a0 forPresentationValue:(BOOL)a1;
- (void)loadView;
- (void)_beginTransitionFromAppeared:(BOOL)a0;
- (void)grabberTongueCanceledPulling:(id)a0 withDistance:(double)a1 andVelocity:(double)a2 andGesture:(id)a3;
- (BOOL)grabberTongue:(id)a0 shouldShowTongueOnFirstSwipeWithEdgeLocation:(double)a1;
- (BOOL)grabberTongueOrPullEnabled:(id)a0 forGestureRecognizer:(id)a1;
- (void)handleReachabilityModeActivated;
- (void)_endTransitionToAppeared:(BOOL)a0;
- (void).cxx_destruct;
- (void)grabberTongueBeganPulling:(id)a0 withDistance:(double)a1 andVelocity:(double)a2 andGesture:(id)a3;
- (void)_createPanelWallpaperEffectViewIfNeeded;
- (void)grabberTongueDidDismiss:(id)a0;
- (void)_updatePanelWallpaperEffectView;
- (void)grabberTongueUpdatedPulling:(id)a0 withDistance:(double)a1 andVelocity:(double)a2 andGesture:(id)a3;
- (void)_createFadeOutWallpaperEffectView;
- (void)dealloc;
- (BOOL)_shouldShowGrabberOnFirstSwipe;
- (BOOL)shouldAutorotate;
- (void)handleReachabilityModeDeactivated;
- (void)grabberTongueEndedPulling:(id)a0 withDistance:(double)a1 andVelocity:(double)a2 andGesture:(id)a3;

@end
