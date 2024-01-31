@interface SFTabGroupCapsuleViewAccessibility : __SFTabGroupCapsuleViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityCapsuleCollectionView;
- (id)_accessibilityLabelFrom:(id)a0;
- (id)_accessibilityAllTabGroups;
- (id)_accessibilityScrollStatusFrom:(id)a0;
- (long long)_accessibilityIndexOfSelfIn:(id)a0;
- (id)_accessibilityTabGroupSwitcherViewControllerFrom:(id)a0;

@end
