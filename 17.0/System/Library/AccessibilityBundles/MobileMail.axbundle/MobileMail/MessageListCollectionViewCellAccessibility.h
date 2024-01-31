@interface MessageListCollectionViewCellAccessibility : __MessageListCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)prepareForReuse;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (id)accessibilityUserInputLabels;
- (void)accessibilityElementDidBecomeFocused;
- (id)_accessibilityCustomActionGroupIdentifier;
- (id)_accessibilityEquivalenceTag;
- (id)_accessibilityLinkedUIElements;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityRetainsCustomRotorActionSetting;
- (long long)_accessibilityScannerActivateBehavior;
- (id)_accessibilityScrollStatus;
- (id)_privateAccessibilityCustomActions;
- (id)_accessibilityMailboxController;
- (BOOL)_accessibilityArchiveAction:(id)a0;
- (BOOL)_accessibilityToggleReadAction:(id)a0;
- (BOOL)_accessibilityDeleteAction:(id)a0;
- (BOOL)_accessibilityIsThreadedChildCell;
- (BOOL)_accessibilityLaterAction:(id)a0;
- (BOOL)_accessibilityToggleFlagAction:(id)a0;
- (id)_accessibilityLabelWithoutAttributes;
- (BOOL)_accessibilityMoreAction:(id)a0;
- (void)_accessibilityPerformCellAction:(long long)a0;
- (BOOL)_accessibilityScreenAction:(id)a0;
- (unsigned long long)_accessibilityThreadCount;
- (id)_accessibilityThreadedDisclosureButton;
- (BOOL)_accessibilityToggleThreadAction:(id)a0;
- (void)_axPostAnnouncementForActionCompletionIfNecessary;
- (void)_axProcessMailLabel:(id)a0 children:(id)a1;
- (void)_axSetDisclosureButtonTraits;

@end
