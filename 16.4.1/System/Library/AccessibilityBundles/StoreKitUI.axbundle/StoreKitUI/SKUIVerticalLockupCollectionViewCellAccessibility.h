@interface SKUIVerticalLockupCollectionViewCellAccessibility : __SKUIVerticalLockupCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityElements;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilityFindPlayButton;
- (id)_accessibilitySupplementaryFooterViewsForThisCell:(BOOL)a0 includeText:(BOOL)a1;
- (BOOL)_playAction:(id)a0;
- (BOOL)hasOnlyStringViews;

@end
