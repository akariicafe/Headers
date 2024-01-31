@interface SKUITextBoxViewAccessibility : __SKUITextBoxViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (void)_accessibilitySwitchOrderedChildrenFrom:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame:(id)a0;
- (id)accessibilityLabel:(id)a0;
- (unsigned long long)accessibilityTraits:(id)a0;
- (BOOL)isAccessibilityElement:(id)a0;

@end
