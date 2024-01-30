@class CAGradientLayer, NSArray, UICollectionView, PHFetchResult, PHAsset, UICollectionViewCellRegistration, NSString;
@protocol PUPeopleTileDelegate;

@interface PUPeopleTileViewController : PUTileViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, PUPeopleTileDelegate, PHPhotoLibraryChangeObserver>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CAGradientLayer *fadeLayer;
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) NSArray *sortedPeople;
@property (retain, nonatomic) PHFetchResult *unsortedFetchResult;
@property (weak, nonatomic) id<PUPeopleTileDelegate> peopleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sortedPersonsForFetchResult:(id)a0;
+ (struct CGSize { double x0; double x1; })tileSizeForTraitCollection:(id)a0;
+ (double)_interItemSpacingForTraitCollection:(id)a0;
+ (id)_fetchUnsortedPeopleForAsset:(id)a0;

- (void)photoLibraryDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)applyLayoutInfo:(id)a0;
- (void)becomeReusable;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewDidLoad;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)pushPeopleViewController:(id)a0;
- (void)presentPeopleViewController:(id)a0;
- (void)setDisplayAsset:(id)a0;
- (void)_reloadEverythingForAsset:(id)a0;
- (void)_peopleDidChange:(id)a0;
- (BOOL)_compare:(id)a0 to:(id)a1 ignoringIndices:(id)a2;

@end
