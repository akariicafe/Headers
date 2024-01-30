@class NSArray, DKNotableUserData;

@interface DKIntroViewController : OBWelcomeController

@property (copy, nonatomic) id /* block */ beginEraseBlock;
@property (copy, nonatomic) id /* block */ eraseLaterBlock;
@property (retain, nonatomic) NSArray *localPaymentCards;
@property (copy, nonatomic) id /* block */ hasInternetConnectivity;
@property (nonatomic) BOOL isBasebandDead;
@property (retain, nonatomic) DKNotableUserData *notableUserData;
@property (copy, nonatomic) id /* block */ fetchRestoreState;
@property (nonatomic) BOOL preventOpeningSafari;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (void)_continueTapped:(id)a0;
- (void)_addNotableUserDataItemsView;
- (void)_notNowTapped:(id)a0;
- (id)_createNotableUserDataCardForAppsAndData:(long long)a0;
- (id)_createNotableUserDataCardForAccounts:(id)a0;
- (id)_createNotableUserDataCardForFindMy:(BOOL)a0;
- (id)_createNotableUserDataCardForWallet:(id)a0;
- (id)_createNotableUserDataCardForCellularPlans:(id)a0;
- (void)_presentRestoreWarning:(id /* block */)a0;
- (void)_presentBasebandDeadWarning:(id /* block */)a0;
- (void)_presentLocalPaymentCardConfirmation:(id /* block */)a0;
- (void)_presentLocalDataWarning:(id /* block */)a0;

@end
