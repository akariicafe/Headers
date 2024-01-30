@class CAMediaTimingFunction, SBIconView, UIViewFloatAnimatableProperty, UIView;

@interface SBFluidSwitcherIconOverlayView : SBOrientationTransformWrapperView {
    SBIconView *_iconOverlayView;
    UIView *_iconCrossfadeView;
    UIView *_iconOverlayContainerView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialIconOverlayViewBounds;
    UIView *_crossfadeView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _crossfadeViewFrame;
    UIViewFloatAnimatableProperty *_iconCrossfadeAnimatableProperty;
    CAMediaTimingFunction *_iconCrossfadeTimingFunction;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } crossfadeViewFrame;
@property (readonly, nonatomic) SBIconView *iconView;
@property (nonatomic) double cornerRadius;

- (void)_applyIconOverlayViewOverlayScaleProperties;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIconView:(id)a0 crossfadeView:(id)a1 crossfadeViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 contentOrientation:(long long)a3 containerOrientation:(long long)a4;
- (void)layoutSubviews;
- (double)_currentFadeValue;
- (double)_iconOverlayScale;
- (void)_setUpIconCrossfadeAnimatableProperty;
- (void)invalidate;
- (void)_setUpIconCrossfadeView;

@end
