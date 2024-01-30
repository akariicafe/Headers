@class UICollectionView;

@interface _UICollectionViewDiffableDataSource : _UIDiffableDataSourceSnapshotter

@property (copy, nonatomic) id /* block */ supplementaryViewProvider;
@property (readonly, weak, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ supplementaryReuseIdentifierProvider;
@property (copy, nonatomic) id /* block */ supplementaryConfigurationHandler;

- (id)initWithCollectionView:(id)a0 cellProvider:(id /* block */)a1;
- (id)initWithCollectionView:(id)a0 reuseIdentifierProvider:(id /* block */)a1 cellConfigurationHandler:(id /* block */)a2;

@end
