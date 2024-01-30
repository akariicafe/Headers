@interface PUFeedViewControllerPhoneSpec : PUFeedViewControllerSpec

- (struct CGSize { double x0; double x1; })thumbnailSize;
- (long long)promptStyle;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textInsetsForHeadersAndFootersInSectionType:(long long)a0 collectionViewType:(long long)a1;
- (BOOL)canUseSimplePreheatManager;
- (long long)configurationForSectionHeaderType:(long long)a0 collectionViewType:(long long)a1;
- (void)configureFeedCollectionViewLayout:(id)a0 forCollectionViewType:(long long)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2 collectionViewContentInset:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a3;
- (void)configureTextCell:(id)a0 forSectionFooterWithActionText:(id)a1 collectionViewType:(long long)a2;
- (void)configureTextCell:(id)a0 forSectionGroupHeaderWithText:(id)a1 collectionViewType:(long long)a2;
- (void)configureTextCell:(id)a0 forSectionHeaderWithDescriptionPhrase:(id)a1 streamDisclosureLabel:(id)a2 actionText:(id)a3 buttonType:(long long)a4 collectionViewType:(long long)a5 animated:(BOOL)a6;
- (id)defaultTextAttributesForCollectionViewType:(long long)a0;
- (id)emphasizedTextAttributesForCollectionViewType:(long long)a0;
- (void)getReferenceMaximumLength:(double *)a0 minimumNumberOfTilesToOmit:(long long *)a1 forSectionType:(long long)a2 collectionViewType:(long long)a3;
- (id)gridSpec;
- (long long)largeNumberOfSubjectsForLikes;
- (struct CGSize { double x0; double x1; })minimumVideoTileSize;
- (BOOL)shouldHideBarsInLandscape;
- (BOOL)shouldUseFullscreenLayout;

@end
