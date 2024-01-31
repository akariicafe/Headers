@interface PUTilingViewAccessibility : __PUTilingViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)canBecomeFocused;
- (BOOL)_isEligibleForFocusInteraction;
- (BOOL)accessibilityPerformEscape;
- (id)_accessibilityScrollStatus;
- (double)_accessibilityScrollWidthDistance;
- (struct CGSize { double x0; double x1; })_accessibilityContentSize;

@end
