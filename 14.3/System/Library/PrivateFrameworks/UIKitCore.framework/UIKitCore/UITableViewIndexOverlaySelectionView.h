@class UITableView, NSString, UICollectionView, UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout;

@interface UITableViewIndexOverlaySelectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
    UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout *_flowLayout;
    UITableView *_table;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)reloadData;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_doneTapped;
- (id)initWithTable:(id)a0;
- (void)_cellTapped:(id)a0;
- (void)_setIndexColor:(id)a0;

@end
