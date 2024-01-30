@class NSArray, NSMutableDictionary, UICollectionView, NSString;
@protocol PUTopResultDelegate;

@interface PUSearchResultsTopResultTableViewCell : UITableViewCell <UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableDictionary *items;
@property (weak, nonatomic) id<PUTopResultDelegate> delegate;
@property (copy, nonatomic) NSArray *localAssetIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_setupCollectionView;
- (void)setAsset:(id)a0 image:(id)a1 forIndex:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })_collectionViewCellSize;
- (long long)numberOfItemsInCollectionView;
- (void)layoutSubviews;
- (void)_setupGestureRecognizer;
- (void)handleTap:(id)a0;

@end
