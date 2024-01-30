@interface SKUIStyledButtonAccessibility : __SKUIStyledButtonAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (BOOL)_accessibilityIsACategoryButton;
- (BOOL)_axButtonType:(BOOL)a0;
- (BOOL)_axIsCloseButton;
- (BOOL)_axIsPostButtonInConnect;
- (BOOL)_axIsShareButtonInConnect;

@end
