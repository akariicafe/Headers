@class UICollectionView;

@interface SeymourUI.CatalogPage : NSObject <UICollectionViewDelegate, UICollectionViewDataSourcePrefetching> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ currentSnapshotBacking;
    void /* unknown type, empty encoding */ previousSnapshotBacking;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ impressionsTracker;
    void /* unknown type, empty encoding */ layoutSections;
    void /* unknown type, empty encoding */ locationStore;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ shelves;
    void /* unknown type, empty encoding */ sectionScrollOffsets;
    void /* unknown type, empty encoding */ pendingUpdatesCount;
    void /* unknown type, empty encoding */ registrationProviderByShelfID;
    void /* unknown type, empty encoding */ snapshotTimestamps;
    void /* unknown type, empty encoding */ viewFactory;
}

@property (nonatomic, readonly) UICollectionView *accessibilityCollectionView;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)a0;
- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (struct CGPoint { double x0; double x1; })collectionView:(id)a0 targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)collectionView:(id)a0 didUpdateFocusInContext:(id)a1 withAnimationCoordinator:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)rebuildLocations;
- (id)init;
- (void).cxx_destruct;

@end
