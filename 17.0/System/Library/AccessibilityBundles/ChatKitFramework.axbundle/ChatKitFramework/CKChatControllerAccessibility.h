@interface CKChatControllerAccessibility : __CKChatControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)_dealloc;
- (void)_showPhotoPickerWithSourceType:(long long)a0;
- (BOOL)accessibilityPerformEscape;
- (void)_showVCalViewerForMediaObject:(id)a0;
- (void)actionMenuGestureRecognizerButtonGestureDidEnd:(id)a0;
- (void)dismissInlineReplyController:(BOOL)a0;
- (void)dragManagerDidBeginDragging:(id)a0;
- (void)dragManagerDidEndDragging:(id)a0;
- (id)editingToolbarItems;
- (void)messageEntryViewSendButtonHit:(id)a0;
- (void)sendSticker:(id)a0 withDragTarget:(id)a1 draggedSticker:(id)a2;
- (void)setEffectPickerWindow:(id)a0;
- (void)showInlineReplyControllerForChatItem:(id)a0 presentKeyboard:(BOOL)a1;
- (void)transcriptCollectionViewController:(id)a0 willBeginImpactEffectAnimationWithSendAnimationContext:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilitySpeakThisElementsAndStrings;
- (void)_axSetCurrentTargetBalloonView:(id)a0;
- (void)_accessibilityReloadElementRelations:(BOOL)a0;
- (long long)_axCurrentLayoutIntent;
- (id)_axCurrentTargetBalloonView;
- (id)_axDescriptionForMessageEffectIdentifier:(id)a0;
- (id)_axFocusedChatItemElement;
- (unsigned long long)_axLayoutIntentForTarget:(id)a0 inBalloonView:(id)a1;
- (void)_axSetCurrentLayoutIntent:(long long)a0;
- (void)_axSetFocusedChatItemElement:(id)a0;
- (void)_axUpdateEditingToolbarItems:(id)a0;

@end
