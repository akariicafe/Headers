@class UIColor;

@interface CPUILabelButton : CPUIMediaButton

@property (retain, nonatomic) UIColor *disabledTextColor;

- (void).cxx_destruct;
- (id)tintColor;
- (void)setEnabled:(BOOL)a0;
- (id)colorForKnobFocusLayer;
- (void)updateButtonOpacityForKnobUnfocused;

@end
