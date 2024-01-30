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

- (BOOL)_actionOnAccountOfType:(unsigned long long)a0 onService:(unsigned long long)a1 actionBlock:(id /* block */)a2;
- (id)_createAccountWithDictionary:(id)a0 accountID:(id)a1 serviceName:(id)a2;
- (void)accountController:(id)a0 accountDisabled:(id)a1;
- (void)accountController:(id)a0 accountAdded:(id)a1;
- (unsigned long long)_statusOfAccount:(id)a0;
- (id)initWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_validateStateForAccountID:(id)a0 timeoutMode:(unsigned long long)a1;
- (id)_createAccountControllerForService:(id)a0;
- (void)enableUserType:(unsigned long long)a0 onService:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)signInUsername:(id)a0 withProvidedCredential:(id)a1 onService:(unsigned long long)a2 waitUntilRegistered:(BOOL)a3 completion:(id /* block */)a4;
- (id)_statusOfUsersOnService:(unsigned long long)a0;
- (void)setDelegate:(id)a0 forService:(unsigned long long)a1;
- (id)_accountControllerForName:(id)a0;
- (BOOL)_isServiceCurrentlyEnabled:(id)a0;
- (void)_validateDelegateState;
- (void)signOutService:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)accountController:(id)a0 accountRemoved:(id)a1;
- (id)_accountWithUniqueID:(id)a0;
- (void)removeDelegateForService:(unsigned long long)a0;
- (void)refreshRegistrationForAccount:(id)a0;
- (BOOL)isiMessageEnabled;
- (id)initWithPasswordManager:(id)a0 CTAdapter:(id)a1 signInTimeout:(double)a2 signInFuzz:(double)a3 queue:(id)a4;
- (void)signInUsername:(id)a0 onService:(unsigned long long)a1 waitUntilRegistered:(BOOL)a2 withCompletion:(id /* block */)a3;
- (BOOL)isFaceTimeEnabled;
- (unsigned long long)_serviceTypeForName:(id)a0;
- (void)_scheduleValidationAfter:(double)a0 forAccountID:(id)a1 allowFuzz:(BOOL)a2;
- (void)provideCredential:(id)a0 forUser:(id)a1 onService:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (void)disableUserType:(unsigned long long)a0 onService:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)_serviceNameForType:(unsigned long long)a0;
- (void)statusOfUsersOnService:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)_initializeStateMachineForAccountID:(id)a0 service:(id)a1 state:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_cleanupStateForAccountID:(id)a0;

@end
