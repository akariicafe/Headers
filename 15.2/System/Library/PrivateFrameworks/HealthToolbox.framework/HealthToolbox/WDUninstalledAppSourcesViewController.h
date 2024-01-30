@class WDProfile, NSArray, HKSourceListDataSource, UIImage;

@interface WDUninstalledAppSourcesViewController : HKTableViewController <HKSourceListDataSourceObserver>

@property (copy, nonatomic) NSArray *uninstalledSources;
@property (readonly) UIImage *uninistalledAppImage;
@property (retain, nonatomic) WDProfile *profile;
@property (retain, nonatomic) HKSourceListDataSource *dataSource;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)sourceListDataSourceDidUpdate:(id)a0;
- (void)updateUninstalledSources;

@end
