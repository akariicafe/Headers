@interface SKUIVerticalLockupCollectionViewCellAccessibility : __SKUIVerticalLockupCollectionViewCellAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityCustomActions;
- (id)accessibilityValue;
- (id)_accessibilityFindPlayButton;
- (BOOL)_playAction:(id)a0;
- (BOOL)hasOnlyStringViews;
- (id)_accessibilitySupplementaryFooterViewsForThisCell:(BOOL)a0 includeText:(BOOL)a1;

@end
