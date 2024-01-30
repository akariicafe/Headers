@interface SKUIHorizontalLockupCollectionViewCellAccessibility : __SKUIHorizontalLockupCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)layoutSubviews;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)accessibilityScrollToVisible;
- (id)_accessibilityScrollParentForComparingByXAxis;

@end
