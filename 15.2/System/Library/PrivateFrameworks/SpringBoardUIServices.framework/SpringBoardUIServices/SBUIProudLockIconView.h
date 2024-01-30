@class BSUICAPackageView, LAUIPearlGlyphView, UIView, _UILegibilitySettings, NSSet, SBUIFaceIDCoachingView, SBUIFaceIDCameraGlyphView, UIColor;

@interface SBUIProudLockIconView : UIView {
    UIView *_iconContainerView;
    BSUICAPackageView *_lockView;
    NSSet *_imageLayers;
    NSSet *_shadowImageLayers;
    NSSet *_shadowFilterLayers;
    LAUIPearlGlyphView *_lazy_pearlGlyphView;
    id _pearlGlyphViewSharedResources;
    SBUIFaceIDCoachingView *_lazy_faceIDCoachingView;
    BOOL _performingIncomingLayout;
}

@property (retain, nonatomic) UIColor *contentColor;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double durationOnCameraCoveredGlyphBeforeCoaching;
@property (nonatomic) long long state;
@property (readonly, nonatomic) SBUIFaceIDCameraGlyphView *cameraCoveredView;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setState:(long long)a0 animated:(BOOL)a1;
- (id)fileNameForCurrentDevice;
- (void)_forEachLayerInHierarchy:(id)a0 perform:(id /* block */)a1;
- (void)_transitionToState:(long long)a0 animated:(BOOL)a1 options:(long long)a2 completion:(id /* block */)a3;
- (void)setState:(long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setState:(long long)a0 animated:(BOOL)a1 options:(long long)a2 completion:(id /* block */)a3;
- (void)_configureShadowFromLegibilitySettings:(id)a0;
- (id)_faceIDCoachingView;
- (struct CGSize { double x0; double x1; })_smallLockSize;
- (double)_lockToCoachingSpacing;
- (void)_resetPearlGlyphView;
- (void)_resetfaceIDCoachingView;
- (void)_resetCameraGlyphView;
- (id)_activeViewsForState:(long long)a0;
- (id)_pearlGlyphView;
- (id)_alphaAnimationSettingsForTransitionFromViews:(id)a0 andState:(long long)a1 toViews:(id)a2 andState:(long long)a3 forIncomingViews:(BOOL)a4;
- (double)_alphaForActiveViewForState:(long long)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_incomingTransformForActiveView:(id)a0 forState:(long long)a1;
- (id)_transformAnimationSettingsForTransitionFromViews:(id)a0 andState:(long long)a1 toViews:(id)a2 andState:(long long)a3 forIncomingViews:(BOOL)a4;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_outgoingTransformForView:(id)a0 fromState:(long long)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForActiveView:(id)a0 forState:(long long)a1;
- (id)_layoutAnimationSettingsForTransitionFromViews:(id)a0 andState:(long long)a1 toViews:(id)a2 andState:(long long)a3;
- (id)_defaultAnimationSettingsForTransitionFromViews:(id)a0 andState:(long long)a1 toViews:(id)a2 andState:(long long)a3;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_zoomedTransform;
- (double)_scaleAmountForZoom;
- (struct CGSize { double x0; double x1; })_smallLockSizeForTextSize:(id)a0;

@end
