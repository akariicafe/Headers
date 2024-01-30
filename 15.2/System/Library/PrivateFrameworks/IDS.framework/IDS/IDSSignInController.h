@class IDSCTAdapter, NSMutableDictionary, NSMapTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IDSSignInController : NSObject <IDSAccountRegistrationDelegate, IDSAccountControllerDelegate>

@property (retain, nonatomic) NSMutableDictionary *serviceNameAccountControllerMap;
@property (retain, nonatomic) NSMutableDictionary *accountIDDescriptionMap;
@property (retain, nonatomic) NSMapTable *delegateByServiceType;
@property (retain, nonatomic) NSMutableDictionary *initialStateByService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *signInQueue;
@property (retain, nonatomic) id passwordManager;
@property (retain, nonatomic) IDSCTAdapter *CTAdapter;
@property (nonatomic) double signInTimeout;
@property (nonatomic) double signInFuzz;
@property (retain, nonatomic) NSString *listenerGUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accountController:(id)a0 accountDisabled:(id)a1;
- (void)refreshRegistrationForAccount:(id)a0;
- (void)accountController:(id)a0 accountRemoved:(id)a1;
- (void)accountController:(id)a0 accountAdded:(id)a1;
- (void)_initializeStateMachineForAccountID:(id)a0 service:(id)a1 state:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)initWithQueue:(id)a0;
- (unsigned long long)_statusOfAccount:(id)a0;
- (void)removeDelegateForService:(unsigned long long)a0;
- (void)accountController:(id)a0 accountUpdated:(id)a1;
- (void)setDelegate:(id)a0 forService:(unsigned long long)a1;
- (id)_serviceNameForType:(unsigned long long)a0;
- (BOOL)_actionOnAccountOfType:(unsigned long long)a0 onService:(unsigned long long)a1 actionBlock:(id /* block */)a2;
- (BOOL)isFaceTimeEnabled;
- (void)_validateStateForAccountID:(id)a0 timeoutMode:(unsigned long long)a1;
- (void)_validateDelegateState;
- (void)provideCredential:(id)a0 forUser:(id)a1 onService:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (id)_createAccountControllerForService:(id)a0;
- (id)initWithPasswordManager:(id)a0 CTAdapter:(id)a1 signInTimeout:(double)a2 signInFuzz:(double)a3 queue:(id)a4;
- (void)signOutService:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)_createAccountWithDictionary:(id)a0 accountID:(id)a1 serviceName:(id)a2;
- (void)enableUserType:(unsigned long long)a0 onService:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_scheduleValidationAfter:(double)a0 forAccountID:(id)a1 allowFuzz:(BOOL)a2 signOut:(BOOL)a3;
- (id)_accountWithUniqueID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)disableUserType:(unsigned long long)a0 onService:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)signInUsername:(id)a0 withProvidedCredential:(id)a1 onService:(unsigned long long)a2 waitUntilRegistered:(BOOL)a3 completion:(id /* block */)a4;
- (void)statusOfUsersOnService:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (id)_statusOfUsersOnService:(unsigned long long)a0;
- (void)signInUsername:(id)a0 onService:(unsigned long long)a1 waitUntilRegistered:(BOOL)a2 withCompletion:(id /* block */)a3;
- (BOOL)isiMessageEnabled;
- (void)dealloc;
- (unsigned long long)_serviceTypeForName:(id)a0;
- (void)_cleanupStateForAccountID:(id)a0;
- (id)_accountControllerForName:(id)a0;
- (BOOL)_isServiceCurrentlyEnabled:(id)a0;

@end
