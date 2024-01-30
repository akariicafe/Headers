@class UILabel;

@interface WDWatchStoredDataViewController : WDSourceStoredDataViewController {
    UILabel *_messageLabel;
}

@property BOOL watchPaired;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_updateFont;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)_shouldDisplayPrivacySection;
- (void)updateTableHeaderViewForUnpairedWatch;
- (void)handlePairedDevicesSnapshot:(id)a0;
- (void)addUnpairedWatchHeaderView;

@end
