@class EKSource, NSString, CalendarModel, EKAccountRefresher;

@interface CSDelegateDetailsController : PSListController <EKAccountRefresherDelegate> {
    EKSource *_source;
    CalendarModel *_model;
    EKAccountRefresher *_currentAccountRefresher;
    BOOL _reloadingAccount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)setSpecifier:(id)a0;
- (void)accountRefreshFinished:(id)a0;
- (void).cxx_destruct;
- (void)cleanupAccountRefresher;
- (void)_setShowDelegationCalendar:(id)a0;
- (id)_showDelegationCalendar;
- (BOOL)_shouldShowNotificationSetting;
- (BOOL)_canChangeNotificationSetting;
- (void)_setShowNotifications:(id)a0;
- (id)_showNotifications;
- (BOOL)_canChangeDefaultCalendar;
- (BOOL)_shouldShowSpinner;
- (void)_setDefaultCalendar:(id)a0 specifier:(id)a1;
- (id)_defaultCalendar;
- (void)_refreshAccounts;

@end
