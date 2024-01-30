@interface UICollectionViewListCellAccessibility : __UICollectionViewListCellAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_updateSystemTypeAccessoryView:(id)a0 withCellAccessory:(id)a1 orConfiguration:(id)a2 usingState:(id)a3;
- (BOOL)isAccessibilityElement;
- (long long)_accessibilityExpandedStatus;
- (void)accessibilityElementDidBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityLabel;
- (BOOL)_accessibilityIsSpeakThisElement;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilityUserTestingChildren;
- (id)_privateAccessibilityCustomActions;
- (id)accessibilityValue;
- (BOOL)_accessibilityRetainsFocusOnScreenChange;
- (BOOL)_accessibilityExpandedStatusTogglesOnActivate;
- (id)_accessibilityListConfiguration;
- (id)_accessibilityTrailingViews;
- (void)_accessibilityEnumerateCurrentConfigurationsWithBlock:(id /* block */)a0;
- (id)_axIgnoredConfigurationIdentifiers;
- (BOOL)_axCellSelectionTogglesExpansionState;

@end
