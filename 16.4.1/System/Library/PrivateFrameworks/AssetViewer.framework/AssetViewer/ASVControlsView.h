@class UIAccessibilityHUDGestureManager, NSString, UIStackView;

@interface ASVControlsView : UIView <UIAccessibilityHUDGestureDelegate>

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIAccessibilityHUDGestureManager *largeTextHUDGestureManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_accessibilityHUDGestureManager:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)_accessibilityHUDGestureManager:(id)a0 HUDItemForPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_accessibilityHUDGestureManager:(id)a0 gestureLiftedAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)initWithArrangedSubviews:(id)a0;
- (id)_buttonAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
