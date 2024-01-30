@class NSString, __UIDiffableDataSource;

@interface UITableViewDiffableDataSource : NSObject <_UIDiffableDataSourceIdentifying, UITableViewDataSource>

@property (retain, nonatomic) __UIDiffableDataSource *impl;
@property (nonatomic) long long defaultRowAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTableView:(id)a0 cellProvider:(id /* block */)a1;
- (id)_diffableDataSourceImpl;
- (id)sectionIdentifierForIndex:(long long)a0;
- (id)itemIdentifierForIndexPath:(id)a0;
- (void)validateIdentifiers;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)_isDiffableDataSource;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (void)_applySnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (void)applySnapshotUsingReloadData:(id)a0 completion:(id /* block */)a1;
- (id)snapshot;
- (void).cxx_destruct;
- (long long)indexForSectionIdentifier:(id)a0;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1;
- (id)initWithViewUpdatesSink:(id)a0;
- (void)applySnapshotUsingReloadData:(id)a0;
- (id)indexPathForItemIdentifier:(id)a0;

@end
