@class NSString, ICPaperStyleHeaderView;

@interface ICPaperStyleCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout>

@property (nonatomic) BOOL forPreferences;
@property (nonatomic) BOOL needsUpdateItemSpacing;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double itemSpacingVertical;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInsets;
@property (retain, nonatomic) ICPaperStyleHeaderView *headerViewMeasuringCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)updateSettings;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)indexPathFromSetting:(id)a0;
- (void)updateItemSpacing;
- (id)indexPathForInitialSelection;
- (id)settingFromIndexPath:(id)a0;
- (unsigned long long)paperStyleTypeFromIndexPath:(id)a0;
- (id)indexPathFromPaperStyleType:(unsigned long long)a0;
- (id)titleForHeaderView;
- (id)initWithLargeIcons:(BOOL)a0 forPreferences:(BOOL)a1;

@end
