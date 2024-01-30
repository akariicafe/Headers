@class NSArray, NSString;

@interface MKIncidentsViewController : _MKTableViewController {
    NSArray *_sections;
}

@property (copy, nonatomic) NSArray *transitIncidents;
@property (copy, nonatomic) NSArray *restrictionIncidents;
@property (copy, nonatomic) NSArray *notices;
@property (readonly, nonatomic) NSString *incidentsTitle;

- (void)_updateTitle;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTransitIncidents:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)infoCardThemeChanged;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (long long)_numberOfRowsInSection:(long long)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)reloadDataSource;
- (unsigned long long)_incidentsCount;
- (void)_compileSections;
- (long long)_sectionForSectionIndex:(long long)a0;
- (id)_transitCellForIndex:(long long)a0 inSection:(long long)a1;
- (id)_restrictionCellForIndex:(long long)a0;
- (id)_noticeCellForIndex:(long long)a0;
- (id)extendedDetailCell;
- (id)detailCellInSection:(long long)a0;
- (unsigned long long)_transitIncidentsCount;
- (id)_cellForRow:(long long)a0 inSection:(long long)a1;
- (id)initWithRestrictionIncidents:(id)a0;
- (long long)_transitIncidentIndexForRow:(long long)a0 section:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (void)_localeDidChange;
- (void)viewDidLoad;

@end
