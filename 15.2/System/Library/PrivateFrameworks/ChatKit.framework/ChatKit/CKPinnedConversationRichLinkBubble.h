@class NSString, CKPinnedConversationRichLinkActivityItem, LPLinkView;

@interface CKPinnedConversationRichLinkBubble : CKPinnedConversationTailedActivityItemView <LPLinkViewDelegate> {
    double _pillCornerRadius;
    long long _activityItemViewContentScale;
}

@property (retain, nonatomic) LPLinkView *linkView;
@property (readonly, nonatomic) CKPinnedConversationRichLinkActivityItem *richLinkActivityItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentSizeCategoryDidChange:(id)a0;
- (double)pillCornerRadius;
- (id)_linkViewFromActivityItem:(id)a0;
- (void)_updateLinkMetadata;
- (void).cxx_destruct;
- (id)initWithRichLinkActivityItem:(id)a0;
- (void)_updatePillCornerRadius;
- (long long)contentViewContentMode;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewPadding;
- (double)contentViewHorizontalInsetForPillCornerRadius;
- (void)linkViewNeedsResize:(id)a0;
- (void)setActivityItem:(id)a0;
- (BOOL)supportsActivityItemViewContentScale;
- (long long)activityItemViewContentScale;
- (void)setActivityItemViewContentScale:(long long)a0;
- (BOOL)supportsAlignmentWithOriginationSubAvatarFrame;

@end
