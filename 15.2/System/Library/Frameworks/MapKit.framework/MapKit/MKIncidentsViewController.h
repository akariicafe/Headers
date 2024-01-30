@class NSArray, NSString, GEOComposedRouteAdvisory;

@interface MKIncidentsViewController : _MKTableViewController {
    NSArray *_sections;
}

@property (copy, nonatomic) NSArray *transitIncidents;
@property (copy, nonatomic) NSArray *restrictionIncidents;
@property (copy, nonatomic) NSArray *advisoryCards;
@property (readonly, nonatomic) NSString *incidentsTitle;
@property (copy, nonatomic) GEOComposedRouteAdvisory *advisory;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_updateTitle;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithTransitIncidents:(id)a0;
- (BOOL)_canShowWhileLocked;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)_localeDidChange;
- (void).cxx_destruct;
- (void)reloadDataSource;
- (unsigned long long)_incidentsCount;
- (void)_compileSections;
- (id)init;
- (long long)_sectionForSectionIndex:(long long)a0;
- (id)_transitCellForIndex:(long long)a0 inSection:(long long)a1;
- (id)_restrictionCellForIndex:(long long)a0;
- (id)_noticeCellForIndex:(long long)a0;
- (id)_advisoryItemCellForIndex:(long long)a0;
- (id)extendedDetailCell;
- (id)detailCellInSection:(long long)a0;
- (unsigned long long)_transitIncidentsCount;
- (id)_cellForRow:(long long)a0 inSection:(long long)a1;
- (id)initWithRestrictionIncidents:(id)a0;
- (long long)_transitIncidentIndexForRow:(long long)a0 section:(long long)a1;
- (void)dealloc;
- (void)infoCardThemeChanged;
- (long long)_numberOfRowsInSection:(long long)a0;

@end
