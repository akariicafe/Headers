@class NSArray;

@interface WDAppSourcesListTableViewSection : WDSourcesListTableViewSection

@property (copy, nonatomic) NSArray *installedSources;
@property (nonatomic) BOOL uninstalledSourcesExist;

- (unsigned long long)numberOfRows;
- (void).cxx_destruct;
- (id)titleForHeader;
- (id)titleForFooter;
- (id)cellForRow:(unsigned long long)a0 table:(id)a1;
- (void)didSelectRow:(unsigned long long)a0 representedByCell:(id)a1 withCompletion:(id /* block */)a2;
- (void)dataSourceDidUpdate;
- (id)noneString;
- (id)_uninstalledSourcesCellWithTableView:(id)a0;
- (id)_sourceCellForRow:(unsigned long long)a0 tableView:(id)a1;

@end
