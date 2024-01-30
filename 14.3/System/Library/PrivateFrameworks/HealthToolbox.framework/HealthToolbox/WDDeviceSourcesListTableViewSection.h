@class NSArray, NSMutableSet;

@interface WDDeviceSourcesListTableViewSection : WDSourcesListTableViewSection

@property (copy, nonatomic) NSArray *list;
@property (copy, nonatomic) NSArray *sources;
@property (copy, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSMutableSet *identifiers;

- (unsigned long long)numberOfRows;
- (void).cxx_destruct;
- (void)setSourceListDataSource:(id)a0;
- (void)_handleReturnedImage:(id)a0 forSource:(id)a1 cell:(id)a2 tableView:(id)a3 fetchError:(id)a4;
- (void)applicationWillEnterForeground;
- (id)titleForHeader;
- (id)titleForFooter;
- (id)cellForRow:(unsigned long long)a0 table:(id)a1;
- (id)willSelectRow:(id)a0;
- (void)didSelectRow:(unsigned long long)a0 representedByCell:(id)a1 withCompletion:(id /* block */)a2;
- (void)dataSourceDidUpdate;
- (id)noneString;
- (id)_sourceCellForRow:(unsigned long long)a0 tableView:(id)a1;
- (void)reloadDevices;
- (void)setSources:(id)a0 devices:(id)a1;
- (id)_sourceForRow:(long long)a0;
- (BOOL)_isSourceSelectable:(id)a0;

@end
