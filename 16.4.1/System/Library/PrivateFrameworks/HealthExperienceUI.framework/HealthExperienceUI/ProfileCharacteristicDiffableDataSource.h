@interface ProfileCharacteristicDiffableDataSource : UITableViewDiffableDataSource

@property (copy, nonatomic) id /* block */ footerTitleProvider;

- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;

@end
