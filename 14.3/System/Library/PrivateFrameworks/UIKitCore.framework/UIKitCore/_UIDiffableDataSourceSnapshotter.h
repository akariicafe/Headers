@interface _UIDiffableDataSourceSnapshotter : _UIDiffableDataSource

- (void)reloadFromSnapshot:(id)a0 completion:(id /* block */)a1;
- (void)reloadFromSnapshot:(id)a0;
- (void)applyDifferencesFromSnapshot:(id)a0;
- (id)emptySnapshot;
- (void)applySnapshot:(id)a0;
- (void)applyDifferencesFromSnapshot:(id)a0 completion:(id /* block */)a1;
- (id)snapshot;

@end
