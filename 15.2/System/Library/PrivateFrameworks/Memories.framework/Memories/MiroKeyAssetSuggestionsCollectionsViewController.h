@interface MiroKeyAssetSuggestionsCollectionsViewController : MiroAssetSuggestionsCollectionViewController

@property BOOL viewInitialLayout;

- (BOOL)collectionView:(id)a0 shouldDeselectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)_customizeKeyAssetPickerLayoutWithSize:(struct CGSize { double x0; double x1; })a0;

@end
