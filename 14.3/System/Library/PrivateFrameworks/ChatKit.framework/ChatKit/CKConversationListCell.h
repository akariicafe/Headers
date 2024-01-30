@class NSDate, NSString, UILabel, CKConversationListTypingIndicatorView, UIImageView, CKConversation, UIButton, NSObject, CKLabel, CAGradientLayer, UIDateLabel, CKAvatarView;
@protocol CKConversationListCellDelegate;

@interface CKConversationListCell : UITableViewCell <CKConversationListCell> {
    UIDateLabel *_dateLabel;
    UILabel *_summaryLabel;
    CAGradientLayer *_gradient;
    UIButton *_closeButton;
    UILabel *_summaryBlockedLabel;
    UIImageView *_chevronImageView;
    CKLabel *_fromLabel;
    BOOL _isPlaceholder;
    CKConversationListTypingIndicatorView *_typingIndicatorView;
}

@property (retain, nonatomic) NSDate *searchMessageDate;
@property (copy, nonatomic) NSString *searchMessageGUID;
@property (copy, nonatomic) NSString *searchSummaryText;
@property (nonatomic) BOOL verified;
@property (nonatomic) BOOL shouldLabelsBeHighlighted;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerBounds;
@property (nonatomic) BOOL freezeSummaryText;
@property (retain, nonatomic) CKConversation *conversation;
@property (nonatomic) BOOL _editingPins;
@property (readonly, nonatomic) CKAvatarView *avatarView;
@property (readonly, nonatomic) CKLabel *fromLabel;
@property (nonatomic) BOOL shouldHidePreviewSummary;
@property (weak, nonatomic) NSObject<CKConversationListCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightForDisplayScale:(double)a0;
+ (id)identifierForConversation:(id)a0;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)contentSizeCategoryDidChange;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)dateLabel;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)dealloc;
- (void)updateWithSearchResult:(id)a0;
- (void)updateContentsForConversation:(id)a0;
- (void)prepareForReuse;
- (unsigned long long)unreadMessageCount;
- (void)didHoverOverCell:(id)a0;
- (void)deleteButtonTapped;
- (void)setEditingPins:(BOOL)a0 animated:(BOOL)a1;
- (id)summaryLabelTextColor;
- (void)_increaseContrastDidChange:(id)a0;
- (void)updateLabelTextColors;
- (void)updateUnreadIndicatorForCurrentConversation;
- (void)updateVerifiedCheckmarkForBusiness;
- (void)updateSummaryTextForConversation:(id)a0 fastPreview:(BOOL)a1;
- (void)increaseContrastDidChange;
- (void)updateContentsForConversation:(id)a0 fastPreview:(BOOL)a1;
- (void)updateFromLabelWithText:(id)a0;
- (id)_makeSummaryAttributedStringWithText:(id)a0 multiwayConversation:(id)a1;
- (void)updateBlockedSummaryLabelIfNeeded;
- (id)summaryLabel;
- (BOOL)showingEditControl;
- (void)_performBlock:(id /* block */)a0 animated:(BOOL)a1;
- (void)updateForEditing:(BOOL)a0;
- (id)unreadIndicatorImageForVisibility:(BOOL)a0 withMuteState:(BOOL)a1;
- (id)unreadIndicatorColorForVisibility:(BOOL)a0;
- (void)updateUnreadIndicatorWithImage:(id)a0 tintColor:(id)a1;
- (void)updateWithForwardedConfigurationState:(unsigned long long)a0;
- (id)summaryAttributedTextForBlockedConversationWithIcon:(BOOL)a0;
- (BOOL)lastMessageIsTypingIndicator;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
