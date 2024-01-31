@interface CKMessageEntryViewAccessibility : __CKMessageEntryViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;
+ (BOOL)range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 containsEmptySelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (BOOL)accessibilityElementsHidden;
- (BOOL)accessibilityViewIsModal;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)keyCommandSend:(id)a0;
- (void)updateEntryView;
- (void)arrowButtonTapped:(id)a0;
- (void)browserButtonTapped:(id)a0;
- (void)collapsedPlaceholderLabelTapped:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 marginInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 shouldAllowImpact:(BOOL)a2 shouldShowSendButton:(BOOL)a3 shouldShowSubject:(BOOL)a4 shouldShowPluginButtons:(BOOL)a5 shouldShowCharacterCount:(BOOL)a6 traitCollection:(id)a7 shouldDisableAttachments:(BOOL)a8 shouldUseNonEmojiKeyboard:(BOOL)a9;
- (void)loadRecordedAudioViewsIfNeeded;
- (void)messageEntryRecordedAudioViewPressedDelete:(id)a0;
- (void)setShowMentionSuggestions:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)touchUpInsideSendButton:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (void)_accessibilityApplyArrowLabel;
- (void)_accessibilityApplyCancelButtonLabel;
- (void)_accessibilityApplyPhotoLabel;
- (BOOL)_accessibilityIsMediaJoystickVisible;
- (void)_accessibilityApplyBrowserLabel;
- (void)_accessibilityApplyAudioButtonLabel;
- (void)_accessibilityApplyEmojiButtonLabel;
- (void)_accessibilityApplyPlaceholderLabel;
- (void)_accessibilitySendButtonLabel;
- (void)_postSentAnnouncementIfNeeded;

@end
