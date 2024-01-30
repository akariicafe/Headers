@class NSString, __UIDiffableDataSource, UICollectionViewDiffableDataSourceReorderingHandlers, UICollectionViewDiffableDataSourceSectionSnapshotHandlers;

@interface UICollectionViewDiffableDataSource : NSObject <_UIDiffableDataSourceIdentifying, UICollectionViewDataSource>

@property (retain, nonatomic) __UIDiffableDataSource *impl;
@property (copy, nonatomic) id /* block */ _didReorderItemsHandler;
@property (copy, nonatomic) id /* block */ supplementaryViewProvider;
@property (copy, nonatomic) UICollectionViewDiffableDataSourceReorderingHandlers *reorderingHandlers;
@property (copy, nonatomic) UICollectionViewDiffableDataSourceSectionSnapshotHandlers *sectionSnapshotHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_registerItemRenderers:(id)a0 rendererIdentifierProvider:(id /* block */)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)initWithCollectionView:(id)a0 cellProvider:(id /* block */)a1;
- (id)initWithCollectionView:(id)a0 sectionControllers:(id)a1 rendererIdentifierProvider:(id /* block */)a2;
- (id)snapshotForSection:(id)a0;
- (void)applySnapshot:(id)a0 toSection:(id)a1 animatingDifferences:(BOOL)a2 completion:(id /* block */)a3;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)_snapshotForSection:(id)a0;
- (id)initWithCollectionView:(id)a0 itemRenderers:(id)a1 rendererIdentifierProvider:(id /* block */)a2;
- (id)indexPathForItemIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isDiffableDataSource;
- (id /* block */)_canReorderItemHandler;
- (id)snapshot;
- (id)initWithViewUpdatesSink:(id)a0;
- (void)applySnapshot:(id)a0 toSection:(id)a1 animatingDifferences:(BOOL)a2;
- (void)_setCanReorderItemHandler:(id /* block */)a0;
- (id)itemIdentifierForIndexPath:(id)a0;
- (id)_diffableDataSourceImpl;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (id)_associatedSectionControllerForSectionIdentifier:(id)a0;
- (void)_applySnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (void)_applySnapshot:(id)a0 toSection:(id)a1 animatingDifferences:(BOOL)a2 completion:(id /* block */)a3;
- (id)initWithCollectionView:(id)a0 itemRenderer:(id)a1;
- (id)_associatedSectionControllerForItemIdentifier:(id)a0;
- (id)collectionView;
- (void)_setDidReorderItemsHandler:(id /* block */)a0;

@end
