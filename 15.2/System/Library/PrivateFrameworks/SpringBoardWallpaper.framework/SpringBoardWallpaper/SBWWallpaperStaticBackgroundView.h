@class SBWWallpaperEffectViewBase;
@protocol SBWWallpaperLegibilityProviding, SBWWallpaperPresenting, BSInvalidatable;

@interface SBWWallpaperStaticBackgroundView : UIView {
    id<SBWWallpaperPresenting, SBWWallpaperLegibilityProviding> _wallpaperPresenter;
    SBWWallpaperEffectViewBase *_lockscreenWallpaperEffectView;
    SBWWallpaperEffectViewBase *_homescreenWallpaperEffectView;
}

@property (retain, nonatomic) id<BSInvalidatable> wallpaperStyleAnimationAssertion;
@property (nonatomic) long long variant;

- (void)setVariant:(long long)a0 withOutAnimationFactory:(id)a1 inAnimationFactory:(id)a2 completion:(id /* block */)a3;
- (BOOL)_shouldSuspendMotionEffectsForStyle:(long long)a0;
- (BOOL)_shouldSuspendMotionEffectsForState:(struct { long long x0; long long x1; double x2; })a0;
- (void).cxx_destruct;
- (void)_beginSuspendingMotionEffectsForStyleIfNeeded;
- (void)dealloc;
- (void)_updateMotionEffectsForState:(struct { long long x0; long long x1; double x2; })a0;
- (void)_endSuspendingMotionEffectsForStyleIfNeeded;
- (id)_newEffectViewForVariant:(long long)a0 transitionState:(struct { long long x0; long long x1; double x2; })a1;
- (id)_effectViewForVariant:(long long)a0;
- (void)_setEffectView:(id)a0 forVariant:(long long)a1;
- (id)initWithWallpaperPresenter:(id)a0;
- (BOOL)setWallpaperStyleTransitionState:(struct { long long x0; long long x1; double x2; })a0 forVariant:(long long)a1 withAnimationFactory:(id)a2;

@end
