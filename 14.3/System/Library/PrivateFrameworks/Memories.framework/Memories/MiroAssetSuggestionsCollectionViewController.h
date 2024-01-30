@class NSString, UICollectionView, NSArray, NSMutableArray, UIBarButtonItem;
@protocol MiroAssetSuggestionsCollectionViewControllerDelegate;

@interface MiroAssetSuggestionsCollectionViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (readonly, nonatomic) NSMutableArray *allAssets;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UIBarButtonItem *showAllButton;
@property (nonatomic) BOOL showDebugInterfaces;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSString *memoryLocalizedTitle;
@property (retain, nonatomic) NSArray *assets;
@property (weak, nonatomic) id<MiroAssetSuggestionsCollectionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_indexOAssetWithCreationDate:(id)a0 inChronologicallySortedAssets:(id)a1 insertionIndex:(unsigned long long *)a2;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)cancel:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 shouldDeselectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)done:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (id)_selectedAssets;
- (id)_assetAtIndex:(unsigned long long)a0;
- (void)showAll:(id)a0;
- (BOOL)assetsArePhotosOnly;
- (long long)_indexOfAssetID:(id)a0;
- (void)_updateDebugLabelsOnCell:(id)a0 withAsset:(id)a1;
- (void)_workaround_24890628_setupSplitScreenWidthConstraint:(id)a0;
- (void)_setupPopoverPresentationIfNecessary:(id)a0 fromView:(id)a1;
- (void)selectCellsWithAssetIDs:(id)a0;

@end
