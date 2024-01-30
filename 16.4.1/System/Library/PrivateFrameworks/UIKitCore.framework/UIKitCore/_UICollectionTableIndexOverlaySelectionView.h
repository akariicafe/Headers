@class NSString, _UICollectionTableIndexOverlaySelectionViewCollectionViewFlowLayout, UICollectionView;
@protocol _UICollectionTableIndexOverlayHost;

@interface _UICollectionTableIndexOverlaySelectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
    _UICollectionTableIndexOverlaySelectionViewCollectionViewFlowLayout *_flowLayout;
    id<_UICollectionTableIndexOverlayHost> _host;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)reloadData;
- (id)initWithHost:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_setIndexColor:(id)a0;
- (void)_cellTapped:(id)a0;
- (void)_doneTapped;

@end
