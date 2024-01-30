@class NSArray, NSString, GEOComposedRouteAdvisory;

@interface MKIncidentsViewController : _MKTableViewController {
    NSArray *_sections;
}

@property (copy, nonatomic) NSArray *transitIncidents;
@property (readonly, nonatomic) NSString *incidentsTitle;
@property (copy, nonatomic) GEOComposedRouteAdvisory *advisory;

- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)_updateTitle;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_localeDidChange;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)_numberOfRowsInSection:(long long)a0;
- (unsigned long long)_incidentsCount;
- (id)_transitCellForIndex:(long long)a0 inSection:(long long)a1;
- (id)_advisoryItemCellForIndex:(long long)a0;
- (id)_cellForRow:(long long)a0 inSection:(long long)a1;
- (void)_compileSections;
- (long long)_sectionForSectionIndex:(long long)a0;
- (long long)_transitIncidentIndexForRow:(long long)a0 section:(long long)a1;
- (unsigned long long)_transitIncidentsCount;
- (id)detailCellInSection:(long long)a0;
- (id)extendedDetailCell;
- (void)infoCardThemeChanged;
- (id)initWithTransitIncidents:(id)a0;
- (void)reloadDataSource;

@end
