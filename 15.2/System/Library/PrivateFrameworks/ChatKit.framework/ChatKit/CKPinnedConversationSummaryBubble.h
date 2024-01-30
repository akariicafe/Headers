@class UILabel, CKPinnedConversationSummaryBubbleActivityItem, NSAttributedString;

@interface CKPinnedConversationSummaryBubble : CKPinnedConversationTailedActivityItemView

@property (retain, nonatomic) UILabel *summaryLabel;
@property (readonly, nonatomic) CKPinnedConversationSummaryBubbleActivityItem *summaryBubbleActivityItem;
@property (readonly, nonatomic) NSAttributedString *summaryText;

- (void)_updateSummaryLabel;
- (id)summaryLabelFont;
- (id)_summaryLabelTextColor;
- (id)initWithSummaryBubbleActivityItem:(id)a0;
- (void)contentSizeCategoryDidChange:(id)a0;
- (double)pillCornerRadius;
- (void).cxx_destruct;
- (long long)contentViewContentMode;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewPadding;
- (void)traitCollectionDidChange:(id)a0;
- (void)setActivityItem:(id)a0;
- (BOOL)supportsActivityItemViewContentScale;
- (void)setActivityItemViewContentScale:(long long)a0;
- (BOOL)supportsAlignmentWithOriginationSubAvatarFrame;

@end
