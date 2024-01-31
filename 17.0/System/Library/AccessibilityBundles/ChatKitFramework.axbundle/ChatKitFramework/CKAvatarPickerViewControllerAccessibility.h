@interface CKAvatarPickerViewControllerAccessibility : __CKAvatarPickerViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)setTitleView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_handleConversationRecipientsDidChange:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityIsBusinessConversation;
- (long long)_axConversationRecipientsCount;
- (void)_axExecuteBlockOnAvatarCells:(id /* block */)a0;
- (void)_axExposeTitleViewIfNeeded;
- (BOOL)_axIsPancakeMode;

@end
