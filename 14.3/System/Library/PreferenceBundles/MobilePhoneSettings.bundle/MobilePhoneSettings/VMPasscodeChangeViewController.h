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
- (void).cxx_destruct;
- (void)updateAccounts;
- (id)accountAtIndex:(unsigned long long)a0;
- (void)viewDidLoad;
- (void)setPINViewControllerFinished:(id)a0 success:(BOOL)a1 oldPIN:(id)a2 newPIN:(id)a3;
- (void)cancelAction:(id)a0;
- (void)accountsView:(id)a0 buttonTappedForRowWithIndex:(unsigned long long)a1;
- (id)titleForAccountsView:(id)a0;
- (unsigned long long)numberOfRowsForAccountsView:(id)a0;
- (id)accountsView:(id)a0 buttonForRowAtIndex:(unsigned long long)a1;
- (id)passcodeViewControllerForAccount:(id)a0;

@end
