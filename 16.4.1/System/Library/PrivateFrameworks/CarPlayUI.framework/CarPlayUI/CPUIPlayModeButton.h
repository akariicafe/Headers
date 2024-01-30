@interface CPUIPlayModeButton : CPUIMediaButton

- (id)colorForTouchFocusLayerSelected;
- (id)colorForKnobContentSelected;
- (id)colorForKnobFocusLayerSelected;
- (id)colorForTouchContentSelected;
- (id)colorForTouchFocusLayer;
- (BOOL)shouldUpdateButtonOpacityForKnobUnfocused;
- (BOOL)showBezelInTouch;
- (id)tintColorForUnhighlightedTextLabel;

@end
