@class NSArray, NSPointerArray, NSMutableOrderedSet, NSIndexPath;

@interface _UICollectionViewDragSourceControllerDragState : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *dataSourceIndexPathsOfDraggingItems;
@property (retain, nonatomic) NSPointerArray *dragItemsWithRebasableIndexPaths;
@property (readonly, nonatomic) NSIndexPath *dragFromDataSourceIndexPath;
@property (readonly, nonatomic) NSArray *draggingDataSourceIndexPaths;
@property (nonatomic) BOOL dragItemsCreatedForReordering;

- (id)init;
- (void).cxx_destruct;
- (id)dataSourceIndexPathForDragItem:(id)a0 forCollectionView:(id)a1;
- (void)setDataSourceIndexPath:(id)a0 forDragItem:(id)a1 collectionView:(id)a2;
- (id)description;
- (BOOL)isDraggingFromDataSourceIndexPath:(id)a0;
- (void)addDraggingDataSourceIndexPath:(id)a0;
- (void)rebaseDataSourceIndexPathsWithUpdateMap:(id)a0;

@end
