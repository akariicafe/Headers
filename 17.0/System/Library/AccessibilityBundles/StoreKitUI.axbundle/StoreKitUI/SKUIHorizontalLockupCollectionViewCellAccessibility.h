@interface SKUIHorizontalLockupCollectionViewCellAccessibility : __SKUIHorizontalLockupCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)layoutSubviews;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilityScrollParentForComparingByXAxis;
- (BOOL)accessibilityScrollToVisible;

@end
