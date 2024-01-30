@class NSUUID, CALayer;

@interface CPUIMediaButton : UIButton {
    CALayer *_focusColorLayer;
}

@property (nonatomic) BOOL showBezelInTouch;
@property (nonatomic) BOOL showHighlight;
@property (retain, nonatomic) NSUUID *identifier;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_updateButtonStyle;
- (BOOL)canShowHighlight;
- (id)tintColorForUnhighlightedTextLabel;
- (double)focusLayerCornerRadius;
- (id)colorForKnobFocusLayer;
- (id)colorForKnobFocusLayerSelected;
- (BOOL)shouldUpdateButtonOpacityForKnobUnfocused;
- (void)updateButtonOpacityForKnobUnfocused;
- (id)colorForKnobContentSelected;
- (id)colorForKnobFocused;
- (id)colorForTouchContentSelected;
- (id)colorForTouchFocusLayerSelected;
- (id)colorForTouchFocusLayer;
- (id)_buttonBackGroundColorTouch;

@end
