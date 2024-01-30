@interface GKLeaderboardCollectionDataSource : GKGameLayerCollectionDataSource

- (double)topMargin;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (double)cellSpacing;
- (double)headerSpacing;
- (double)preferredCollectionHeight;
- (void)setupCollectionView:(id)a0;
- (void)updateHighlightsInSectionHeader:(id)a0;
- (void)collectionView:(id)a0 updateLayoutForSectionHeader:(id)a1;
- (long long)allowedColumnCount:(long long)a0;

@end
