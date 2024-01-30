@class PUSidebarReorderController, PXProgrammaticNavigationDestination, PHPhotoLibrary, NSString, _UIDiffableDataSourceOutlineSectionController, UICollectionViewDiffableDataSource, PUSidebarDataSectionEnablementController, UICollectionView, PUCollectionsCollectionViewDropDelegate, PXSidebarDataController, PXSidebarOutlineSectionController;
@protocol PXProgrammaticNavigationParticipant;

@interface PUSidebarViewController : UIViewController <UICollectionViewDelegate, PUCollectionsCollectionViewDropDataProvider, PUOutlineCellDelegate, PXAssetCollectionActionPerformerDelegate, PXSidebarOutlineSectionControllerDelegate, PXProgrammaticNavigationUpdateTarget, PXSplitViewControllerChangeObserver>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) _UIDiffableDataSourceOutlineSectionController *dataSourceSectionController;
@property (retain, nonatomic) PXSidebarOutlineSectionController *sidebarOutlineSectionController;
@property (retain, nonatomic) PUSidebarDataSectionEnablementController *sidebarDataSectionEnablementController;
@property (retain, nonatomic) PXSidebarDataController *sidebarDataController;
@property (retain, nonatomic) PUCollectionsCollectionViewDropDelegate *dropDelegate;
@property (retain, nonatomic) PXProgrammaticNavigationDestination *currentNavigationDestination;
@property (retain, nonatomic) PUSidebarReorderController *reorderController;
@property (nonatomic) long long suspendSelectionUpdatesMode;
@property (nonatomic) BOOL selectingAlreadySelectedIndexPath;
@property (readonly, nonatomic) id<PXProgrammaticNavigationParticipant> navigationRoot;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 targetIndexPathForMoveFromItemAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldSpringLoadItemAtIndexPath:(id)a1 withContext:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)_canSelectListItem:(id)a0;
- (void)splitViewControllerWillExpand:(id)a0;
- (id)initWithNavigationRoot:(id)a0 photoLibrary:(id)a1;
- (id)generateLayout;
- (void)sidebarOutlineSectionController:(id)a0 willApplySnapshotWithChangedItemsBeforeChange:(id)a1 changedItemsAfterChange:(id)a2 applyBlock:(id /* block */)a3;
- (void)configureViewHierarchy;
- (void)setupDataSectionManager;
- (void)_sectionControllerWillExpandItem:(id)a0;
- (void)_sectionControllerWillCollapseItem:(id)a0;
- (id)_collectionViewIndexPathForItemIdentifier:(id)a0;
- (void)_expandItemsForSelectedIndexPath:(id)a0 collectionToSelect:(id)a1 animated:(BOOL)a2;
- (void)_updateSelectedRowScrollToVisible:(BOOL)a0;
- (id)_backNavigationRootItemForItem:(id)a0;
- (void)_handleDidSelectListItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)_navigateToDestinationForItem:(id)a0 sameItem:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_triggerNavigationToDestination:(id)a0 animated:(BOOL)a1 suspendSelections:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_deleteItemTapped:(id)a0 completion:(id /* block */)a1;
- (void)_executeActionForActionItem:(id)a0 completionHandler:(id /* block */)a1;
- (id)_actionPerformerIdentifierForNavigationListItem:(id)a0;
- (id)_trailingSwipeActionConfigurationForIndexPath:(id)a0;
- (BOOL)_canReorderItem:(id)a0;
- (void)_didReorderItems:(id)a0 transaction:(id)a1;
- (void)_highlightNavigationDestination:(id)a0;
- (void)navigateToFallbackForDestination:(id)a0;
- (void)configureDataSource;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)ppt_runTabSwitchingTestWithName:(id)a0 options:(id)a1 delegate:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (id)collectionViewDropDelegate:(id)a0 collectionAtIndexPath:(id)a1;
- (id)actionPerformerDelegateForCollectionViewDropDelegate:(id)a0;
- (void)px_navigationDestinationWillChange:(id)a0;
- (void)outlineCell:(id)a0 updatedTitle:(id)a1 forItem:(id)a2;
- (void)viewDidLoad;

@end
