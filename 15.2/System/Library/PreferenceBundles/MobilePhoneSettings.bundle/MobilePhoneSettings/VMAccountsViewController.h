@class NSArray, VMAccountsView;
@protocol VMAccountsViewControllerDelegate;

@interface VMAccountsViewController : VMViewController

@property (copy, nonatomic) NSArray *accounts;
@property (retain, nonatomic) VMAccountsView *accountsView;
@property (weak, nonatomic) id<VMAccountsViewControllerDelegate> delegate;

- (void)updateAccounts;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)accountAtIndex:(unsigned long long)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)handleVMVoicemailManagerAccountsDidChangeNotification:(id)a0;
- (void)updateAccountsView;

@end
