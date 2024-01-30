@interface WDLocalDeviceStoredDataViewController : WDSourceStoredDataViewController

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)_shouldDisplayPrivacySection;

@end
