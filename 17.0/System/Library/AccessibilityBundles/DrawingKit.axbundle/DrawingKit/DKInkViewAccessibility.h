@interface DKInkViewAccessibility : __DKInkViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)accessibilityHint;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (id)_axDirectTouchTimer;
- (void)_axInvalidateTimerAndReschedule:(BOOL)a0;
- (BOOL)_axIsDirectTouchable;
- (void)_axSetDirectTouchTimer:(id)a0;
- (void)_axSetIsDirectTouchable:(BOOL)a0;

@end
