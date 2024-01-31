@interface STBarViewAccessibility : __STBarViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityParentForFindingScrollParent;
- (void)_accessibilitySetUnderlyingRepresentedTimePeriod:(unsigned long long)a0;
- (unsigned long long)_accessibilityUnderlyingRepresentedTimePeriod;

@end
