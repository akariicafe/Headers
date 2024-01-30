@class NSArray, NSMutableSet;

@interface WDDeviceSourcesListTableViewSection : WDSourcesListTableViewSection

@property (copy, nonatomic) NSArray *list;
@property (copy, nonatomic) NSArray *sources;
@property (copy, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSMutableSet *identifiers;

- (void)applicationWillEnterForeground;
- (unsigned long long)numberOfRows;
- (void).cxx_destruct;
- (void)_handleReturnedImage:(id)a0 forSource:(id)a1 cell:(id)a2 tableView:(id)a3 fetchError:(id)a4;
- (void)setSourceListDataSource:(id)a0;
- (id)titleForHeader;
- (id)cellForRow:(unsigned long long)a0 table:(id)a1;
- (void)didSelectRow:(unsigned long long)a0 representedByCell:(id)a1 withCompletion:(id /* block */)a2;
- (id)titleForFooter;
- (id)willSelectRow:(id)a0;
- (id)noneString;
- (BOOL)_isSourceSelectable:(id)a0;
- (id)_sourceCellForRow:(unsigned long long)a0 tableView:(id)a1;
- (id)_sourceForRow:(long long)a0;
- (void)dataSourceDidUpdate;
- (void)reloadDevices;
- (void)setSources:(id)a0 devices:(id)a1;

@end
