@class EKSource, NSString, NSArray, EKEventStore, CalendarModel, EKUIAccountRefresher;

@interface CSAccountController : PSListController <EKUIAccountRefresherDelegate, DelegateDetailProtocol> {
    NSArray *_accountsICanAccess;
    NSArray *_accountsWithGrantedAccess;
    EKEventStore *_eventStore;
    EKSource *_ownerSource;
    CalendarModel *_model;
    EKUIAccountRefresher *_currentAccountRefresher;
    BOOL _loadingGrantedDelegates;
    BOOL _isShowingLoadingCell;
    unsigned long long _accountsICanAccessSection;
    unsigned long long _accountsWithGrantedAccessSection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSpecifier:(id)a0;
- (id)init;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)accountRefreshFinished:(id)a0;
- (id)specifiers;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)didModifyDelegate:(id)a0;
- (void)eventStoreChanged:(id)a0;
- (void)cleanupAccountRefresher;
- (void)reloadGrantedDelegates;
- (void)reloadDelegateSources;
- (id)_valueForAccountEnabledness:(id)a0;
- (void)_updateSpecifierSubtitle:(id)a0;
- (id)_accessLevelStringForSpecifier:(id)a0;
- (id)specifiersForAccountsWithGrantedAccess;
- (id)specifiersForAccountsICanAccess;

@end
