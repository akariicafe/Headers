@class UILabel, CKPinnedConversationSummaryBubbleActivityItem, NSAttributedString;

@interface CKPinnedConversationSummaryBubble : CKPinnedConversationTailedActivityItemView

@property (retain, nonatomic) UILabel *summaryLabel;
@property (readonly, nonatomic) CKPinnedConversationSummaryBubbleActivityItem *summaryBubbleActivityItem;
@property (readonly, nonatomic) NSAttributedString *summaryText;

- (void).cxx_destruct;
- (void)setActivityItem:(id)a0;
- (BOOL)supportsActivityItemViewContentScale;
- (void)setActivityItemViewContentScale:(long long)a0;
- (BOOL)supportsAlignmentWithOriginationSubAvatarFrame;
- (long long)contentViewContentMode;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewPadding;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)_updateSummaryLabel;
- (id)summaryLabelFont;
- (id)_summaryLabelTextColor;
- (id)initWithSummaryBubbleActivityItem:(id)a0;
- (double)pillCornerRadius;
- (void)traitCollectionDidChange:(id)a0;

@end
