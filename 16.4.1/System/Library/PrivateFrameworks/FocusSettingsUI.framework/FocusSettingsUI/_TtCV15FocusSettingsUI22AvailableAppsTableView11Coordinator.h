@interface _TtCV15FocusSettingsUI22AvailableAppsTableView11Coordinator : NSObject <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ availableApps;
    void /* unknown type, empty encoding */ excludedApps;
    void /* unknown type, empty encoding */ _selectedApps;
    void /* unknown type, empty encoding */ iconCache;
    void /* unknown type, empty encoding */ showCheckmarks;
    void /* unknown type, empty encoding */ collation;
    void /* unknown type, empty encoding */ sections;
}

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)init;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
