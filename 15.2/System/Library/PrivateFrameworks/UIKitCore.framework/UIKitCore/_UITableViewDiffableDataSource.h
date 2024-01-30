@class UITableView;

@interface _UITableViewDiffableDataSource : _UIDiffableDataSourceSnapshotter

@property (nonatomic) long long defaultRowAnimation;
@property (readonly, weak, nonatomic) UITableView *tableView;

- (id)initWithTableView:(id)a0 cellProvider:(id /* block */)a1;
- (id)initWithTableView:(id)a0 reuseIdentifierProvider:(id /* block */)a1 cellConfigurationHandler:(id /* block */)a2;

@end
