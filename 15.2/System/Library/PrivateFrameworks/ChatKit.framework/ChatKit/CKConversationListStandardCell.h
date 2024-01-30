@class UIImageView, CKAvatarView;

@interface CKConversationListStandardCell : CKConversationListCell {
    UIImageView *_unreadIndicatorImageView;
    CKAvatarView *_avatarView;
}

@property (nonatomic) BOOL showTypingIndicator;

+ (id)identifierForConversation:(id)a0;
+ (double)leadingLayoutMargin;

- (id)avatarView;
- (void)setMuted:(BOOL)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)chevronImageView;
- (id)avatarView:(id)a0 orderedPropertiesForProperties:(id)a1 category:(id)a2;
- (BOOL)avatarView:(id)a0 shouldShowContact:(id)a1;
- (id)contactsForPreviewInteractionForAvatarView:(id)a0 suggestedKeysToFetch:(id)a1;
- (id)overrideImageDataForPreviewInteractionForAvatarView:(id)a0;
- (void)forceUnreadIndicatorVisibility:(BOOL)a0 forConversation:(id)a1 animated:(BOOL)a2;
- (void)updateContentsForConversation:(id)a0;
- (BOOL)_isCollapsed;
- (void)_updateLabelVisibility;
- (BOOL)_boundsShouldCollapseContent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)increaseContrastDidChange;
- (void)updateContentsForConversation:(id)a0 fastPreview:(BOOL)a1;
- (void)updateFromLabelWithText:(id)a0;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void)updateForEditing:(BOOL)a0;
- (void)updateUnreadIndicatorWithImage:(id)a0 tintColor:(id)a1;
- (void)updateWithForwardedConfigurationState:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateAvatarView;
- (void)prepareForReuse;
- (void)_stopTypingIndicator;
- (void)updateTypingIndicatorIfNeeded;
- (void)_resetTypingIndicator;
- (void)updateUnreadIndicatorWithImage:(id)a0 tintColor:(id)a1 animated:(BOOL)a2;
- (void)_startTypingIndicator;
- (void)_calculateLayoutFrames;
- (BOOL)_shouldHideMuteIndicator;
- (BOOL)_shouldShowAvatarForWidth:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateSummaryLabelFrameForColumn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 summaryLabelCapFrameYOrigin:(double)a1 displayScale:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateIndicatorFrameForSize:(struct CGSize { double x0; double x1; })a0 trailing:(BOOL)a1 displayScale:(double)a2 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateRectVerticallyCenteredWithFirstTextLineOfLabel:(id)a0 horizontallyCenteredInColumn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 size:(struct CGSize { double x0; double x1; })a2 offset:(struct CGPoint { double x0; double x1; })a3;
- (void)registerForEvents;
- (void)dealloc;

@end
