@interface PUTilingViewAccessibility : __PUTilingViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)_isEligibleForFocusInteraction;
- (BOOL)canBecomeFocused;
- (BOOL)accessibilityPerformEscape;
- (id)_accessibilityScrollStatus;
- (double)_accessibilityScrollWidthDistance;
- (struct CGSize { double x0; double x1; })_accessibilityContentSize;

@end
