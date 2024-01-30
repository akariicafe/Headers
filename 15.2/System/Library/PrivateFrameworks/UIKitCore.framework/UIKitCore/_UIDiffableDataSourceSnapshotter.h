@interface _UIDiffableDataSourceSnapshotter : _UIDiffableDataSource

- (void)applyDifferencesFromSnapshot:(id)a0 completion:(id /* block */)a1;
- (id)emptySnapshot;
- (void)reloadFromSnapshot:(id)a0 completion:(id /* block */)a1;
- (void)applyDifferencesFromSnapshot:(id)a0;
- (void)reloadFromSnapshot:(id)a0;
- (id)snapshot;
- (void)applySnapshot:(id)a0;

@end
