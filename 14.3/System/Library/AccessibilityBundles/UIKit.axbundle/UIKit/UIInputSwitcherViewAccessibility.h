@interface UIInputSwitcherViewAccessibility : __UIInputSwitcherViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)updateSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityViewIsModal;
- (id)accessibilityIdentifier;
- (void)willFadeForSelectionAtIndex:(unsigned long long)a0;
- (void)_segmentControlValueDidChange:(id)a0;
- (id)_accessibilityLastHandednessBiasAnnouncement;
- (void)_accessibilitySetLastHandednessBiasAnnouncement:(id)a0;

@end
