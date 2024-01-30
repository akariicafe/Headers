@interface UICollectionViewListCellAccessibility : __UICollectionViewListCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)_accessibilityUserTestingChildren;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)_updateSystemTypeAccessoryView:(id)a0 withCellAccessory:(id)a1 orConfiguration:(id)a2 usingState:(id)a3;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityValue;
- (long long)_accessibilityExpandedStatus;
- (id)_accessibilitySupplementaryFooterViews;
- (BOOL)_accessibilityExpandedStatusTogglesOnActivate;
- (BOOL)_accessibilityIsSpeakThisElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityRetainsFocusOnScreenChange;
- (id)_privateAccessibilityCustomActions;
- (id)_accessibilityTrailingViews;

@end
