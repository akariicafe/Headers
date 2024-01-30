@class PSSpecifier;

@interface PSAccountsClientListController : PSListController {
    BOOL _noAccountsSetUp;
    BOOL _showExtraVC;
    PSSpecifier *_accountSpecifier;
    id _acObserver;
    int accountUpdateThrottle;
}

- (void)setSpecifiers:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_visibleAccountTypeIDs;
- (id)specifierForID:(id)a0;
- (void)updateAccountSpecifier;
- (void)dealloc;
- (id)requestedAccountDataclass;
- (BOOL)_isAccountModificationDisabledByRestrictions;

@end
