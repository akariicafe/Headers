@class NSString, ACAccountStore, PSSpecifier;

@interface ScheduleSettingsController : PSListController <UIActionSheetDelegate> {
    ACAccountStore *_accountStore;
    PSSpecifier *_checkedSpecifier;
    long long _rowToSelect;
    long long _radioGroup;
    long long _fetchDividerRow;
    BOOL _isLowPowerMode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)initForContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (void)listItemSelected:(id)a0;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)_lowPowerModeChangedNotification:(id)a0;
- (id)_makeMCCSpecifiers;
- (void)_readScheduleSettings;
- (BOOL)isExcludedAccountType:(id)a0;
- (id)_specifiersForMCCAccount:(id)a0;
- (id)_specifierForMCCAccount:(id)a0 dataclasses:(id)a1 canPush:(BOOL)a2 canFetch:(BOOL)a3 canManual:(BOOL)a4;
- (id)_mccSchedule:(id)a0;
- (void)_setMCCSchedule:(id)a0 specifier:(id)a1;
- (int)styleForAccount:(id)a0 uniqueIdentifier:(id)a1;
- (void)updateRadioGroupText;
- (void)configureFetchDividerCell:(id)a0 atIndexPath:(id)a1;
- (id)pushEnabled:(id)a0;
- (void)setPushEnabled:(id)a0 specifier:(id)a1;
- (void)setPollInterval:(id)a0 specifier:(id)a1;

@end
