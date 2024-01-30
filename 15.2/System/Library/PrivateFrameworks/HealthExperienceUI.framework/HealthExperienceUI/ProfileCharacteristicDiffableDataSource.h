@interface ProfileCharacteristicDiffableDataSource : UITableViewDiffableDataSource

@property (copy, nonatomic) id /* block */ footerTitleProvider;

- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void).cxx_destruct;

@end
