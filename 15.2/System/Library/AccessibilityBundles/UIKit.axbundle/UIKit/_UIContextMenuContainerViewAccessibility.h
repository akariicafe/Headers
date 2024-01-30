@interface _UIContextMenuContainerViewAccessibility : ___UIContextMenuContainerViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)accessibilityViewIsModal;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (BOOL)_accessibilityIsScrollAncestor;
- (BOOL)accessibilityScrollUpPage;
- (BOOL)accessibilityScrollToVisibleWithChild:(id)a0;
- (BOOL)accessibilityScrollDownPage;
- (BOOL)accessibilityScrollDownPageSupported;
- (BOOL)accessibilityScrollUpPageSupported;

@end
