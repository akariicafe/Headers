@interface UICollectionViewListCellAccessibility : __UICollectionViewListCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_updateSystemTypeAccessoryView:(id)a0 withCellAccessory:(id)a1 orConfiguration:(id)a2 usingState:(id)a3;
- (void)accessibilityElementDidBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (long long)_accessibilityExpandedStatus;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)_accessibilityIsSpeakThisElement;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_privateAccessibilityCustomActions;
- (BOOL)_accessibilityRetainsFocusOnScreenChange;
- (BOOL)_accessibilityExpandedStatusTogglesOnActivate;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityTrailingViews;

@end
