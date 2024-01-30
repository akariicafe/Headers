@class NSArray, NSString, UICollectionView, UICollectionViewDiffableDataSource, NSDictionary, NSMutableDictionary;

@interface PKDynamicCollectionViewController : UIViewController <PKPaymentSetupViewControllerLifeCycleDelegate, UICollectionViewDelegate> {
    UICollectionViewDiffableDataSource *_dataSource;
    NSArray *_sectionIdentifiers;
    NSDictionary *_sectionMap;
    NSMutableDictionary *_supplementaryViewRegistrations;
    NSMutableDictionary *_itemsMap;
    NSMutableDictionary *_cellRegistrations;
    BOOL _viewDidAppear;
    BOOL _isViewControllerActive;
}

@property (readonly, nonatomic) NSArray *sections;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL deselectSelectedCellsOnViewWillAppear;
@property (nonatomic) BOOL retainCellSelectionCellOnReload;
@property (nonatomic) BOOL useItemIdentityWhenUpdating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)layout;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemsAtIndexPaths:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)_sectionForIdentifier:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)_sectionAtIndex:(long long)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)_cellRegistrationForSection:(id)a0 itemIdentifier:(id)a1 item:(id)a2;
- (void)_deselectCellsForce:(BOOL)a0;
- (id)_indexPathForItem:(id)a0;
- (id)_indexPathForItemIdentifier:(id)a0;
- (void)_reloadDataForSections:(id)a0 recreateSnapshot:(BOOL)a1 animated:(BOOL)a2;
- (void)_reloadSectionMapForSections:(id)a0 animated:(BOOL)a1;
- (id)_sectionAtIndexPath:(id)a0;
- (id)_sectionIdentifierForIndex:(long long)a0;
- (id)_supplementaryRegistrationForSection:(id)a0 sectionIdentifier:(id)a1 elementKind:(id)a2;
- (id)cellForItem:(id)a0;
- (void)deselectCells;
- (void)reconfigureHeaderAndFooterForSectionIdentifier:(id)a0;
- (void)reloadDataAnimated:(BOOL)a0;
- (void)reloadDataForSection:(id)a0 animated:(BOOL)a1;
- (void)reloadDataForSectionIdentifier:(id)a0 animated:(BOOL)a1;
- (void)reloadDataWithoutRebuildingDataStores;
- (void)reloadItem:(id)a0 animated:(BOOL)a1;
- (void)scrollToItem:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (void)setSections:(id)a0 animated:(BOOL)a1;
- (void)viewDidDismissModalView;

@end
