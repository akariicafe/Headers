@class PXSidebarDataController, UICollectionViewDiffableDataSource, NSString;
@protocol PXSidebarOutlineSectionControllerDelegate;

@interface PXSidebarOutlineSectionController : NSObject <PXSidebarDataSourceControllerDelegate>

@property (readonly, nonatomic) PXSidebarDataController *dataController;
@property (readonly, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (nonatomic) BOOL animateDataSourceUpdates;
@property (weak, nonatomic) id<PXSidebarOutlineSectionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_expandItemIfNeeded:(id)a0 inSnapshot:(id)a1;
- (BOOL)_appendChildrenForParentIfNeeded:(id)a0 inSnapshot:(id)a1;
- (id)_applyChangeDetails:(id)a0 forItem:(id)a1 toSnapshot:(id)a2 outChangedItemsBeforeChange:(id *)a3 outChangedItemsAfterChange:(id *)a4;
- (void)_configureInitialSnapshotAnimated:(BOOL)a0 expandSubItems:(BOOL)a1 applyOnQueue:(id)a2;
- (void)_expandItem:(id)a0 inSnapshot:(id)a1;
- (id)_newSnapshotFromDataControllerWithRestoredExpansionState:(BOOL)a0;
- (void)_transferStateOfItem:(id)a0 oldSnapshot:(id)a1 toNewItem:(id)a2 newSnapshot:(id)a3;
- (void)appendChildrenForParentIfNeeded:(id)a0;
- (id)currentSectionSnapshot;
- (void)expandItemsForIdentifiersIfNeeded:(id)a0 animated:(BOOL)a1;
- (id)expandItemsToRevealFirstEditableItemIfNeededAnimated:(BOOL)a0;
- (id)initWithSidebarDataController:(id)a0 dataSource:(id)a1;
- (void)loadRootItems;
- (void)reloadFromDataControllerApplyAnimated:(BOOL)a0 onQueue:(id)a1;
- (void)sectionControllerWillCollapseItem:(id)a0;
- (void)sectionControllerWillExpandItem:(id)a0;
- (void)sidebarDataSourceController:(id)a0 didChangeChildrenOfItem:(id)a1 changeDetails:(id)a2;

@end
