@interface SKUIStyledButtonAccessibility : __SKUIStyledButtonAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (BOOL)_axButtonType:(BOOL)a0;
- (BOOL)_accessibilityIsACategoryButton;
- (BOOL)_axIsCloseButton;
- (BOOL)_axIsShareButtonInConnect;
- (BOOL)_axIsPostButtonInConnect;

@end
