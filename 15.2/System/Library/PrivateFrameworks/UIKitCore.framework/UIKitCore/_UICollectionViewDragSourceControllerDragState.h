@class NSArray, NSPointerArray, NSMutableOrderedSet, NSIndexPath;

@interface _UICollectionViewDragSourceControllerDragState : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *dataSourceIndexPathsOfDraggingItems;
@property (retain, nonatomic) NSPointerArray *dragItemsWithRebasableIndexPaths;
@property (readonly, nonatomic) NSIndexPath *dragFromDataSourceIndexPath;
@property (readonly, nonatomic) NSArray *draggingDataSourceIndexPaths;
@property (nonatomic) BOOL dragItemsCreatedForReordering;

- (void)setDataSourceIndexPath:(id)a0 forDragItem:(id)a1 collectionView:(id)a2;
- (id)dataSourceIndexPathForDragItem:(id)a0 forCollectionView:(id)a1;
- (id)description;
- (void)rebaseDataSourceIndexPathsWithUpdateMap:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isDraggingFromDataSourceIndexPath:(id)a0;
- (void)addDraggingDataSourceIndexPath:(id)a0;

@end
