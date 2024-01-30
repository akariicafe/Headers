@interface CPUIPlayModeButton : CPUIMediaButton

- (id)tintColorForUnhighlightedTextLabel;
- (BOOL)showBezelInTouch;
- (id)colorForKnobFocusLayerSelected;
- (BOOL)shouldUpdateButtonOpacityForKnobUnfocused;
- (id)colorForKnobContentSelected;
- (id)colorForTouchContentSelected;
- (id)colorForTouchFocusLayerSelected;
- (id)colorForTouchFocusLayer;

@end
