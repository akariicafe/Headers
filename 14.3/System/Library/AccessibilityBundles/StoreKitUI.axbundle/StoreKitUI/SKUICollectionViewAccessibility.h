@interface SKUICollectionViewAccessibility : __SKUICollectionViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
- (BOOL)accessibilityScrollDownPageSupported;
- (BOOL)accessibilityScrollUpPageSupported;
- (BOOL)_accessibilityScrollToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forView:(id)a1;

@end
