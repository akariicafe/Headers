@class NSArray, VMAccountsView;
@protocol VMAccountsViewControllerDelegate;

@interface VMAccountsViewController : VMViewController

@property (copy, nonatomic) NSArray *accounts;
@property (retain, nonatomic) VMAccountsView *accountsView;
@property (weak, nonatomic) id<VMAccountsViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)updateAccounts;
- (void)loadView;
- (id)accountAtIndex:(unsigned long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)handleVMVoicemailManagerAccountsDidChangeNotification:(id)a0;
- (void)updateAccountsView;

@end
