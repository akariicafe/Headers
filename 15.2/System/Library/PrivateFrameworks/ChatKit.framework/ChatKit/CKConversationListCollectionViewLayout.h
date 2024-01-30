@class CKConversationListCollectionViewController;

@interface CKConversationListCollectionViewLayout : NSObject

@property (weak, nonatomic) CKConversationListCollectionViewController *conversationListController;

- (void).cxx_destruct;
- (long long)_numberOfItemsInSection:(unsigned long long)a0;
- (id)init;
- (id)tipKitLayoutSectionForEnvironment:(id)a0;
- (id)pinGridLayoutSectionForEnvironment:(id)a0 withNumberOfItems:(long long)a1;
- (id)pinningOnboardingTitleLayoutSectionForEnvironment:(id)a0;
- (double)conversationCellHeight;
- (long long)_pinnedConversationViewLayoutStyleForCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)rowLayoutSectionForEnvironment:(id)a0 withRowHeight:(double)a1 usingEstimatedRowHeight:(BOOL)a2 needsPinnedSectionSeparator:(BOOL)a3;
- (id)_emptyLayoutSection;
- (long long)numberOfPinnedConversationColumnsForLayoutStyle:(long long)a0;
- (double)_edgeToAvatarWidthForPinnedConversationLayoutStyle:(long long)a0;
- (double)_minimumEdgeToCellSpacingForLayoutStyle:(long long)a0;
- (double)pinnedConversationCellHeightForLayoutStyle:(long long)a0 cellWidth:(double)a1;
- (double)_totalVerticalRowSpacingForLayoutStyle:(long long)a0;
- (id)pinGridLayoutGroupForCollectionViewSize:(struct CGSize { double x0; double x1; })a0 numberOfItems:(long long)a1;
- (id)conversationListLayout;
- (double)widthForPinnedConversationCellInCollectionViewOfSize:(struct CGSize { double x0; double x1; })a0 numberOfItems:(long long)a1;
- (void)updatePinnedConversationViewLayoutStyle;

@end
