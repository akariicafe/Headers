@interface SKUIStyledButtonAccessibility : __SKUIStyledButtonAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)_axButtonType:(BOOL)a0;
- (BOOL)_accessibilityIsACategoryButton;
- (BOOL)_axIsCloseButton;
- (BOOL)_axIsShareButtonInConnect;
- (BOOL)_axIsPostButtonInConnect;

@end
