@class NSString, EKSource, EKAccountRefresher;

@interface CSDelegateDetailsController : PSListController <EKAccountRefresherDelegate> {
    EKSource *_source;
    EKAccountRefresher *_currentAccountRefresher;
    BOOL _reloadingAccount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSpecifier:(id)a0;
- (id)specifiers;
- (void).cxx_destruct;
- (void)accountRefreshFinished:(id)a0;
- (BOOL)_canChangeDefaultCalendar;
- (BOOL)_canChangeNotificationSetting;
- (id)_defaultCalendar;
- (void)_refreshAccounts;
- (void)_setDefaultCalendar:(id)a0 specifier:(id)a1;
- (void)_setShowDelegationCalendar:(id)a0;
- (void)_setShowNotifications:(id)a0;
- (BOOL)_shouldShowNotificationSetting;
- (BOOL)_shouldShowSpinner;
- (id)_showDelegationCalendar;
- (id)_showNotifications;
- (void)cleanupAccountRefresher;

@end
