@class UIColor;

@interface CPUILabelButton : CPUIMediaButton

@property (retain, nonatomic) UIColor *disabledTextColor;

- (void)setEnabled:(BOOL)a0;
- (id)tintColor;
- (void).cxx_destruct;
- (id)colorForKnobFocusLayer;
- (void)updateButtonOpacityForKnobUnfocused;

@end
