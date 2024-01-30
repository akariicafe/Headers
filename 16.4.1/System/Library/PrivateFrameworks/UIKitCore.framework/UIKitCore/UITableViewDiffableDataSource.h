@class NSString, __UIDiffableDataSource;

@interface UITableViewDiffableDataSource : NSObject <_UIDiffableDataSourceIdentifying, UITableViewDataSource>

@property (retain, nonatomic) __UIDiffableDataSource *impl;
@property (nonatomic) long long defaultRowAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemIdentifierForIndexPath:(id)a0;
- (BOOL)_isDiffableDataSource;
- (id)initWithTableView:(id)a0 cellProvider:(id /* block */)a1;
- (id)_diffableDataSourceImpl;
- (id)sectionIdentifierForIndex:(long long)a0;
- (id)initWithViewUpdatesSink:(id)a0;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (id)indexPathForItemIdentifier:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)validateIdentifiers;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)indexForSectionIdentifier:(id)a0;
- (id)snapshot;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_applySnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_subclassOverridesMethodWithSelector:(SEL)a0;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1;
- (void)applySnapshotUsingReloadData:(id)a0;
- (void)applySnapshotUsingReloadData:(id)a0 completion:(id /* block */)a1;

@end
