@class EKSource, NSString, NSArray, EKEventStore, EKAccountRefresher;

@interface CSAccountController : PSListController <EKAccountRefresherDelegate, DelegateDetailProtocol> {
    NSArray *_accountsICanAccess;
    NSArray *_accountsWithGrantedAccess;
    EKEventStore *_eventStore;
    EKSource *_ownerSource;
    EKAccountRefresher *_currentAccountRefresher;
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
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)accountRefreshFinished:(id)a0;
- (id)_accessLevelStringForSpecifier:(id)a0;
- (id)specifiersForAccountsICanAccess;
- (void)_updateSpecifierSubtitle:(id)a0;
- (id)_valueForAccountEnabledness:(id)a0;
- (void)cleanupAccountRefresher;
- (void)didModifyDelegate:(id)a0;
- (void)eventStoreChanged:(id)a0;
- (void)reloadDelegateSources;
- (void)reloadGrantedDelegates;
- (id)specifiersForAccountsWithGrantedAccess;

@end
