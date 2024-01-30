@class UIMotionEffectGroup, UIView;

@interface _UIInterfaceActionRepresentationViewContext_AppleTV : NSObject {
    UIMotionEffectGroup *_installedHighlightedActionMotionEffectsGroup;
}

@property (weak, nonatomic) UIView *highlightTransformTargetView;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL pressed;

- (void).cxx_destruct;
- (void)_applyHighlightTransform;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_enlargedTransformForSize:(struct CGSize { double x0; double x1; })a0 pressed:(BOOL)a1;
- (void)_insertMotionEffects;
- (id)_newMotionEffectsGroupForHighlightedAction;
- (void)_removeMotionEffects;
- (id)initWithHighlightTransformTargetView:(id)a0;

@end
