@interface CKTranscriptCollectionViewControllerAccessibility : __CKTranscriptCollectionViewControllerAccessibility_super

@property (nonatomic) BOOL axBuddyWasTyping;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)chatItemsDidChange:(id)a0;
- (void)effectManager:(id)a0 didStartEffect:(id)a1;
- (id)_accessibilitySpeakThisElementsAndStrings;
- (void)_accessibilityLoadMessagesIfNeeded;
- (BOOL)axIsShowingChatController;

@end
