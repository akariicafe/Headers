@protocol _SFTableViewDiffableDataSourceDelegate;

@interface _SFTableViewDiffableDataSource : UITableViewDiffableDataSource

@property (weak, nonatomic) id<_SFTableViewDiffableDataSourceDelegate> delegate;

- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;

@end
