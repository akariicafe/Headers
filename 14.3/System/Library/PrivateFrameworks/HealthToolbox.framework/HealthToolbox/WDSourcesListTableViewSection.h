@class NSString, HKSourceListDataSource;

@interface WDSourcesListTableViewSection : WDTableViewSection <WDSourceTableViewSection, HKSourceListDataSourceObserver>

@property (retain, nonatomic) HKSourceListDataSource *dataSource;
@property (copy, nonatomic) NSString *restorationSourceBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detailViewControllerForSourceModel:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (double)estimatedHeightForRow:(unsigned long long)a0;
- (void)setSourceListDataSource:(id)a0;
- (void)sourceListDataSourceDidUpdate:(id)a0;
- (double)heightForRow:(unsigned long long)a0;
- (void)dataSourceDidUpdate;
- (id)noneString;
- (id)noneCellForTableView:(id)a0;
- (id)detailViewControllerForSourceModel:(id)a0;

@end
