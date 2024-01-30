@class UIColor;

@interface CPUILabelButton : CPUIMediaButton

@property (retain, nonatomic) UIColor *disabledTextColor;

- (id)tintColor;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)colorForKnobFocusLayer;
- (void)updateButtonOpacityForKnobUnfocused;

@end
