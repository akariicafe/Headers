@class NSString, GKGameRecord, UIViewController;

@interface GKGameLayerCollectionDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (readonly, nonatomic) NSString *title;
@property (weak, nonatomic) UIViewController *presentationViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (double)cellSpacing;
- (long long)itemCount;
- (void)setupCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })standardCellSizeForCollectionView:(id)a0;
- (void)handleSelectionInCollectionView:(id)a0 forItemAtIndexPath:(id)a1;
- (id)initWithGameRecord:(id)a0;
- (void)prepareCell:(id)a0 forItemAtIndexPath:(id)a1;

@end
