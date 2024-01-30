@class NSString, EKEventStore, PSSpecifier, ACAccountStore, PSSystemPolicyForApp;

@interface CalendarSettingsPlugin : PSListController <PSSystemPolicyForAppDelegate> {
    PSSpecifier *_showInviteeDeclinesSpecifier;
    PSSpecifier *_syncDaysSpecifier;
    PSSpecifier *_timeZoneSupportSpecifier;
    PSSpecifier *_defaultCalendarSpecifier;
    PSSpecifier *_identityListSpecifier;
    PSSpecifier *_birthdayCalendarSpecifier;
    PSSpecifier *_defaultAlarmsSpecifier;
    PSSpecifier *_overlayCalendarSpecifier;
    PSSpecifier *_showWeekNumbersSpecifier;
    PSSpecifier *_weekViewStartsOnTodaySpecifier;
    PSSpecifier *_suggestedLocationsSpecifier;
    PSSpecifier *_showAccountsSupportingDelegationSpecifier;
    PSSpecifier *_showSingleAccountSupportingDelegationSpecifier;
    EKEventStore *_eventStore;
    ACAccountStore *_accountStore;
    BOOL _numTotalCalendars;
    BOOL _delegationSpecifierShowing;
    PSSystemPolicyForApp *_appPolicy;
}

@property (retain, nonatomic) PSSpecifier *weekStartSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_eventStoreChanged:(id)a0;
- (void)_localeChanged:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reloadSpecifiers:(id)a0;
- (id)_eventStore;
- (id)specifiers;
- (id)_accountStore;
- (void)viewWillAppear:(BOOL)a0;
- (void)_freeSpecifiers;
- (void)setShowInviteeDeclinesEnabled:(id)a0 specifier:(id)a1;
- (id)showInviteeDeclinesEnabled:(id)a0;
- (id)timeZoneSupportEnabled:(id)a0;
- (void)setOverlayCalendarID:(id)a0 specifier:(id)a1;
- (id)overlayCalendarID:(id)a0;
- (id)_titlesForCalendarIdentifiers:(id)a0;
- (void)setShowWeekNumbers:(id)a0 specifier:(id)a1;
- (id)showWeekNumbers:(id)a0;
- (void)setWeekViewStartsOnToday:(id)a0 specifier:(id)a1;
- (id)weekViewStartsOnToday:(id)a0;
- (void)setDaysToSync:(id)a0 specifier:(id)a1;
- (id)daysToSync:(id)a0;
- (id)_titlesForDaysToSync;
- (void)setDefaultCalendar:(id)a0 specifier:(id)a1;
- (id)defaultCalendarName:(id)a0;
- (void)setWeekStart:(id)a0 specifier:(id)a1;
- (id)weekStart:(id)a0;
- (id)_numbersForWeekdays;
- (id)_titlesForWeekDays:(id)a0;
- (void)setSuggestEventLocations:(id)a0 specifier:(id)a1;
- (id)suggestEventLocations:(id)a0;
- (id)_localeSpecificLocalizedTwoWeeksSyncTitleWithNumberFormatter:(id)a0 bundle:(id)a1;
- (id)_localeSpecificLocalizedOneMonthSyncTitleWithNumberFormatter:(id)a0 bundle:(id)a1;
- (id)_localeSpecificLocalizedThreeMonthsSyncTitleWithNumberFormatter:(id)a0 bundle:(id)a1;
- (id)_localeSpecificLocalizedSixMonthsSyncTitleWithNumberFormatter:(id)a0 bundle:(id)a1;
- (id)_localizedNoLimitSyncTitleInBundle:(id)a0;
- (id)_localizedOneMonthSyncTitleOverrideInBundle:(id)a0;
- (void)_createAllCommonSpecifiers;
- (long long)_countOfAccountsSyncingCalendars;
- (BOOL)_shouldShowDefaultCalendarSpecifier;
- (id)accountsSupportingDelegation;
- (void)setImmediateAlarmCreation:(id)a0 specifier:(id)a1;
- (id)immediateAlarmCreation:(id)a0;
- (id)writableEnabledIdentities;

@end
