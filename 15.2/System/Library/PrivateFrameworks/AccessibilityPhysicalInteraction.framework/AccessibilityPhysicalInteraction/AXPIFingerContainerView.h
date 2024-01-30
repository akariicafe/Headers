@class AXPIPinchChainView, UIView, NSMutableArray, _UILumaTrackingBackdropView;
@protocol AXPIFingerAppearanceDelegate;

@interface AXPIFingerContainerView : UIView <_UILumaTrackingBackdropViewDelegate> {
    NSMutableArray *_fingerViews;
    UIView *_viewForAnimatingAlpha;
    AXPIPinchChainView *_pinchChainView;
    _UILumaTrackingBackdropView *_pointerLumaMeasurementView;
}

@property (nonatomic) BOOL shouldAnimatePress;
@property (readonly, nonatomic) BOOL isPinchChainVisible;
@property (nonatomic) BOOL shouldSuppressFingerVisuals;
@property (weak, nonatomic) id<AXPIFingerAppearanceDelegate> appearanceDelegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)backgroundLumaView:(id)a0 didTransitionToLevel:(unsigned long long)a1;
- (void)clearAllFingersAnimated:(BOOL)a0 endPointForAnimation:(struct CGPoint { double x0; double x1; })a1;
- (void)showFingerModels:(id)a0 animated:(BOOL)a1 startPointForAnimation:(struct CGPoint { double x0; double x1; })a2 shouldShowPinchChain:(BOOL)a3;
- (void)updateWithFingerModel:(id)a0 forFingerAtIndex:(unsigned long long)a1;
- (void)cancelCircularProgressAnimation;
- (void)performCircularProgressAnimationOnFingersWithDuration:(double)a0 completion:(id /* block */)a1;
- (unsigned long long)indexOfFingerAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForFingersAtPoints:(id)a0;
- (void)animateToTapWithDuration:(double)a0;
- (void)_updatePinchChainAppearance;
- (void)_updateLumaMeasurementViewFrame;
- (void)_updateSystemFiltersWithBackgroundLuminanceLevel:(unsigned long long)a0;
- (void)setPressedState:(BOOL)a0 animated:(BOOL)a1;

@end
