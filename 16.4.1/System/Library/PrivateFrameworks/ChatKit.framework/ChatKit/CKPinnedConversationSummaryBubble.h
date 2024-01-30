@class UILabel, CKPinnedConversationSummaryBubbleActivityItem, NSAttributedString;

@interface CKPinnedConversationSummaryBubble : CKPinnedConversationTailedActivityItemView

@property (retain, nonatomic) UILabel *summaryLabel;
@property (readonly, nonatomic) CKPinnedConversationSummaryBubbleActivityItem *summaryBubbleActivityItem;
@property (readonly, nonatomic) NSAttributedString *summaryText;

- (void)contentSizeCategoryDidChange:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (double)pillCornerRadius;
- (id)_summaryLabelTextColor;
- (void)_updateSummaryLabel;
- (long long)contentViewContentMode;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewPadding;
- (id)initWithSummaryBubbleActivityItem:(id)a0;
- (void)setActivityItem:(id)a0;
- (void)setActivityItemViewContentScale:(long long)a0;
- (id)summaryLabelFont;
- (BOOL)supportsActivityItemViewContentScale;
- (BOOL)supportsAlignmentWithOriginationSubAvatarFrame;

@end
