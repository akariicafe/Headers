@interface CKConversationListCollectionViewControllerAccessibility : __CKConversationListCollectionViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidAppear:(BOOL)a0;
- (void)_updateToolbarItems;
- (void)pinConversation:(id)a0 withReason:(id)a1;
- (void)unpinConversation:(id)a0 withReason:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;

@end
