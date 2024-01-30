@interface CNMeCardSharingOnboardingAvatarCarouselLayout : UICollectionViewFlowLayout

+ (id)indexPathForNearestItemToCenterWithOffset:(struct CGPoint { double x0; double x1; })a0 collectionView:(id)a1 layout:(id)a2;

- (double)pagingLength;
- (double)pagingOrigin;
- (long long)selectedPageIndex;
- (double)pageOffsetForIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForElementAtIndex:(long long)a0 visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)indexesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 numberOfItems:(long long)a2;

@end
