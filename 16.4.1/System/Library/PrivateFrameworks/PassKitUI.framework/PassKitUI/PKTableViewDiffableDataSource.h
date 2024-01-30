@interface PKTableViewDiffableDataSource : UITableViewDiffableDataSource

@property (copy, nonatomic) id /* block */ sectionFooterProvider;
@property (copy, nonatomic) id /* block */ sectionHeaderProvider;
@property (copy, nonatomic) id /* block */ commitEditingHandler;

- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;

@end
