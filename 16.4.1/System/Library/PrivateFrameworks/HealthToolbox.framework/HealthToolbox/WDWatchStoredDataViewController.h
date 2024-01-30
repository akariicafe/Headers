@class UILabel;

@interface WDWatchStoredDataViewController : WDSourceStoredDataViewController {
    UILabel *_messageLabel;
}

@property BOOL watchPaired;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_updateFont;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_shouldDisplayPrivacySection;
- (void)addUnpairedWatchHeaderView;
- (void)handlePairedDevicesSnapshot:(id)a0;
- (void)updateTableHeaderViewForUnpairedWatch;

@end
