@interface CKConversationListCellAccessibility : __CKConversationListCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityUserInputLabels;
- (void)updateContentsForConversation:(id)a0;
- (id)_accessibilityCustomActionGroupIdentifier;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityRetainsCustomRotorActionSetting;
- (id)_axFromString;

@end
