@class UIColor, ETColorGradientView;

@interface ETColorWheelView : DTSColorWheel {
    ETColorGradientView *_gradientView;
    double _originalRotation;
    double _originalPickerRotation;
    BOOL _handlingTouches;
}

@property (readonly, nonatomic) UIColor *selectedColor;

+ (double)colorWheelWidth;
+ (double)pickerDiameter;
+ (double)pickerWidth;
+ (struct CGColor { } *)pickerBorderColor;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)doneButtonTapped:(id)a0;
- (void)hideColorWheelPickingColor:(BOOL)a0;
- (void)showColorWheelFromPaletteCircle:(id)a0 rotation:(double)a1;
- (double)pickerDiameter;
- (void)beganTouches:(id)a0;
- (void)finishedTouches;
- (double)colorWheelRadius;
- (double)gradientWidth;
- (id)pickerViewHighlightedColor;
- (void)hideDoneButton;
- (void)addPickerCircleForPaletteCircle:(id)a0;
- (void)showDoneButtonAnimated;
- (BOOL)pickerShouldDismissClockwise;
- (void)hideDoneButtonAnimated;
- (void)animatePickerToOriginalPosition;
- (double)colorWheelDismissalRotation;

@end
