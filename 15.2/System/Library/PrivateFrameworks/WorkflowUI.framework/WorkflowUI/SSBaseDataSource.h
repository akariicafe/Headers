@class NSString, UICollectionView, UIView, UITableView;

@interface SSBaseDataSource : NSObject <UITableViewDataSource, UICollectionViewDataSource>

@property (nonatomic) long long cachedSeparatorStyle;
@property (weak, nonatomic) Class cellClass;
@property (copy, nonatomic) id /* block */ cellConfigureBlock;
@property (copy, nonatomic) id /* block */ cellCreationBlock;
@property (retain, nonatomic) UIView *emptyView;
@property (weak, nonatomic) UITableView *tableView;
@property (nonatomic) long long rowAnimation;
@property (copy, nonatomic) id /* block */ tableActionBlock;
@property (copy, nonatomic) id /* block */ tableDeletionBlock;
@property (copy, nonatomic) id /* block */ tableMoveBlock;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) Class collectionViewSupplementaryElementClass;
@property (copy, nonatomic) id /* block */ collectionSupplementaryCreationBlock;
@property (copy, nonatomic) id /* block */ collectionSupplementaryConfigureBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)indexPathArrayWithIndexSet:(id)a0 inSection:(long long)a1;
+ (id)indexPathArrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inSection:(long long)a1;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reloadData;
- (unsigned long long)numberOfItems;
- (long long)numberOfSectionsInTableView:(id)a0;
- (unsigned long long)numberOfSections;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)itemAtIndexPath:(id)a0;
- (unsigned long long)numberOfItemsInSection:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)moveSectionAtIndex:(long long)a0 toIndex:(long long)a1;
- (id)indexPathForItem:(id)a0;
- (void)_updateEmptyView;
- (void)insertSectionsAtIndexes:(id)a0;
- (void)deleteSectionsAtIndexes:(id)a0;
- (void)configureCell:(id)a0 forItem:(id)a1 parentView:(id)a2 indexPath:(id)a3;
- (void)insertCellsAtIndexPaths:(id)a0;
- (void)deleteCellsAtIndexPaths:(id)a0;
- (void)reloadCellsAtIndexPaths:(id)a0;
- (void)moveCellAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (void)reloadSectionsAtIndexes:(id)a0;

@end
