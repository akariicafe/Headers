@class UIImageView, CKAvatarView;

@interface CKConversationListStandardCell : CKConversationListCell

@property (retain, nonatomic) CKAvatarView *avatarView;
@property (nonatomic) BOOL showTypingIndicator;
@property (retain, nonatomic) UIImageView *unreadIndicatorImageView;

+ (id)identifierForConversation:(id)a0;
+ (double)leadingLayoutMargin;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)_isCollapsed;
- (void)_updateLabelVisibility;
- (void)setMuted:(BOOL)a0;
- (void)prepareForReuse;
- (void)dealloc;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void).cxx_destruct;
- (void)registerForEvents;
- (id)avatarView:(id)a0 orderedPropertiesForProperties:(id)a1 category:(id)a2;
- (BOOL)avatarView:(id)a0 shouldShowContact:(id)a1;
- (id)contactsForPreviewInteractionForAvatarView:(id)a0 suggestedKeysToFetch:(id)a1;
- (id)overrideImageDataForPreviewInteractionForAvatarView:(id)a0;
- (void)updateUnreadIndicatorWithImage:(id)a0;
- (BOOL)_boundsShouldCollapseContent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateIndicatorFrameForSize:(struct CGSize { double x0; double x1; })a0 trailing:(BOOL)a1 displayScale:(double)a2 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;
- (void)_calculateLayoutFrames;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateRectVerticallyCenteredWithFirstTextLineOfLabel:(id)a0 horizontallyCenteredInColumn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 size:(struct CGSize { double x0; double x1; })a2 offset:(struct CGPoint { double x0; double x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateSummaryLabelFrameForColumn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 summaryLabelCapFrameYOrigin:(double)a1 displayScale:(double)a2;
- (void)_configureDateLabelAppearanceForConversation:(id)a0;
- (void)_configureSummaryLabelAppearanceForConversation:(id)a0;
- (void)_resetTypingIndicator;
- (BOOL)_shouldHideMuteIndicator;
- (BOOL)_shouldHideUnreadIndicatorForEditing:(BOOL)a0;
- (BOOL)_shouldShowAvatarForWidth:(double)a0;
- (BOOL)_shouldShowTypingIndicatorForConversation:(id)a0;
- (void)_startTypingIndicator;
- (void)_stopTypingIndicator;
- (void)_updateAvatarView;
- (void)forceUnreadIndicatorVisibility:(BOOL)a0 forConversation:(id)a1 animated:(BOOL)a2;
- (void)increaseContrastDidChange;
- (void)updateContentsForConversation:(id)a0;
- (void)updateContentsForConversation:(id)a0 fastPreview:(BOOL)a1;
- (void)updateForEditing:(BOOL)a0;
- (void)updateFromLabelWithText:(id)a0;
- (void)updateTypingIndicatorIfNeeded;
- (void)updateUnreadIndicatorWithImage:(id)a0 animated:(BOOL)a1;
- (void)updateWithForwardedConfigurationState:(id)a0;

@end
