@class NSString, __UIDiffableDataSource;

@interface UITableViewDiffableDataSource : NSObject <_UIDiffableDataSourceIdentifying, UITableViewDataSource>

@property (retain, nonatomic) __UIDiffableDataSource *impl;
@property (nonatomic) long long defaultRowAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)indexPathForItemIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isDiffableDataSource;
- (id)snapshot;
- (id)initWithViewUpdatesSink:(id)a0;
- (id)itemIdentifierForIndexPath:(id)a0;
- (id)_diffableDataSourceImpl;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithTableView:(id)a0 cellProvider:(id /* block */)a1;
- (void)_applySnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;

@end
