@interface UIInputSwitcherViewAccessibility : __UIInputSwitcherViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)updateSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityIdentifier;
- (void)_segmentControlValueDidChange:(id)a0;
- (BOOL)accessibilityViewIsModal;
- (void)highlightRow:(unsigned long long)a0;
- (void)willFadeForSelectionAtIndex:(unsigned long long)a0;
- (void)_axAnnounceSelectedLanguage:(id)a0;

@end
