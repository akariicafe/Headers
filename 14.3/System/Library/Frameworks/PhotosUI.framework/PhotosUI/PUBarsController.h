@class UIViewController;
@protocol PUBarsControllerDelegate;

@interface PUBarsController : NSObject {
    struct { BOOL respondsToViewController; BOOL respondsToViewHostingGestureRecognizers; BOOL respondsToContentGuideInsetsDidChange; } _delegateFlags;
}

@property (nonatomic, setter=_setNeedsUpdateBars:) BOOL _needsUpdateBars;
@property (nonatomic, setter=_setNeedsUpdateGestureRecognizers:) BOOL _needsUpdateGestureRecognizers;
@property (nonatomic, setter=_setNeedsUpdateContentGuideInsets:) BOOL _needsUpdateContentGuideInsets;
@property (nonatomic, setter=_setUpdateScheduled:) BOOL _isUpdateScheduled;
@property (nonatomic, setter=_setUpdateBarsDisabledCount:) long long _updateBarsDisabledCount;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentGuideInsets;
@property (weak, nonatomic) id<PUBarsControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL prefersStatusBarHidden;
@property (readonly, nonatomic) BOOL wantsNavigationBarVisible;
@property (readonly, nonatomic) BOOL wantsToolbarVisible;
@property (readonly, nonatomic) long long preferredBarStyle;

- (void)updateBars;
- (void)updateGestureRecognizersWithHostingView:(id)a0;
- (void)invalidateViewHostingGestureRecognizers;
- (id)init;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)_invalidateGestureRecognizers;
- (BOOL)_needsUpdate;
- (void)updateIfNeeded;
- (void)_updateGestureRecognizersIfNeeded;
- (void)invalidateBars;
- (BOOL)isLocationFromProviderInBarsArea:(id)a0;
- (void)_updateBarsIfNeeded;
- (void)invalidateContentGuideInsets;
- (void)_updateContentGuideInsetsIfNeeded;
- (BOOL)_isUpdateBarsDisabled;
- (void)disableUpdateBarsForDuration:(double)a0;
- (void)_reenableUpdateBars;
- (void)invalidateViewControllerView;
- (void)updateContentGuideInsets;
- (void)_updateNowIfNeeded;

@end
