@interface PKPassGroupViewAccessibility : __PKPassGroupViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityElementsHidden;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)accessibilityValue;
- (BOOL)shouldGroupAccessibilityChildren;
- (BOOL)_accessibilityScrollToVisible;
- (BOOL)_axIsBackFacing;
- (BOOL)_accessibilityDismissModalGroup;
- (BOOL)_axMoveCard:(id)a0 up:(BOOL)a1;
- (BOOL)_axIsCardFirstInPile;
- (BOOL)_axIsOnlyCardInPile;
- (BOOL)_axMoveCardDown:(id)a0;
- (BOOL)_axMoveCardUp:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_axSuperAccessibilityFrame;

@end
