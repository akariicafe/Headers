@class PSSpecifier;

@interface PSAccountsClientListController : PSListController {
    BOOL _noAccountsSetUp;
    BOOL _showExtraVC;
    PSSpecifier *_accountSpecifier;
    id _acObserver;
    int accountUpdateThrottle;
}

- (void)setSpecifiers:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (id)specifierForID:(id)a0;
- (void)updateAccountSpecifier;
- (id)requestedAccountDataclass;
- (id)_visibleAccountTypeIDs;
- (BOOL)_isAccountModificationDisabledByRestrictions;

@end
