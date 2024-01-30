@class NSString, UMUser, UMUserPersona, NSArray;
@protocol UMUserListUpdateObserver, UMUserPersonaUpdateObserver;

@interface UMUserManager : NSObject <UMUserManagement, UMUserSwitchManagement, UMUserPersonaManagement, UMUserPersonaAttributesList, UMUserPersonaLoginSessionManagement, UMUserSessionProvisioning> {
    NSArray *_allUsers;
}

@property (weak, nonatomic) id<UMUserListUpdateObserver> userListUpdateObserver;
@property (nonatomic) BOOL switchIsOccurring;
@property (weak, nonatomic) id<UMUserPersonaUpdateObserver> userPersonaUpdateObserver;
@property (readonly, nonatomic) BOOL isMultiUser;
@property (readonly, copy, nonatomic) UMUser *currentUser;
@property (readonly, copy, nonatomic) UMUser *loginUser;
@property (readonly, nonatomic) BOOL isLoginSession;
@property (readonly, nonatomic) unsigned long long maxNumberOfUsers;
@property (readonly, nonatomic) unsigned long long userQuotaSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) UMUserPersona *currentPersona;

+ (id)sharedManager;

- (void)loginUICheckInWithCompletionHandler:(id /* block */)a0;
- (void)deleteUser:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canAccessUserProperties;
- (void)createUser:(id)a0 passcodeData:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)personaLogoutWithUserODuuid:(id)a0 withUid:(unsigned int)a1 WithError:(id *)a2;
- (id)init;
- (void)terminateSyncWithCompletionHandler:(id /* block */)a0;
- (void)fetchPersonaWithIDString:(id)a0 CompletionHandler:(id /* block */)a1;
- (void)registerPersonaListUpdateObserver:(id)a0 withMachService:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)userInteractionIsEnabled;
- (BOOL)haveValidPersonaContextForPersonaUniqueString:(id)a0;
- (void)resumeSync;
- (void)currentUserSwitchContextHasBeenUsed;
- (void)fetchBundleIdentifierForPersonaWithIDString:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerUserSwitchStakeHolder:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)userExists:(id)a0;
- (id)currentUserSwitchContext;
- (id)allUsers;
- (void)fetchAsidMapOfAllUsersWithCompletionHandler:(id /* block */)a0;
- (void)fetchAllPersonasForAllUsersWithCompletionHandler:(id /* block */)a0;
- (void)switchToLoginUserWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)disableUser:(id)a0 completionHandler:(id /* block */)a1;
- (void)disableUserPersonaWithProfileInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)createUserPersona:(id)a0 passcodeData:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchAllPersonasWithCompletionHandler:(id /* block */)a0;
- (void)deleteUserPersonaWithIDString:(id)a0 passcodeData:(id)a1 completionHandler:(id /* block */)a2;
- (void)switchToUser:(id)a0 passcodeData:(id)a1 context:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)personaLoginWithUserODuuid:(id)a0 withUid:(unsigned int)a1 WithError:(id *)a2;
- (void)registerUserSwitchStakeHolder:(id)a0;
- (void)loadUser:(id)a0 passcodeData:(id)a1 completionHandler:(id /* block */)a2;
- (void)setMultiPersonaBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerCriticalUserSwitchStakeHolder:(id)a0;
- (void)deleteUserPersonaWithPersonaUniqueString:(id)a0 passcodeData:(id)a1 completionHandler:(id /* block */)a2;
- (void)setBundlesIdentifiers:(id)a0 forPersonaWithPersonaUniqueString:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchPersonaWithPersonaUniqueString:(id)a0 completionHandler:(id /* block */)a1;
- (void)setupUMUserSessionProvisioning:(id)a0 WithCompletionHandler:(id /* block */)a1;
- (void)switchToUser:(id)a0 passcodeData:(id)a1 context:(id)a2 preferences:(id)a3 completionHandler:(id /* block */)a4;
- (void)deleteUserPersonaWithType:(int)a0 passcodeData:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)haveValidPersonaContextForIDString:(id)a0;
- (void)resumeQuotas;
- (void)setBundlesIdentifiers:(id)a0 forUniquePersonaWithIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)registerUserSyncStakeholder:(id)a0 withMachServiceName:(id)a1;
- (void)deleteUserPersonaWithProfileInfo:(id)a0 passcodeData:(id)a1 completionHandler:(id /* block */)a2;
- (id)listAllPersonaWithAttributes;
- (void)registerUserListUpdateObserver:(id)a0;
- (void)setBundlesIdentifiers:(id)a0 forUniquePersonaType:(int)a1 completionHandler:(id /* block */)a2;
- (void)fetchMultiPersonaBundleIdentifierWithcompletionHandler:(id /* block */)a0;
- (void)directSwitchToUser:(id)a0 passcodeData:(id)a1 context:(id)a2 preferences:(id)a3 completionHandler:(id /* block */)a4;
- (void)logoutToLoginSessionWithCompletionHandler:(id /* block */)a0;
- (void)fetchPersonaWithType:(int)a0 CompletionHandler:(id /* block */)a1;
- (void)switchToLoginUserWithCompletionHandler:(id /* block */)a0;
- (void)fetchBundleIdentifierForType:(int)a0 completionHandler:(id /* block */)a1;
- (void)suspendQuotasWithCompletionHandler:(id /* block */)a0;
- (void)fetchBundleIdentifierForPersonaWithPersonaUniqueString:(id)a0 completionHandler:(id /* block */)a1;
- (void)unregisterStakeHolder:(id)a0 status:(unsigned long long)a1 reason:(id)a2;
- (void)registerPersonaListUpdateObserver:(id)a0 completionHandler:(id /* block */)a1;
- (void)userListDidUpdate;
- (void)_allUsersDidChange;

@end
