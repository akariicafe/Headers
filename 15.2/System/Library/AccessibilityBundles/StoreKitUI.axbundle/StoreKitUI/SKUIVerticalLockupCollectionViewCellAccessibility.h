@interface SKUIVerticalLockupCollectionViewCellAccessibility : __SKUIVerticalLockupCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilityFindPlayButton;
- (BOOL)_playAction:(id)a0;
- (BOOL)hasOnlyStringViews;
- (id)_accessibilitySupplementaryFooterViewsForThisCell:(BOOL)a0 includeText:(BOOL)a1;

@end
