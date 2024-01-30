@class PHPhotoLibrary, PXProgrammaticNavigationDestination, NSString, PXSidebarDataController, UICollectionViewDiffableDataSource, PUSidebarDataSectionEnablementController, PUCollectionsCollectionViewDropDelegate, UICollectionView, PXSidebarOutlineSectionController, PUSidebarReorderController;
@protocol PXProgrammaticNavigationParticipant;

@interface PUSidebarViewController : UIViewController <UICollectionViewDelegate, PUCollectionsCollectionViewDropDataProvider, PUOutlineCellDelegate, PXAssetCollectionActionPerformerDelegate, PXSidebarOutlineSectionControllerDelegate, PXCollectionActionReceiver, PXProgrammaticNavigationUpdateTarget, PXSplitViewControllerChangeObserver>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
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

- (void)newFolder:(id)a0;
- (BOOL)collectionView:(id)a0 shouldSpringLoadItemAtIndexPath:(id)a1 withContext:(id)a2;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)ppt_runTabSwitchingTestWithName:(id)a0 options:(id)a1 delegate:(id)a2 completionHandler:(id /* block */)a3;
- (void)viewDidLoad;
- (id)collectionView:(id)a0 targetIndexPathForMoveFromItemAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 selectionFollowsFocusForItemAtIndexPath:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)collectionViewDropDelegate:(id)a0 collectionAtIndexPath:(id)a1;
- (id)actionPerformerDelegateForCollectionViewDropDelegate:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (void)newAlbum:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)newSharedAlbum:(id)a0;
- (void)configureDataSource;
- (void)px_navigationDestinationWillChange:(id)a0;
- (void)newSmartAlbum:(id)a0;
- (void)outlineCell:(id)a0 updatedTitle:(id)a1 forItem:(id)a2;
- (void)splitViewControllerWillExpand:(id)a0;
- (void)sidebarOutlineSectionController:(id)a0 willApplySnapshotWithChangedItemsAfterChange:(id)a1 applyBlock:(id /* block */)a2;
- (id)initWithNavigationRoot:(id)a0 photoLibrary:(id)a1;
- (void)configureViewHierarchy;
- (id)generateLayout;
- (void)_updateHeaderCell:(id)a0 forListItem:(id)a1;
- (void)_updateOutlineCell:(id)a0 forListItem:(id)a1;
- (void)setupDataSectionManager;
- (id)_collectionViewIndexPathForItemIdentifier:(id)a0;
- (void)_updateSelectedRowScrollToVisible:(BOOL)a0;
- (id)_backNavigationRootItemForItem:(id)a0;
- (void)_handleDidSelectListItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)_navigateToDestinationForItem:(id)a0 sameItem:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_triggerNavigationToDestination:(id)a0 animated:(BOOL)a1 suspendSelections:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_performActionForType:(id)a0 completionHandler:(id /* block */)a1;
- (id)_trailingSwipeActionConfigurationForIndexPath:(id)a0;
- (void)_deleteItemTapped:(id)a0 completion:(id /* block */)a1;
- (void)_highlightNavigationDestination:(id)a0;
- (void)navigateToFallbackForDestination:(id)a0;

@end
