@class UIColor, SBRecordingIndicatorView, UIViewPropertyAnimator, CAContext, CALayer;

@interface SBRecordingIndicatorViewController : UIViewController {
    UIViewPropertyAnimator *_animatorScaleToOverscale;
    UIViewPropertyAnimator *_animatorScaleToNormal;
    UIViewPropertyAnimator *_animatorScaleToRest;
    UIViewPropertyAnimator *_animatorScaleToZero;
    UIViewPropertyAnimator *_animatorFastFade;
    double _size;
    double _sideOffset;
    double _topOffset;
    struct CGPoint { double x; double y; } _center;
    CAContext *_context;
    CALayer *_rootLayer;
    CALayer *_contentLayer;
}

@property (nonatomic) BOOL isStatusBarPortal;
@property (readonly, nonatomic, getter=indicatorView) SBRecordingIndicatorView *indicatorView;
@property (retain, nonatomic, getter=indicatorColor) UIColor *indicatorColor;
@property (readonly, nonatomic) unsigned long long indicatorAnimationState;
@property (nonatomic, getter=activeInterfaceOrientation) long long activeInterfaceOrientation;

- (void).cxx_destruct;
- (void)_stopAllAnimations;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (id)initForPortalView:(BOOL)a0;
- (void)updateIndicatorVisibility:(BOOL)a0;
- (void)updateIndicatorVisibility:(BOOL)a0 skipFadeOutAnimation:(BOOL)a1;
- (void)updateIndicatorVisibilityWithFastFadeAnimation:(BOOL)a0;
- (void)updateIndicatorShape:(unsigned long long)a0;
- (void)_configureRootLayer;
- (void)calculateInitialIndicatorPositionAndSize;
- (void)_updateToOrientation:(long long)a0;
- (void)_updateIndicatorLayerWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andCenter:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateIndicatorLayerSize:(double)a0 opacity:(double)a1;
- (void)_updateIndicatorViewSize:(double)a0 alpha:(double)a1;

@end
