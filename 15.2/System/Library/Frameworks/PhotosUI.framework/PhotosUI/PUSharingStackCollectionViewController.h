@class NSArray, NSMutableDictionary, NSString, PUSharingStackCollectionViewLayout;
@protocol PUSharingStackCollectionViewControllerDataSource, PXUIImageProvider;

@interface PUSharingStackCollectionViewController : UICollectionViewController <PUSharingStackCollectionViewLayoutDelegate>

@property (readonly, nonatomic) PUSharingStackCollectionViewLayout *stackLayout;
@property (retain, nonatomic) id<PXUIImageProvider> imageProvider;
@property (retain, nonatomic) NSMutableDictionary *layoutItemsByAssets;
@property (nonatomic) long long currentRotationDirection;
@property (nonatomic) long long currentVerticalAdjustmentDirection;
@property (nonatomic) unsigned long long numberOfItems;
@property (retain, nonatomic) NSArray *assets;
@property (nonatomic) BOOL needsUpdate;
@property (weak, nonatomic) id<PUSharingStackCollectionViewControllerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)sharingStackCollectionViewLayout:(id)a0 layoutItemForItemAtIndexPath:(id)a1;
- (id)initWithCollectionViewLayout:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updatePhotoForAsset:(id)a0 cell:(id)a1 atIndexPath:(id)a2;
- (void)_updateCell:(id)a0 forItemAtIndexPath:(id)a1;
- (id)initWithImageProvider:(id)a0;
- (void)invalidateContent;
- (struct CGSize { double x0; double x1; })_sizeForAsset:(id)a0;
- (id)_layoutItemInputForAsset:(id)a0 atIndex:(long long)a1;

@end
