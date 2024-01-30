@interface SKUICardViewElementCollectionViewCellAccessibility : __SKUICardViewElementCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityActivate;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_axLockupElements;
- (id)_axAdornedImageElement;
- (id)_accessibilityFindPlayButton;

@end
