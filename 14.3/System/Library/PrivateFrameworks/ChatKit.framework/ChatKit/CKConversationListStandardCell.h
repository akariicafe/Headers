@class UIImageView, CKAvatarView;

@interface CKConversationListStandardCell : CKConversationListCell {
    UIImageView *_unreadIndicatorImageView;
    CKAvatarView *_avatarView;
}

@property (nonatomic) BOOL showTypingIndicator;

+ (id)identifierForConversation:(id)a0;
+ (double)leadingLayoutMargin;

- (id)avatarView;
- (BOOL)_isCollapsed;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateAvatarView;
- (void).cxx_destruct;
- (void)forceUnreadIndicatorVisibility:(BOOL)a0 forConversation:(id)a1 animated:(BOOL)a2;
- (id)chevronImageView;
- (void)dealloc;
- (BOOL)_boundsShouldCollapseContent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLabelVisibility;
- (void)updateContentsForConversation:(id)a0;
- (void)prepareForReuse;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void)_stopTypingIndicator;
- (void)updateTypingIndicatorIfNeeded;
- (void)_resetTypingIndicator;
- (void)updateUnreadIndicatorWithImage:(id)a0 tintColor:(id)a1 animated:(BOOL)a2;
- (void)_startTypingIndicator;
- (void)_calculateLayoutFrames;
- (BOOL)_shouldShowAvatarForWidth:(double)a0;
- (void)layoutSubviews;
- (void)increaseContrastDidChange;
- (void)updateContentsForConversation:(id)a0 fastPreview:(BOOL)a1;
- (void)updateFromLabelWithText:(id)a0;
- (void)updateForEditing:(BOOL)a0;
- (void)updateUnreadIndicatorWithImage:(id)a0 tintColor:(id)a1;
- (void)updateWithForwardedConfigurationState:(unsigned long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)avatarView:(id)a0 orderedPropertiesForProperties:(id)a1 category:(id)a2;
- (BOOL)avatarView:(id)a0 shouldShowContact:(id)a1;
- (id)contactsForPreviewInteractionForAvatarView:(id)a0 suggestedKeysToFetch:(id)a1;
- (void)registerForEvents;
- (id)overrideImageDataForPreviewInteractionForAvatarView:(id)a0;

@end
