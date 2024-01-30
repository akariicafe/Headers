@class UIPress;

@interface _UIFocusMovementTabulatorPressGestureRecognizer : _UIFocusMovementPressGestureRecognizer

@property (retain, nonatomic) UIPress *trackingPress;

- (BOOL)_shouldReceivePress:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)configureDefaults;
- (unsigned long long)focusHeadingForPresses:(id)a0;

@end
