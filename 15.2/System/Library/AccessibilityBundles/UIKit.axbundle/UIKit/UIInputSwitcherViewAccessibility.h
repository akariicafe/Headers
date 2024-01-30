@interface UIInputSwitcherViewAccessibility : __UIInputSwitcherViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityIdentifier;
- (void)willFadeForSelectionAtIndex:(unsigned long long)a0;
- (void)_segmentControlValueDidChange:(id)a0;
- (BOOL)accessibilityViewIsModal;
- (void)updateSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;

@end
