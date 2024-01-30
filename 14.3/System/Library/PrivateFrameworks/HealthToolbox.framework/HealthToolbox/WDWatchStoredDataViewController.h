@class UILabel;

@interface WDWatchStoredDataViewController : WDSourceStoredDataViewController {
    UILabel *_messageLabel;
}

@property BOOL watchPaired;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateFont;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_shouldDisplayPrivacySection;
- (void)updateTableHeaderViewForUnpairedWatch;
- (void)handlePairedDevicesSnapshot:(id)a0;
- (void)addUnpairedWatchHeaderView;

@end
