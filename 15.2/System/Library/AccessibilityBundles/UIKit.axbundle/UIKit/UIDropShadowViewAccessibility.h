@interface UIDropShadowViewAccessibility : __UIDropShadowViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)_accessibilityIsScrollAncestor;
- (BOOL)accessibilityScrollUpPage;
- (BOOL)accessibilityScrollToVisibleWithChild:(id)a0;
- (BOOL)accessibilityScrollDownPage;
- (BOOL)accessibilityScrollDownPageSupported;
- (BOOL)accessibilityScrollUpPageSupported;
- (id)_axSheetPresentationController;

@end
