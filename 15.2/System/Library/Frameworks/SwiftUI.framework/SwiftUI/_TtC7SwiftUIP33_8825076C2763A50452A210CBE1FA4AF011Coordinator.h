@interface _TtC7SwiftUIP33_8825076C2763A50452A210CBE1FA4AF011Coordinator : SwiftUI.PlatformViewCoordinator <UICollectionViewDataSource, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ selectedIndex;
    void /* unknown type, empty encoding */ children;
    void /* unknown type, empty encoding */ lastIDs;
    void /* unknown type, empty encoding */ pendingSeenIndex;
    void /* unknown type, empty encoding */ lastSeenIndex;
    void /* unknown type, empty encoding */ pendingSelectedIndex;
}

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
