@interface SKUICollectionViewAccessibility : __SKUICollectionViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)_accessibilityScrollToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forView:(id)a1;
- (BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
- (BOOL)accessibilityScrollDownPageSupported;
- (BOOL)accessibilityScrollUpPageSupported;

@end
