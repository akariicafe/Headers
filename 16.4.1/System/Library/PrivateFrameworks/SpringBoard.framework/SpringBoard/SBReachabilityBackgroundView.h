@class NSString, SBWallpaperEffectView, CAShapeLayer, UIView, SBHomeGrabberView, UIViewFloatAnimatableProperty;

@interface SBReachabilityBackgroundView : UIView <SBHomeGrabberDelegate> {
    UIView *_wallpaperContainerView;
    SBWallpaperEffectView *_topWallpaperEffectView;
    SBWallpaperEffectView *_bottomWallpaperEffectView;
    UIView *_hitTestBlockerView;
    SBHomeGrabberView *_homeGrabberView;
    CAShapeLayer *_chevronLayer;
    UIViewFloatAnimatableProperty *_chevronShapeAnimatableProperty;
}

@property (nonatomic) long long wallpaperVariant;
@property (nonatomic) double containerViewYOffset;
@property (nonatomic) double homeGrabberAdditionalOffset;
@property (nonatomic) double homeGrabberAlpha;
@property (nonatomic) double chevronAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)additionalEdgeSpacingForHomeGrabberView:(id)a0;
- (BOOL)shouldAllowThinStyleForHomeGrabberView:(id)a0;
- (void)layoutSubviews;
- (BOOL)shouldAllowAutoHideForHomeGrabberView:(id)a0;
- (void).cxx_destruct;
- (double)_displayCornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wallpaperVariant:(long long)a1;
- (id)_newWallpaperEffectViewForVariant:(long long)a0;
- (void)_setupChevron;
- (void)_setupCornerContentsImageForWallpaperEffectView:(id)a0;
- (void)_setupHitTestBlockerView;
- (void)_setupHomeGrabberView;
- (void)_updateChevronPathForUpFraction:(double)a0;
- (void)_updateWallpaperEffectViewAnimated:(BOOL)a0;

@end
