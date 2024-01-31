@interface HorizontalLockupCollectionViewCellAccessibility : __HorizontalLockupCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (id)_accessibilityUserTestingChildren;
- (id)_privateAccessibilityCustomActions;
- (BOOL)_axPerformCustomAction:(id)a0;
- (id)_accessibilityIndexPathForCell;
- (id)axCustomActionForContextualAction:(id)a0;
- (id)lockupViewCustomActions;
- (void)setLockupViewCustomActions:(id)a0;

@end
