@class UICollectionViewDiffableDataSource, PXSidebarOutlineSectionController;
@protocol PXNavigationListItem;

@interface PUSidebarReorderController : NSObject

@property (retain, nonatomic) id<PXNavigationListItem> itemToReorder;
@property (readonly, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, nonatomic) PXSidebarOutlineSectionController *sidebarOutlineSectionController;

- (void).cxx_destruct;
- (id)targetIndexPathForMoveFromItemAtIndexPath:(id)a0 toProposedIndexPath:(id)a1;
- (id)initWithDataSource:(id)a0 outlineSectionController:(id)a1;
- (void)performReorderWithTransaction:(id)a0;
- (BOOL)canReorderItem:(id)a0;

@end
