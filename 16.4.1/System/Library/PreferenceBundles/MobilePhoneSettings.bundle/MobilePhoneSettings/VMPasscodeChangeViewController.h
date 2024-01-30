@class NSArray, VMAccount, NSString, VMAccountsViewController;

@interface VMPasscodeChangeViewController : VMNavigationController <TPSetPINViewControllerDelegate, VMAccountsViewDataSource, VMAccountsViewDelegate>

@property (copy, nonatomic) NSArray *accounts;
@property (retain, nonatomic) VMAccount *selectedAccount;
@property (retain, nonatomic) VMAccountsViewController *accountsViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateView;
- (void)updateAccounts;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)accountAtIndex:(unsigned long long)a0;
- (void)cancelAction:(id)a0;
- (void)setPINViewControllerFinished:(id)a0 success:(BOOL)a1 oldPIN:(id)a2 newPIN:(id)a3;
- (id)accountsView:(id)a0 buttonForRowAtIndex:(unsigned long long)a1;
- (void)accountsView:(id)a0 buttonTappedForRowWithIndex:(unsigned long long)a1;
- (unsigned long long)numberOfRowsForAccountsView:(id)a0;
- (id)passcodeViewControllerForAccount:(id)a0;
- (id)titleForAccountsView:(id)a0;

@end
