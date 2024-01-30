@interface WDClinicalSettingsOptInSection : HRWDTableViewSection

@property (readonly, nonatomic) BOOL optIn;

- (void)applicationWillEnterForeground;
- (unsigned long long)numberOfRows;
- (void)viewWillAppear:(BOOL)a0;
- (id)titleForHeader;
- (void)_fetchOptInStatus;
- (void)_handleOptInSwitchChanged:(id)a0;
- (id)_optInCellForTableView:(id)a0;
- (void)_setOptInStatus:(long long)a0;
- (id)_viewDataCellForTableView:(id)a0;
- (id)cellForRow:(unsigned long long)a0 table:(id)a1;
- (void)didSelectRow:(unsigned long long)a0 representedByCell:(id)a1 withCompletion:(id /* block */)a2;

@end
