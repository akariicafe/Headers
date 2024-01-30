@class NSOrderedSet, WFNetworkSettingsCellFactory, WFHyperlinkFooterView;
@protocol WFDiagnosticsProviderContext;

@interface WFDiagnosticsTableViewController : WFInsetTableViewController

@property (retain, nonatomic) id<WFDiagnosticsProviderContext> context;
@property (retain, nonatomic) NSOrderedSet *sections;
@property (retain, nonatomic) WFNetworkSettingsCellFactory *cellFactory;
@property (retain, nonatomic) WFHyperlinkFooterView *linkFooterView;
@property (nonatomic) BOOL useInsetGroupedTableView;

- (void)_refresh;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)initWithDiagnosticsContext:(id)a0 useInsetGroupedTableView:(BOOL)a1;
- (id)_defaultSections;
- (id)initWithDiagnosticsContext:(id)a0;

@end
