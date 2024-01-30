@class SBHTableViewIconLibrary, SBHIconLibraryQueryResult;

@interface SBHIconTableViewDiffableDataSource : UITableViewDiffableDataSource

@property (retain, nonatomic) SBHTableViewIconLibrary *iconLibrary;
@property (readonly, nonatomic) SBHIconLibraryQueryResult *queryResult;

- (void)applyQueryResult:(id)a0 animatingDifferences:(BOOL)a1;
- (long long)tableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (void)applyQueryResult:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (void).cxx_destruct;

@end
