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

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (id)_sectionForIdentifier:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)_sectionAtIndex:(long long)a0;
- (id)layout;
- (void)viewDidAppear:(BOOL)a0;
- (id)_sectionAtIndexPath:(id)a0;
- (id)_cellRegistrationForSection:(id)a0 itemIdentifier:(id)a1 item:(id)a2;
- (id)_sectionIdentifierForIndex:(long long)a0;
- (id)_supplementaryRegistrationForSection:(id)a0 sectionIdentifier:(id)a1 elementKind:(id)a2;
- (void)reloadDataAnimated:(BOOL)a0;
- (void)_deselectCellsForce:(BOOL)a0;
- (void)_reloadDataForSections:(id)a0 recreateSnapshot:(BOOL)a1 animated:(BOOL)a2;
- (void)viewDidDismissModalView;
- (void)setSections:(id)a0 animated:(BOOL)a1;
- (id)cellForItem:(id)a0;
- (void)reloadItem:(id)a0 animated:(BOOL)a1;
- (void)deselectCells;
- (void)reloadDataForSectionIdentifier:(id)a0 animated:(BOOL)a1;

@end
