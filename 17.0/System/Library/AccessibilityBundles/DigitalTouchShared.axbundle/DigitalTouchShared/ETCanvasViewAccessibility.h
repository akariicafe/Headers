@interface ETCanvasViewAccessibility : __ETCanvasViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)accessibilityHint;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityElementsHidden;
- (BOOL)accessibilityActivate;
- (BOOL)_accessibilityServesAsFirstElement;
- (void)_checkForIdle;
- (void)_endMessage:(id)a0 withSend:(BOOL)a1;
- (void)_setIsComposingMessageOfType:(unsigned short)a0;
- (void)_accessibilityFocusChanged:(id)a0;
- (id)_accessibilityDisableDirectTouchTimer;
- (void)_accessibilityInvalidateDirectTouchTimerAndReschedule:(BOOL)a0;
- (BOOL)_accessibilityIsDirectTouching;
- (void)_accessibilitySetDisableDirectTouchTimer:(id)a0;
- (void)_accessibilitySetIsDirectTouching:(BOOL)a0;

@end
