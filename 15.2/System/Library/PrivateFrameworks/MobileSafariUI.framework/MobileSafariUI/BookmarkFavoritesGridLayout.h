@class NSSet, NSDictionary;

@interface BookmarkFavoritesGridLayout : UICollectionViewFlowLayout {
    NSSet *_deletedIndexPaths;
    NSSet *_insertedIndexPaths;
    NSSet *_reloadedIndexPaths;
    NSDictionary *_originIndexPathsForAppearingIndexPaths;
    NSDictionary *_destinationIndexPathsForDisappearingIndexPaths;
    BOOL _disableScaleTransforms;
}

- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (void).cxx_destruct;
- (void)finalizeCollectionViewUpdates;

@end
