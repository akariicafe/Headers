@class NSString, NSArray, IDSAccountController;

@interface IMDIDSService : IMDService <IDSAccountControllerDelegate, IDSAccountRegistrationDelegate> {
    IDSAccountController *_accountController;
    BOOL _activatingAccount;
    BOOL _deactivatingAccount;
}

@property (retain, nonatomic) IMDIDSService *subService;
@property (retain, nonatomic) NSString *subServiceName;
@property (nonatomic) IMDIDSService *mainService;
@property (readonly, retain, nonatomic) NSArray *accountsLoadedFromIdentityServices;
@property (readonly, nonatomic) NSArray *activeAccountsFromIdentityServices;
@property (readonly, nonatomic) BOOL isSubService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disableAccount:(id)a0;
- (void)enableAccount:(id)a0;
- (Class)accountClass;
- (void)accountController:(id)a0 accountDisabled:(id)a1;
- (void)accountController:(id)a0 accountAdded:(id)a1;
- (id)newAccountWithAccountDefaults:(id)a0 accountID:(id)a1;
- (id)mockAccountController;
- (void)account:(id)a0 vettedAliasesChanged:(id)a1;
- (void)setMockAccountController:(id)a0;
- (id)initWithBundle:(id)a0 subServiceName:(id)a1;
- (void)account:(id)a0 profileChanged:(id)a1;
- (void)dealloc;
- (id)initWithBundle:(id)a0 isMainService:(BOOL)a1;
- (id)accountFromIDSAccountWithUniqueID:(id)a0;
- (void)account:(id)a0 displayNameChanged:(id)a1;
- (void)registrationFailedForAccount:(id)a0 needsDeletion:(id)a1;
- (void)accountController:(id)a0 accountRemoved:(id)a1;
- (void)refreshRegistrationForAccount:(id)a0;
- (void)account:(id)a0 registrationStatusInfoChanged:(id)a1;
- (void)accountController:(id)a0 accountUpdated:(id)a1;
- (void)accountAdded:(id)a0;
- (id)imdAccountLoginFromIDSAccountWithType:(int)a0 login:(id)a1;
- (id)_serviceDomain;
- (void)accountController:(id)a0 accountEnabled:(id)a1;
- (void)account:(id)a0 loginChanged:(id)a1;
- (id)initWithBundle:(id)a0;
- (void)accountRemoved:(id)a0;
- (void)account:(id)a0 aliasesChanged:(id)a1;
- (void)_loadIDSAccountController;

@end
