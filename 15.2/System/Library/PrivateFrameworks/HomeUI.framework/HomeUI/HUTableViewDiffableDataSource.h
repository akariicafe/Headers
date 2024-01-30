@protocol HUTableViewDiffableDataSourceDelegate;

@interface HUTableViewDiffableDataSource : UITableViewDiffableDataSource

@property (weak, nonatomic) id<HUTableViewDiffableDataSourceDelegate> delegate;

- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithTableView:(id)a0 cellProvider:(id /* block */)a1 delegate:(id)a2;

@end
