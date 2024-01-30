@class ACAccount;

@interface RMAccountDetailsViewController : ACUIViewController

@property (retain) ACAccount *account;

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)cancelButtonTapped:(id)a0;
- (void)doneButtonTapped:(id)a0;
- (void)_processUserInfoDictionary;
- (id)_specifiersForAccount;
- (id)accountEmail:(id)a0;
- (id)accountDescription:(id)a0;

@end
