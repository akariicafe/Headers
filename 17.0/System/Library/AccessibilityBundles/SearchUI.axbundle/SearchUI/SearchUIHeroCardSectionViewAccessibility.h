@interface SearchUIHeroCardSectionViewAccessibility : __SearchUIHeroCardSectionViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)buttonPressed:(id)a0;
- (BOOL)_axPerformCustomAction:(id)a0;
- (unsigned long long)_axApplicationForBundleIdentifier:(id)a0;
- (id)_axCachedBundleIdentifiers;
- (id)_axCommandButtons;
- (id)_axLocalizedKeyForBundleID:(id)a0;
- (void)_axSetCachedBundleIdentifiers:(id)a0;
- (BOOL)_axWatchListStateForButton:(id)a0;

@end
