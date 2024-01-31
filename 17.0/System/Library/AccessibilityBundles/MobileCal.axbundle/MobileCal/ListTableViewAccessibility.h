@interface ListTableViewAccessibility : __ListTableViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (long long)accessibilityContainerType;
- (BOOL)_accessibilityFauxTableViewCellsDisabled;
- (id)_accessibilityFirstContainedElementForTechnology:(id)a0 honoringGroups:(BOOL)a1 shouldAlwaysScroll:(BOOL)a2;
- (BOOL)_accessibilityOpaqueElementScrollsContentIntoView;

@end
