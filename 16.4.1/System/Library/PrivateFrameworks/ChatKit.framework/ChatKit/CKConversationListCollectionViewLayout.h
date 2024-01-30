@class CKConversationListCollectionViewController;

@interface CKConversationListCollectionViewLayout : NSObject

@property (weak, nonatomic) CKConversationListCollectionViewController *conversationListController;

- (id)init;
- (void).cxx_destruct;
- (long long)_numberOfItemsInSection:(unsigned long long)a0;
- (double)_edgeToAvatarWidthForPinnedConversationLayoutStyle:(long long)a0;
- (id)_emptyLayoutSection;
- (double)_leadingSeparatorInsetForEnvironment:(id)a0;
- (double)_minimumEdgeToCellSpacingForLayoutStyle:(long long)a0;
- (long long)_pinnedConversationViewLayoutStyleForCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_sectionNeedsRecoverableDisclosureHeader:(long long)a0;
- (double)_totalVerticalRowSpacingForLayoutStyle:(long long)a0;
- (double)conversationCellHeight;
- (id)conversationListLayout;
- (id)focusFilterLayoutSectionForEnvironment:(id)a0;
- (long long)numberOfPinnedConversationColumnsForLayoutStyle:(long long)a0;
- (id)pinGridLayoutGroupForCollectionViewSize:(struct CGSize { double x0; double x1; })a0 numberOfItems:(long long)a1;
- (id)pinGridLayoutSectionForEnvironment:(id)a0 withNumberOfItems:(long long)a1 isShowingFocusFilterBanner:(BOOL)a2;
- (double)pinnedConversationCellHeightForLayoutStyle:(long long)a0 cellWidth:(double)a1;
- (id)pinningOnboardingTitleLayoutSectionForEnvironment:(id)a0;
- (id)rowLayoutSectionForEnvironment:(id)a0 withRowHeight:(double)a1 usingEstimatedRowHeight:(BOOL)a2 needsPinnedSectionSeparator:(BOOL)a3 forSection:(long long)a4;
- (id)tipKitLayoutSectionForEnvironment:(id)a0;
- (void)updatePinnedConversationViewLayoutStyle;
- (double)widthForPinnedConversationCellInCollectionViewOfSize:(struct CGSize { double x0; double x1; })a0 numberOfItems:(long long)a1;

@end
