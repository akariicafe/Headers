@interface UICollectionViewListCellAccessibility : __UICollectionViewListCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (BOOL)isAccessibilityElement;
- (void)_updateSystemTypeAccessoryView:(id)a0 withCellAccessory:(id)a1 orConfiguration:(id)a2 usingState:(id)a3;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityValue;
- (id)_accessibilitySupplementaryFooterViews;
- (long long)_accessibilityExpandedStatus;
- (BOOL)_accessibilityExpandedStatusTogglesOnActivate;
- (BOOL)_accessibilityIsSpeakThisElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityRetainsFocusOnScreenChange;
- (id)_privateAccessibilityCustomActions;
- (id)_accessibilityTrailingViews;

@end
