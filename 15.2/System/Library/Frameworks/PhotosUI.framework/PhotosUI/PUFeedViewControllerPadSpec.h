@interface PUFeedViewControllerPadSpec : PUFeedViewControllerSpec

- (long long)promptStyle;
- (struct CGSize { double x0; double x1; })thumbnailSize;
- (id)gridSpec;
- (BOOL)shouldShowInvitationsInPopover;
- (id)popoverFeedViewControllerSpec;
- (id)photosPickerSpec;
- (struct CGSize { double x0; double x1; })thumbnailSizeForImageSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldUseAspectThumbnails;
- (BOOL)shouldShowCommentBadgesInCollectionViewType:(long long)a0;
- (long long)configurationForSectionHeaderType:(long long)a0 collectionViewType:(long long)a1;
- (void)configureSeparatorMetrics:(inout struct PUFeedSeparatorMetrics { struct CGSize { double x0; double x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; } *)a0 betweenSectionWithInfo:(id)a1 andSectionWithInfo:(id)a2 joined:(BOOL)a3 collectionViewType:(long long)a4;
- (void)configureCommentSeparatorMetrics:(inout struct PUFeedSeparatorMetrics { struct CGSize { double x0; double x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; } *)a0;
- (void)getReferenceMaximumLength:(double *)a0 minimumNumberOfTilesToOmit:(long long *)a1 forSectionType:(long long)a2 collectionViewType:(long long)a3;
- (struct CGSize { double x0; double x1; })minimumVideoTileSize;
- (BOOL)shouldHideBarsInLandscape;
- (double)collectionViewContentInset;
- (void)configureFeedCollectionViewLayout:(id)a0 forCollectionViewType:(long long)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void)configureTextCell:(id)a0 forSectionGroupHeaderWithText:(id)a1 collectionViewType:(long long)a2;
- (void)configureTextCell:(id)a0 forSectionFooterWithActionText:(id)a1 collectionViewType:(long long)a2;
- (void)configureTextCell:(id)a0 forSectionHeaderWithDescriptionPhrase:(id)a1 streamDisclosureLabel:(id)a2 actionText:(id)a3 buttonType:(long long)a4 collectionViewType:(long long)a5 animated:(BOOL)a6;
- (id)emphasizedTextAttributesForCollectionViewType:(long long)a0;
- (id)defaultTextAttributesForCollectionViewType:(long long)a0;
- (long long)largeNumberOfSubjectsForLikes;
- (BOOL)shouldUseFullscreenLayout;
- (void)configureTextCell:(id)a0 forSectionFooterWithDateText:(id)a1 collectionViewType:(long long)a2;

@end
