@class NSString, NSMutableDictionary, NSArray, _SFPerSitePreferencesVendor, NSIndexPath, UIBarButtonItem;

@interface _SFPerSitePreferencesPopoverViewController : UITableViewController <SFSwitchTableViewCellDelegate> {
    NSString *_domain;
    _SFPerSitePreferencesVendor *_perSitePreferencesVendor;
    BOOL _shouldShowSecurePagePreferences;
    NSMutableDictionary *_preferenceToValueCache;
    NSArray *_preferencesBySections;
    UIBarButtonItem *_doneButton;
    NSIndexPath *_expandedRowIndexPath;
    long long _numberOfValuesInExpandedPreference;
    BOOL _shouldShowLockdownPreference;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (BOOL)tableView:(id)a0 canFocusRowAtIndexPath:(id)a1;
- (BOOL)safari_prefersHalfHeightSheetPresentationWithLoweredBar;
- (void)_done:(id)a0;
- (void)_didRetrieveValue:(id)a0 forPreference:(id)a1;
- (id)_generalPageSection;
- (id)_indexPathForView:(id)a0;
- (void)_initializePreferences;
- (id)_preferenceAtIndexPath:(id)a0;
- (id)_preferenceRowIndexPathForCellAtIndexPath:(id)a0;
- (id)_securePageSection;
- (void)_setPreferenceValue:(id)a0 forPreference:(id)a1;
- (void)_setPreferenceValueIndex:(long long)a0 forView:(id)a1;
- (id)initWithBrowserDocument:(id)a0 perSitePreferencesVendor:(id)a1;
- (void)reloadPreferences;
- (void)switchTableViewCell:(id)a0 didChangeSwitchState:(BOOL)a1;

@end
